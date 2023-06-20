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
void decending_sort(Node *&head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value < j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
}
void print_mid(Node *head)
{
    vector<int> v;
    while (head != NULL)
    {
        v.push_back(head->value);
        head = head->next;
    }
    if (v.size() % 2 != 0)
    {
        cout << v[v.size() / 2] << endl;
    }
    else
    {
        cout << v[(v.size() / 2) - 1] << " " << v[v.size() / 2];
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
    decending_sort(head);
    print_mid(head);
    return 0;
}