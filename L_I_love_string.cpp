#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3 = "";
    cin >> s1 >> s2;
    int l1 = s1.length();
    int l2 = s2.length();
    int tot = min(l1, l2);
    for (int i = 0; i < tot; i++)
    {
        s3 += s1[i] + s2[i];
    }
    int rem = max(l1, l2) - min(l1, l2);
    if (l1 > l2)
    {
        for (int i = 0; i < rem; i++)
        {
            s3 += s1[i];
        }
    }
    else
    {
        for (int i = 0; i < rem; i++)
        {
            s3 += s2[i];
        }
    }
    cout << s3 << endl;
    return 0;
}