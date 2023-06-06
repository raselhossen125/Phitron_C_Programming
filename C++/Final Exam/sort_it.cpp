#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    string s;
    int id;
    int math_marks;
    int english_marks;
};
bool cmp(Student a, Student b)
{
    if (a.english_marks + a.math_marks > b.english_marks + b.math_marks)
        return true;
    else if (a.english_marks + a.math_marks == b.english_marks + b.math_marks)
    {
        if (a.id < b.id)
            return true;
        else
            return false;
    }
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].nm >> s[i].cls >> s[i].s >> s[i].id >> s[i].math_marks >> s[i].english_marks;
    }
    sort(s, s + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << s[i].nm << " " << s[i].cls << " " << s[i].s << " " << s[i].id << " " << s[i].math_marks << " " << s[i].english_marks << " " << endl;
    }
    return 0;
}