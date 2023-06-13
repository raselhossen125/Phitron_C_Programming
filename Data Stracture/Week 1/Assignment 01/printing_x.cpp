// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (n / 2 == j && i == j)
//             {
//                 cout << "X";
//             }
//             else if (i == j)
//             {
//                 cout << "\\";
//             }
//             else if (i + j == n - 1)
//             {
//                 cout << "/";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
    p = NULL;
}
int main()
{
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout << *ptr << endl;
    return 0;
}