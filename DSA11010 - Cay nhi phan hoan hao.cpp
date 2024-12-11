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
void MakeNode(Node *root,int data, char kytu) {
    if (kytu == 'L' && root -> left == NULL) {
        root ->left = new Node(data);
    }
    else if (kytu == 'R' && root -> right == NULL ) root ->right = new Node(data);
}
void AddNode(Node *root,int cha,int con ,char kytu) {
    if (root == NULL) return;
    if (root -> data == cha) {
        MakeNode(root,con,kytu);
    }
    AddNode(root -> left,cha,con,kytu);
    AddNode(root -> right,cha,con,kytu);
}
int findDepth(Node *root) {
    if (root == NULL) return 0;
    int leftDepth = findDepth(root -> left);
    int rightDepth = findDepth(root -> right);
    return 1 + max(leftDepth,rightDepth);
}
bool checkPerfect(Node *root,int d,int level = 0) {
    if (root == NULL) return true;
    if (root -> left == NULL && root -> right == NULL) 
        return (d == level + 1);
    if (root -> left == NULL || root -> right == NULL) {
        return false;
    }
    return checkPerfect(root ->left , d , level + 1) && checkPerfect(root -> right,d , level +1);
}

void solve() {
    Node *root = NULL;
    int n; cin >> n;
    while (n--) {
        int u, v ; char x;
        cin >> u >> v >> x;
        if (root == NULL) root = new Node(u);
        AddNode(root,u,v,x);
    }
    int depth = findDepth(root);
    if (checkPerfect(root,depth)) {
        cout << "Yes";
    }
    else cout << "No";
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