#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int l1 = s1.length();
        int l2 = s2.length();
        int common = min(l1, l2);
        int rem = max(l1, l2) - common;
        int i = 0;
        while (common--)
        {
            cout << s1[i] << s2[i];
            i++;
        }
        if (l1 > l2)
        {
            while (rem--)
            {
                cout << s1[i];
                i++;
            }
        }
        else
        {
            while (rem--)
            {
                cout << s2[i];
                i++;
            }
        }
        cout << '\n';
    }

    return 0;
}