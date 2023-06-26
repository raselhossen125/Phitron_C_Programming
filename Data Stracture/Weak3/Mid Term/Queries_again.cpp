#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
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
    head->prev = insertedNode;
    head = insertedNode;
}
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
    insertedNode->prev = tail;
    tail = insertedNode;
}
void insert_at_position(Node *head, int pos, int val)
{
    Node *insertedNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    insertedNode->next = tmp->next;
    tmp->next = insertedNode;
    insertedNode->next->prev = insertedNode;
    insertedNode->prev = tmp;
}
void print_allNode(Node *head)
{
    if (head == NULL)
        return;
    cout << head->value << " ";
    print_allNode(head->next);
}
void print_reverseNode(Node *tail)
{
    if (tail == NULL)
        return;
    cout << tail->value << " ";
    print_reverseNode(tail->prev);
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int query;
    cin >> query;
    while (query--)
    {
        int position;
        int val;
        cin >> position >> val;
        if (position == 0)
        {
            head_insert(head, tail, val);
            cout << "L -> ";
            print_allNode(head);
            cout << endl;
            cout << "R -> ";
            print_reverseNode(tail);
            cout << endl;
        }
        else if (position == size(head))
        {
            tail_insert(head, tail, val);
            cout << "L -> ";
            print_allNode(head);
            cout << endl;
            cout << "R -> ";
            print_reverseNode(tail);
            cout << endl;
        }
        else if (position > size(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_at_position(head, position, val);
            cout << "L -> ";
            print_allNode(head);
            cout << endl;
            cout << "R -> ";
            print_reverseNode(tail);
            cout << endl;
        }
    }
    return 0;
}