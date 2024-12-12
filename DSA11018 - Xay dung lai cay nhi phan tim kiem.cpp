#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *right = NULL , *left = NULL;
    Node (int data) {
        this -> data = data;
    }
};
void AddNode(Node* &root, int x) {
    if (root== NULL) {
        root = new Node(x);
        return;
    }
    if (x < root -> data) {
        AddNode(root -> left ,x);
    }
    if (x > root -> data) {
        AddNode(root -> right ,x);
    }
}
void Pre(Node *root) {
    if (root == NULL) return;
    cout << root -> data << " ";
    Pre(root -> left);
    Pre(root -> right);

}
void solve() {
    Node* root = NULL;
    int n; cin >> n;
    while (n--) {
        int x; cin >> x;
        AddNode(root,x);
    }
    Pre(root);
}
int main() {
    int t; cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}