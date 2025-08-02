#include <iostream>
#include <stdexcept> // for exception
using namespace std;

class Calculator {
public:
    int power(int n, int p) {
        if (n < 0 || p < 0) {
            throw invalid_argument("n and p should be non-negative");
        }
        int result = 1;
        for (int i = 0; i < p; i++) {
            result *= n;
        }
        return result;
    }
};

int main() {
    Calculator myCalculator;
    int T, n, p;
    cin >> T;
    while (T--) {
        cin >> n >> p;
        try {
            int ans = myCalculator.power(n, p);
            cout << ans << endl;
        } catch (exception& e) {
            cout << e.what() << endl;
        }
    }
    return 0;
}
