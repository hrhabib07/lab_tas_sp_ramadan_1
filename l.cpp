#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3 = "";
    cin >> s1 >> s2;
    int tot = s1.length() + s2.length();
    for (int i = 0; i < tot; i++)
    {
        if (i % 2 == 0 && i < s1.length() && i < s2.length())
            s3 += s1[i];
        else if (i % 2 != 0 && i < s1.length() && i < s2.length())
            s3 += s2[i];
        else
        {
            if (s1.length() > s2.length())
                s3 += s1[i];
            else
                s3 += s2[i];
        }
    }
    cout << s3 << endl;
    return 0;
}