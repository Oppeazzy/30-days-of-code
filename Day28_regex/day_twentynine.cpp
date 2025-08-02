
#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    list<string> names;
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        string firstName, emailID;
        cin >> firstName >> emailID;
        // Check if email ends with "@gmail.com"
        if (emailID.find("@gmail.com") != string::npos) {
            names.push_front(firstName);
        }
    }

    names.sort(); // Alphabetically sort names

    for (const auto& name : names) {
        cout << name << '\n';
    }

    return 0;
}
