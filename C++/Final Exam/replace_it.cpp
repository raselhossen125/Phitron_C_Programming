#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    string x;
    string result[t];
    for (int i = 0; i < t; i++)
    {
        cin >> s >> x;
        int position = s.find(x);
        s.replace(position, s.size(), "$");
        result[i] = s;
    }
    for (int i = 0; i < t; i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}
