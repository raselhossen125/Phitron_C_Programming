#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    string value = "Ratul";
    int count = 0;
    while (ss >> word)
    {
        if (word == value)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}