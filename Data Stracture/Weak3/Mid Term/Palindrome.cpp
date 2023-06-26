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
void tail_insert_senond(Node *n, Node *&head, Node *&tail)
{
    if (n == NULL)
        return;
    tail_insert_senond(n->next, head, tail);
    tail_insert(head, tail, n->value);
}
void result(Node *head, Node *head2)
{
    Node *tmp1 = head;
    Node *tmp2 = head2;
    bool flag = true;
    while (tmp1 != NULL)
    {
        if (tmp1->value != tmp2->value)
        {
            flag = false;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
    Node *head2 = NULL;
    Node *tail2 = NULL;
    tail_insert_senond(head, head2, tail2);
    result(head, head2);
    return 0;
}