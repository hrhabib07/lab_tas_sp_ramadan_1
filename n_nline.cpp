#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string newS = "";
    for (char c : s)
    {
        if (c == '\\')
            break;
        newS += c;
    }
    cout << newS;
    return 0;
}