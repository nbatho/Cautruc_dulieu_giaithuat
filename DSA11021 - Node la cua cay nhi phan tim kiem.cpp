#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left = NULL , *right = NULL;
    Node (int data ) {
        this -> data = data;
    }
};
void AddNode(Node *&root, int x) {
    if (root == NULL) 
    {
        root = new Node(x);
        return;
    }    
    if (x < root -> data) {
        AddNode(root -> left,x);
    } else AddNode(root -> right,x);
}
void printLeafNode(Node *root) {
    if (root == NULL) return ;
    if (root -> left == NULL && root -> right == NULL)
    {
        cout << root -> data << " ";
        return;
    }
    if (root -> left  != NULL) {
        printLeafNode(root -> left);
    }
    if (root -> right != NULL) {
        printLeafNode(root -> right);
    }
    
}
void solve() {
    Node *root = NULL;
    int n; cin >> n;
    while (n--) {
        int x; cin >> x;
        AddNode(root,x);
    }
    printLeafNode(root);
}
int main() {
    int t; cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}