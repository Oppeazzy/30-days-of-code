#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    try {
        int number = stoi(S);  // attempt to convert string to int
        cout << number << endl;
    } catch (exception& e) {
        cout << "Bad String" << endl;
    }

    return 0;
}
