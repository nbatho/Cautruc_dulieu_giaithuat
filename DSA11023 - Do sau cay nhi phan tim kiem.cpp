#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left, *right;
    Node (int data) {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};
void AddNode(Node* &root, int x) {
    if (root == NULL) {
        root = new Node(x);
        return;
    }
    if (x < root -> data) {
        AddNode(root -> left ,x);
    }
    else AddNode(root -> right, x);
}
int findDepth(Node *root) {
    if (root == NULL) return 0;
    int leftDepth = findDepth(root -> left);
    int rightDepth = findDepth(root -> right);
    return 1 + max(leftDepth,rightDepth);
}
void solve() {
    Node *root = NULL;
    int n; cin >> n;
    while (n--) {
        int x; cin >> x;
        AddNode(root,x);
    }
    int depth = findDepth(root) - 1;
    cout << depth;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}