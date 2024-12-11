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
void MakeNode(Node* root,int data,char vitri) {
    if (vitri == 'R') root -> right = new Node(data);
    if (vitri == 'L') root -> left = new Node(data);
}
void Add (Node *root,int cha, int con ,char vitri) {
    if (root == NULL) return ;
    if (root -> data == cha) MakeNode(root,con,vitri);
    else {
        Add(root -> left,cha,con,vitri);
        Add(root -> right,cha,con,vitri);
    } 
}
int CountLeaf(Node* root) {
    if (root == NULL) return 0;
    if (root -> left == NULL && root -> right == NULL) return 1;
    return CountLeaf(root -> left) + CountLeaf(root -> right);
}
void solve() {
    Node *root = NULL;
    int n; cin >> n;
    while(n--) {
        int u , v;
        char x;
        cin >> u >> v >> x;
        if (root == NULL) root = new Node(u);
        Add(root,u,v,x);
    }
    cout << (CountLeaf(root->left) == CountLeaf(root -> right));
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