#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root != NULL)
        q.push(root);

    while (!q.empty())
    {
        // ber kore ana
        Node *p = q.front();
        q.pop();

        // oi node K niye kaj
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

int max_depth(Node *root)
{
    if (root == NULL)
        return 0;
    int left = max_depth(root->left);
    int right = max_depth(root->right);

    return max(left, right) + 1;
}

void level_order(Node *root, int x)
{
    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        Node *f = q.front().first;
        int level = q.front().second;
        q.pop();

        if (level == x)
            cout << f->val << " ";

        if (f->left)
            q.push({f->left, level + 1});
        if (f->right)
            q.push({f->right, level + 1});
    }
}

int main()
{

    Node *root = input_tree();

    int x;
    cin >> x;

    int h = max_depth(root);

    if (x > h || x < 0)
        cout << "Invalid" << endl;
    else
        level_order(root, x);

    return 0;
}