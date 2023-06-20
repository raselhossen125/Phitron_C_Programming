#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void tail_insert(Node *&head, Node *&tail, int value)
{
    Node *insertedNode = new Node(value);
    if (head == NULL)
    {
        head = insertedNode;
        tail = insertedNode;
        return;
    }
    tail->next = insertedNode;
    tail = insertedNode;
}
void print_allNode(Node *n)
{
    if (n == NULL)
        return;
    cout << n->value << " ";
    print_allNode(n->next);
}
void print_allNodeReverse(Node *n)
{
    if (n == NULL)
        return;
    print_allNodeReverse(n->next);
    cout << n->value << " ";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        tail_insert(head, tail, val);
    }
    print_allNodeReverse(head);
    cout << endl;
    print_allNode(head);
    return 0;
}
