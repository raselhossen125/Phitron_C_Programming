#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *my_input()
{
    int value;
    cin >> value;
    Node *root;
    if (value == -1)
        root = NULL;
    else
        root = new Node(value);
    queue<Node *> myQueue;
    if (root)
        myQueue.push(root);
    while (!myQueue.empty())
    {
        Node *p = myQueue.front();
        myQueue.pop();
        int l, r;
        cin >> l >> r;
        Node *leftNode;
        Node *rightNode;
        if (l == -1)
            leftNode = NULL;
        else
            leftNode = new Node(l);
        if (r == -1)
            rightNode = NULL;
        else
            rightNode = new Node(r);
        p->left = leftNode;
        p->right = rightNode;
        if (p->left)
            myQueue.push(p->left);
        if (p->right)
            myQueue.push(p->right);
    }
    return root;
}
void findMaxMin(Node *root)
{
    int max = INT_MIN;
    int min = INT_MAX;
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        if (max < root->value)
        {
            max = root->value;
        }
        if (min > root->value)
        {
            min = root->value;
        }
    }
    else
    {
        findMaxMin(root->left);
        findMaxMin(root->right);
        if (max < root->value)
        {
            max = root->value;
        }
        if (min > root->value)
        {
            min = root->value;
        }
        return;
    }
    cout << max << ' ' << min << ' ';
}
int main()
{
    Node *root = my_input();
    findMaxMin(root);
    return 0;
}