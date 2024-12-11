#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left = NULL, *right = NULL;
    Node (int data){
        this -> data = data;
    }
};
void MakeNode(Node *root,int data,char kytu) {
    if (root -> left == NULL && kytu =='L') {
        root -> left = new Node(data);
    }
    if (root -> right == NULL && kytu =='R') {
        root -> right = new Node(data);
    }
}
void AddNode(Node* root, int cha ,int con ,char kytu) {
    if (root == NULL) {
        return;
    }
    if (root -> data == cha) MakeNode(root,con,kytu);
    AddNode(root -> right,cha,con,kytu);
    AddNode(root -> left,cha,con,kytu);
}
bool checkFull(Node *root) {
    queue <Node*> q;
    if (root == NULL) return true;
    q.push(root);
    while (!q.empty()) {
        Node *node = q.front(); q.pop();

        if (node -> left == NULL && node -> right == NULL) 
            continue;
        if (node -> left == NULL || node -> right == NULL) {
            return false;
        }

        q.push(node -> left);
        q.push(node -> right);
    }
    return true;

}
void solve() {
    Node * root = NULL;
    int n; cin >> n;
    while(n--) {
        int u , v; char c ;
        cin >> u >> v >> c;
        if (root == NULL) root = new Node(u);
        AddNode(root,u,v,c);
    }
    if (checkFull(root)) cout << 1;
    else cout << 0;
}   
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}