#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int val)
    {
        this->value = val;
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
void head_insert(Node *&head, Node *&tail, int value)
{
    Node *insertedNode = new Node(value);
    if (head == NULL)
    {
        head = insertedNode;
        tail = insertedNode;
        return;
    }
    insertedNode->next = head;
    head = insertedNode;
}
void print_head_and_tail(Node *head, Node *tail)
{
    cout << head->value << " " << tail->value << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int option;
        cin >> option;
        if (option == 0)
        {
            int value;
            cin >> value;
            head_insert(head, tail, value);
            print_head_and_tail(head, tail);
        }
        else if (option == 1)
        {
            int value;
            cin >> value;
            tail_insert(head, tail, value);
            print_head_and_tail(head, tail);
        }
    }
    return 0;
}