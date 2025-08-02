
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = nullptr;
    }
};

class Solution {
public:
    Node* removeDuplicates(Node* head) {
        Node* current = head;
        while (current != nullptr && current->next != nullptr) {
            if (current->data == current->next->data) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp; // optional cleanup
            } else {
                current = current->next;
            }
        }
        return head;
    }

    Node* insert(Node* head, int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
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
    Solution mylist;
    Node* head = nullptr;
    int T, data;
    cin >> T;
    while (T--) {
        cin >> data;
        head = mylist.insert(head, data);
    }
    head = mylist.removeDuplicates(head);
    mylist.display(head);
    return 0;
}
