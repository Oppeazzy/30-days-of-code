
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Solution {
public:
    Node* insert(Node* head, int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            return newNode;
        }

        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = newNode;
        return head;
    }

    void display(Node* head) {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
    }
};

int main() {
    Node* head = nullptr;
    Solution mylist;

    int T, data;
    cin >> T;

    while (T-- > 0) {
        cin >> data;
        head = mylist.insert(head, data);
    }

    mylist.display(head);
    return 0;
}
