#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int flag = 0;
    int l1 = s1.size(), l2 = s2.size();

    if (l1 < l2 && !flag)
        s1;
    if (l1 < l2 && flag)
        s2;
    if (l1 > l2 && flag)
        s2;

    return 0;
}