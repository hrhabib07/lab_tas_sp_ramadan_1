#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ind = 0;
    char sign;
    for (char c : s)
    {
        if (int(c) < 48)
        {
            sign = c;
            break;
        }
        ind++;
    }
    int num1 = 0;
    for (int i = 0; i < ind; i++)
    {
        num1 *= 10;
        num1 += int(s[i]) - '0';
    }
    int num2 = 0;
    for (int i = ind + 1; i < s.length(); i++)
    {
        num2 *= 10;
        num2 += int(s[i]) - '0';
    }
    if (s[ind] == '+')
        cout << num1 + num2;

    else if (s[ind] == '*')
        cout << num1 * num2;
    else if (s[ind] == '/')
        cout << num1 / num2;
    else if (s[ind] == '-')
        cout << num1 - num2;
    return 0;
}