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
void myPrint(Node *root)
{
    if (root == NULL)
    {
        cout << "Nothing" << endl;
        return;
    }
    queue<Node *> myQueue;
    vector<Node *> myVector;
    myQueue.push(root);
    while (!myQueue.empty())
    {
        Node *myNode = myQueue.front();
        myQueue.pop();
        myVector.push_back(myNode);
        if (myNode->right)
            myQueue.push(myNode->right);
        if (myNode->left)
            myQueue.push(myNode->left);
    }
    reverse(myVector.begin(), myVector.end());
    for (int i = 0; i < myVector.size(); i++)
        cout << myVector[i]->value << " ";
}
int main()
{
    Node *root = my_input();
    myPrint(root);
    return 0;
}