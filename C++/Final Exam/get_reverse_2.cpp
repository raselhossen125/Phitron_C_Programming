#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    string s;
    int id;
};
int main()
{
    int n;
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].nm >> s[i].cls >> s[i].s >> s[i].id;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(s[i].id, s[j].id);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i].nm << " " << s[i].cls << " " << s[i].s << " " << s[i].id << " " << endl;
    }
    return 0;
}