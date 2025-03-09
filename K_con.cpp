#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        int c = s[i];
        if (c > 64 && c < 91)
            s[i] = s[i] + 32;
        else if (c > 96 && c < 123)
            s[i] = s[i] - 32;
        else if (c == 44)
            s[i] = ' ';
    }
    cout << s;
    return 0;
}