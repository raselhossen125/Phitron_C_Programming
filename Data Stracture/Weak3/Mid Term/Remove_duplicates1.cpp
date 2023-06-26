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
void ascending_sort(Node *&head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value > j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
}
void remove_duplicate(Node *head)
{
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        if (tmp->value == tmp->next->value)
        {
            Node *deleteNode = tmp->next;
            tmp->next = tmp->next->next;
            delete deleteNode;
        }
        if (tmp->next == NULL)
            break;
        else if (tmp->value != tmp->next->value)
        {
            tmp = tmp->next;
        }
    }
}
void print_allNode(Node *n)
{
    if (n == NULL)
        return;
    cout << n->value << " ";
    print_allNode(n->next);
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
    ascending_sort(head);
    remove_duplicate(head);
    print_allNode(head);
    return 0;
}