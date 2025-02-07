#include<iostream>
using namespace std;

class Glass {
    public:
        int Liquidlevel;
        Glass() {
            Liquidlevel = 200; 
        }
        void Drink(int milliliters) {
            Liquidlevel -= milliliters; 
        }

        void Refill() {
            Liquidlevel = 200; 
        }

        void set_level(int milliliters) {
            Liquidlevel = milliliters; 
        }
};

int main() {
    Glass g;
    g.set_level(200);

    while (g.Liquidlevel != 0) {
        int input;
        cin >> input;  
        g.Drink(input);

        if (g.Liquidlevel == 100) {
            g.Refill();
        }
    }
    return 0;
}
