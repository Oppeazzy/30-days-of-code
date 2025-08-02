
#include <algorithm>
#include <iostream>
#include <vector>
#include <stdexcept>
#include <set>
#include <cassert>
using namespace std;

int minimum_index(const vector<int>& seq) {
    if (seq.empty()) {
        throw invalid_argument("Cannot get the minimum value index from an empty sequence");
    }
    int min_idx = 0;
    for (int i = 1; i < seq.size(); ++i) {
        if (seq[i] < seq[min_idx]) {
            min_idx = i;
        }
    }
    return min_idx;
}

class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        return {};
    }
};

class TestDataUniqueValues {
public:
    static vector<int> get_array() {
        return {3, 2, 8, 4, 1}; // unique values
    }
    static int get_expected_result() {
        return 4; // index of minimum value
    }
};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
        return {5, 1, 3, 1, 2}; // exactly two minima
    }
    static int get_expected_result() {
        return 1; // index of first minimum
    }
};

void TestWithEmptyArray() {
    try {
        auto seq = TestDataEmptyArray::get_array();
        int r = minimum_index(seq);
    } catch (invalid_argument&) {
        return;
    }
    assert(false && "Exception wasn't thrown as expected");
}

void TestWithUniqueValues() {
    auto seq = TestDataUniqueValues::get_array();
    assert(seq.size() >= 2);
    assert(set<int>(seq.begin(), seq.end()).size() == seq.size());
    assert(minimum_index(seq) == TestDataUniqueValues::get_expected_result());
}

void TestWithExactlyTwoDifferentMinimums() {
    auto seq = TestDataExactlyTwoDifferentMinimums::get_array();
    assert(seq.size() >= 2);
    auto tmp = seq;
    sort(tmp.begin(), tmp.end());
    assert(tmp[0] == tmp[1] && (tmp.size() == 2 || tmp[1] < tmp[2]));
    assert(minimum_index(seq) == TestDataExactlyTwoDifferentMinimums::get_expected_result());
}

int main() {
    TestWithEmptyArray();
    TestWithUniqueValues();
    TestWithExactlyTwoDifferentMinimums();
    cout << "OK\n";
    return 0;
}
