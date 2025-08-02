
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int maxVal = 0;
        // Find the maximum value of (A & B) where A < B <= N and result < K
        for (int a = 1; a <= n; ++a) {
            for (int b = a + 1; b <= n; ++b) {
                int val = a & b;
                if (val < k && val > maxVal) {
                    maxVal = val;
                }
            }
        }
        cout << maxVal << endl;
    }
    return 0;
}
