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
bool compeare(Node *head1, Node *head2)
{
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->value != head2->value)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if (head1 == NULL && head2 == NULL)
    {
        return true;
    }
    return false;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    for (int i = 0; i < 2; i++)
    {
        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
                break;
            if (i == 0)
            {
                tail_insert(head1, tail1, val);
            }
            else
            {
                tail_insert(head2, tail2, val);
            }
        }
    }

    if (compeare(head1, head2))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}