
#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, string> phoneBook;

    string name, number;
    for (int i = 0; i < n; i++) {
        cin >> name >> number;
        phoneBook[name] = number;
    }

    while (cin >> name) {
        if (phoneBook.find(name) != phoneBook.end()) {
            cout << name << "=" << phoneBook[name] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }

    return 0;
}
