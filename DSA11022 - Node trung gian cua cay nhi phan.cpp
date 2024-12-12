#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left = NULL , *right = NULL;
    Node (int data) {
        this -> data = data;
    }
};
void AddNode(Node* &root, int x) {
    if (root == NULL) {
        root = new Node(x);
        return;
    }
    if (x < root -> data) {
        AddNode(root -> left , x);
    } else AddNode(root -> right , x);
}
int CountLeaf(Node* root) {
    if (root == NULL) return 0;
    queue<Node*> q;
    int cnt = 0;
    q.push(root);
    while (!q.empty()) {
        Node* tmp = q.front(); q.pop();

        if (tmp -> left == NULL && tmp -> right == NULL) {
            cnt++;
        }

        if (tmp -> left !=NULL) {
            q.push(tmp -> left);
        }
        if (tmp -> right !=NULL) {
            q.push(tmp -> right);
        }
    }
    return cnt;
}
void solve() {
    Node* root = NULL;
    int n; cin >> n ;
    int tmp = n;
    while (n--) {
        int x; cin >> x;
        AddNode(root,x);
    }
    int res = tmp - CountLeaf(root);
    cout << res;
}
int main() {
    int t; cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}