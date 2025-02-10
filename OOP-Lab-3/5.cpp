#include <iostream>
#include <vector>
using namespace std;

class Book {
    string name;
    string isbn;
    string author;
    string publisher;
public:
    Book(string name, string isbn, string author, string publisher) {
        this->name = name;
        this->isbn = isbn;
        this->author = author;
        this->publisher = publisher;
    }
    string getName() { return name; }
    string getISBN() { return isbn; }
    string getAuthor() { return author; }
    string getPublisher() { return publisher; }
    string getBookInfo() {
        return "Name: " + name + ", ISBN: " + isbn + ", Author: " + author + ", Publisher: " + publisher;
    }
};

int main(int argc, char* argv[]) {
    vector<Book> books;
    if (argc < 5 || (argc - 1) % 4 != 0) {
        cout << "Usage: ./program book1_name book1_isbn book1_author book1_publisher ..." << endl;
        return 1;
    }
    for (int i = 1; i < argc; i += 4) {
        books.push_back(Book(argv[i], argv[i+1], argv[i+2], argv[i+3]));
    }
    for (int i = 0; i < books.size(); i++) {
        cout << books[i].getBookInfo() << "\n";
    }
    return 0;
}
