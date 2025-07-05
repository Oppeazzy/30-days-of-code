
#include <iostream>
using namespace std;

class Person {
public:
    int age;

    // Constructor
    Person(int initialAge) {
        if (initialAge < 0) {
            cout << "Age is not valid, setting age to 0." << endl;
            age = 0;
        } else {
            age = initialAge;
        }
    }

    // Method to print age group
    void amIOld() {
        if (age < 13) {
            cout << "You are young." << endl;
        } else if (age >= 13 && age < 18) {
            cout << "You are a teenager." << endl;
        } else {
            cout << "You are old." << endl;
        }
    }

    // Method to simulate a year passing
    void yearPasses() {
        age++;
    }
};

int main() {
    int T; // Number of test cases
    cin >> T;
    for (int i = 0; i < T; i++) {
        int age;
        cin >> age;
        Person p(age);
        p.amIOld();
        for (int j = 0; j < 3; j++) {
            p.yearPasses();
        }
        p.amIOld();
        cout << endl;
    }
    return 0;
}
