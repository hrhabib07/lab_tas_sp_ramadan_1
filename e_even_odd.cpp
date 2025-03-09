#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int e = 0, o = 0, p = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
            p++;
        if (x < 0)
            neg++;
        if (x % 2 == 0)
            e++;
        if (x % 2 != 0)
            o++;
    }
    cout << "Even: " << e << endl;
    cout << "Odd: " << o << endl;
    cout << "Positive: " << p << endl;
    cout << "Negative: " << neg << endl;

    return 0;
}