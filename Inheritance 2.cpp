#include <bits/stdc++.h>
using namespace std;

class base {
    public:
    void display () {
        cout << "Function of base class" << endl;
    }
};

class derived: public base {
    public:
    void display () {
        cout << "Function of derived class" << endl;

        // calling base class function
        base :: display();
    }
};

int main() {
    // create object of derived class 
    derived d;
    d.display();
    return 0;
}