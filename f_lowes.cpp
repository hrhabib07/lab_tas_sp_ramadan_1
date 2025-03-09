#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    };
    int x;
    cin >> x;
    int ind = 0, min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int cur = v[i];
        if (cur < min)
        {
            min = cur;
            ind = i + 1;
        }
    }
    cout << min << " " << ind;
    return 0;
}