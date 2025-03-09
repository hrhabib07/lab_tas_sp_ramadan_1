#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        char dig;
        cin >> dig;
        sum += dig - '0';
    }

    cout << (sum * 1LL);
    return 0;
}