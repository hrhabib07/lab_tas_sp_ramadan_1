#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int a;
    cin >> n >> a;
    long long int sum = 0;
    while (n--)
    {
        sum += a % 10;
        a /= 10;
    }
    cout << sum;
    return 0;
}