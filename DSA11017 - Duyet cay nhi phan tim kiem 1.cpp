#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left = NULL;
    Node *right = NULL;
    Node(int data) {
        this->data = data;
    }
};

void AddNode(Node*& root, int x) {
    if (root == NULL) {
        root = new Node(x);
        return;
    }
    if (x < root->data) {
        AddNode(root->left, x);
    } else {
        AddNode(root->right, x);
    }
}

void PostOrder(Node* root) {
    if (root != NULL) {
        PostOrder(root->left);
        PostOrder(root->right);
        cout << root->data << " ";
    }
}

void solve() {
    Node* root = NULL;
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        AddNode(root, x);
    }
    PostOrder(root);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}
