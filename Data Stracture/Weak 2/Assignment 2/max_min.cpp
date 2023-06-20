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
void max_and_min(Node *head)
{
    Node *temporary = head;
    int min = 100000;
    int max = 0;
    while (temporary != NULL)
    {
        if (temporary->value < min)
        {
            min = temporary->value;
        }
        if (temporary->value > max)
        {
            max = temporary->value;
        }
        temporary = temporary->next;
    }
    cout << max << " " << min << endl;
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
    max_and_min(head);
    return 0;
}