#include <bits/stdc++.h>
using namespace std;

struct Node {
    string data;
    Node* left = NULL;
    Node* right = NULL;
    Node(string x) {
        this->data = x;
    }
};

int PostOrder(Node* root) {
    if (root == NULL) return 0;
    if (root -> left == NULL && root ->right == NULL) return stoi(root -> data);
    int left = PostOrder(root -> left);
    int right = PostOrder(root -> right);
    if (root -> data == "+") return left + right;
    if (root -> data == "-") return left - right;
    if (root -> data == "/") return left / right;
    if (root -> data == "*") return left * right;
    return 0;
}

void solve() {
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    if (n == 0 || a[0] == "null") {
        return;
    }
    queue<Node*> q;
    Node* root = new Node(a[0]);
    q.push(root);

    int i = 1;
    while (!q.empty() && i < n) {
        Node* cur = q.front();
        q.pop();

        if (i < n && a[i] != "null") {
            cur->left = new Node(a[i]);
            q.push(cur->left);
        }
        i++;

        if (i < n && a[i] != "null") {
            cur->right = new Node(a[i]);
            q.push(cur->right);
        }
        i++;
    }
    cout << PostOrder(root);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}
