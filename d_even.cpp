#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i += 2)
    {
        cout << i << endl;
    }
    if (n < 2)
        cout << -1;
    return 0;
}