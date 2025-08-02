
#include <iostream>
using namespace std;

template <class T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    int n;
    cin >> n;
    int intArray[n];
    for (int i = 0; i < n; i++) {
        cin >> intArray[i];
    }

    int m;
    cin >> m;
    string stringArray[m];
    for (int i = 0; i < m; i++) {
        cin >> stringArray[i];
    }

    printArray(intArray, n);
    printArray(stringArray, m);

    return 0;
}
