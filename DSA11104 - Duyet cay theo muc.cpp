#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left = NULL;
    Node *right = NULL;
    Node (int data) {
        this -> data = data;
    }
};
void MakeNode(Node* root, int cha, int con ,char vitri) {
    if (vitri == 'L') {
        root -> left = new Node(con);
    }
    if (vitri == 'R') {
        root -> right = new Node(con);
    }
}
void Add(Node* root,int cha,int con ,char vitri) {
    if (root == NULL) return;
    if (root -> data == cha) {
        MakeNode(root,cha,con,vitri);
    }
    else {
        Add(root -> left,cha,con,vitri);
        Add(root -> right,cha,con,vitri);
    }
}
void LevelOrder(Node* root) {
    if (root == NULL) return;
    queue <Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* cur = q.front(); q.pop();
        cout << cur -> data << " ";
        if (cur -> left != NULL) q.push(cur -> left);
        if (cur -> right != NULL) q.push(cur -> right);
    }
}
void solve() {
    int n; cin >> n;
    Node *root = NULL;
    while (n--) {
        // cha con vitricon
        int u , v;
        char x;
        cin >> u >> v >> x;
        if (root == NULL) {
            root = new Node(u);
        }
        Add(root,u,v,x);
    }
    LevelOrder(root);
}   
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
        cout << '\n';
    }
    return 0;
}