
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    int root = sqrt(n);
    for (int i = 3; i <= root; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        if (isPrime(n))
            cout << "Prime '\n";
        else
            cout << "Not prime '\n" ;
    }
    return 0;
}

