
#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    Node* insert(Node* root, int data) {
        if (root == NULL) {
            return new Node(data);
        } else {
            if (data <= root->data) {
                root->left = insert(root->left, data);
            } else {
                root->right = insert(root->right, data);
            }
            return root;
        }
    }

    void levelOrder(Node* root) {
        if (root == NULL) return;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* current = q.front();
            q.pop();

            cout << current->data << " ";

            if (current->left != NULL) {
                q.push(current->left);
            }

            if (current->right != NULL) {
                q.push(current->right);
            }
        }
    }
};

int main() {
    Solution myTree;
    Node* root = NULL;

    int t;
    int data;

    cin >> t;

    while (t-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }

    myTree.levelOrder(root);

    return 0;
}
