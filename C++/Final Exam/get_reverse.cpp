#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    string s;
    int math_marks;
    int english_marks;
};
int main()
{
    int n;
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].nm >> s[i].cls >> s[i].s >> s[i].math_marks >> s[i].english_marks;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << s[i].nm << " " << s[i].cls << " " << s[i].s << " " << s[i].math_marks << " " << s[i].english_marks << " " << endl;
    }
    return 0;
}