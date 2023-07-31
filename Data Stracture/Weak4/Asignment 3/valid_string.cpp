// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;
//     while(n--)
//     {
//         stack<string> stack;
//         string val;
//         cin>> val;
//         for (int i = 0; i < val.length(); i++)
//         {
//             if (stack.top() == "A" && val[i] == "B" || stack.top() == "B" && val[i] == "A")
//             {
//                 stack.pop();
//             }
//             else
//             {
//                 stack.push(val[i]);
//             }
//         }
//         stack.empty() ? "YES" : "NO";
//     }
//     return 0;
// }