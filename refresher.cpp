#include <iostream>

using namespace std;

class Person {
private:
    string name;
public:
    Person(string p_name) : name(p_name) {}
    Person() : name(name) {}

    void enterName() {
        cout << "Enter name: ";
        cin >> name;
    }
    void displayName() {
        cout << "Name: " << name << endl;
    }
};


int main() {
    Person p("Juan"), p2;
    p2.enterName();

    p.displayName();
    p2.displayName();
}
