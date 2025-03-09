#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string reb = s;
    reverse(reb.begin(), reb.end());
    if (s == reb)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}