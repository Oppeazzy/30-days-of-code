
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Difference {
private:
    vector<int> elements;

public:
    int maximumDifference;

    // Constructor
    Difference(vector<int> elements) {
        this->elements = elements;
    }

    void computeDifference() {
        int minVal = elements[0];
        int maxVal = elements[0];
        
        for (int val : elements) {
            if (val < minVal) minVal = val;
            if (val > maxVal) maxVal = val;
        }

        maximumDifference = abs(maxVal - minVal);
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    Difference d(a);
    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}









