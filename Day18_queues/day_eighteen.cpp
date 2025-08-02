
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Solution {
private:
    stack<char> s;
    queue<char> q;

public:
    void pushCharacter(char ch) {
        s.push(ch);
    }

    void enqueueCharacter(char ch) {
        q.push(ch);
    }

    char popCharacter() {
        char top = s.top();
        s.pop();
        return top;
    }

    char dequeueCharacter() {
        char front = q.front();
        q.pop();
        return front;
    }
};

int main() {
    string s;
    getline(cin, s);

    Solution obj;

    // Load characters into stack and queue
    for (char c : s) {
        obj.pushCharacter(c);
        obj.enqueueCharacter(c);
    }

    // Compare characters
    bool isPalindrome = true;
    for (int i = 0; i < s.length() / 2; ++i) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            break;
        }
    }

    // Output result
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}
