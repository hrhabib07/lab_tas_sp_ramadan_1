#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    int mul = 1;
    mul = (mul * a) % 100;
    mul = (mul * b) % 100;
    mul = (mul * c) % 100;
    mul = (mul * d) % 100;
    if (mul > 9)
    {
        cout << mul % 100;
    }
    else
    {
        cout << 0 << mul;
    }

    return 0;
}