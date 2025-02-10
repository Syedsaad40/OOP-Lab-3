#include<iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int data[10][10];
public:
    Matrix(int r, int c) : rows(r), cols(c) {}
    
    int getRows() { return rows; }
    int getCols() { return cols; }
    
    void setElement(int i, int j, int val) {
        data[i][j] = val;
    }
    
    Matrix add(Matrix& other) {
        if (rows != other.rows || cols != other.cols) {
            cout << "Matrices cannot be added" << endl;
            return Matrix(0, 0);
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }
    
    Matrix multiply(Matrix& other) {
        if (cols != other.rows) {
            cout << "Matrices cannot be multiplied" << endl;
            return Matrix(0, 0);
        }
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }
    
    void print() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main(int argc, char* argv[]) {
    if (argc < 10) {
        cout << "Insufficient arguments" << endl;
        return 1;
    }
    
    int r1 = stoi(argv[1]), c1 = stoi(argv[2]);
    int r2 = stoi(argv[3]), c2 = stoi(argv[4]);
    
    Matrix m1(r1, c1), m2(r2, c2);
    int index = 5;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            m1.setElement(i, j, stoi(argv[index++]));
        }
    }
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            m2.setElement(i, j, stoi(argv[index++]));
        }
    }
    
    cout << "Matrix 1:" << endl;
    m1.print();
    cout << "Matrix 2:" << endl;
    m2.print();
    
    cout << "Addition Result:" << endl;
    Matrix sum = m1.add(m2);
    sum.print();
    
    cout << "Multiplication Result:" << endl;
    Matrix product = m1.multiply(m2);
    product.print();
    
    return 0;
}
