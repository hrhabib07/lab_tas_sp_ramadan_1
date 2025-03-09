#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long int> v;
    v.push_back(0);
    v.push_back(1);
    for (int i = 2; i < n; i++)
    {
        v.push_back(v[i - 1] + v[i - 2]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}