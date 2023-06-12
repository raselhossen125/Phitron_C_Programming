#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<string> result(t);
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int j = 1; j < n; j++)
        {
            if (a[j] < a[j - 1])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
            result[i] = "YES";
        else
            result[i] = "NO";
    }
    for (int i = 0; i < t; i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}