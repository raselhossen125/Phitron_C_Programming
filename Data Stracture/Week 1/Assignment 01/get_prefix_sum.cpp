#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> a(n);
    vector<long long int> prefix_sum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    prefix_sum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = a[i] + prefix_sum[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << prefix_sum[i] << ' ';
    }
    return 0;
}