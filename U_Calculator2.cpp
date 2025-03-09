#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ind = 0;
    long long n1 = 0, n2 = 0;
    int pls = 0, mns = 0, mul = 0, div = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            ind = i;
            if (s[i] == '+')
                pls = 1;
            else if (s[i] == '*')
        }
        n1 *= 10;
        n1 += s[i] - '0';
    }

    return 0;
}