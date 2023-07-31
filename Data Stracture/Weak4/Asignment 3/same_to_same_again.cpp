#include <bits/stdc++.h>
using namespace std;
class MyStack
{
public:
    vector<int> myVector;
    void push(int val)
    {
        myVector.push_back(val);
    }
    void pop()
    {
        myVector.pop_back();
    }
    int top()
    {
        return myVector.back();
    }
    int size()
    {
        return myVector.size();
    }
    bool empty()
    {
        if (myVector.size() == 0)
            return true;
        else
            return false;
    }
};
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
class MyQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sizeCount = 0;
    void push(int val)
    {
        sizeCount++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sizeCount--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->value;
    }
    int size()
    {
        return sizeCount;
    }
    bool empty()
    {
        if (sizeCount == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    MyStack stack;
    MyQueue queue;
    int n, m;
    cin >> n;
    cin >> m;
    while (n--)
    {
        int val;
        cin >> val;
        stack.push(val);
    }
    while (m--)
    {
        int val;
        cin >> val;
        queue.push(val);
    }
    bool flag = true;
    int ss = stack.size();
    int sq = queue.size();
    if (ss == sq)
    {
        for (int i = 0; i < ss; i++)
        {
            if (stack.top() != queue.front())
            {
                flag = false;
                break;
            }
            else
            {
                stack.pop();
                queue.pop();
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}