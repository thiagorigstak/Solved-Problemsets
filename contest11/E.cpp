#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int y, k, n;
    vector<int> x;
    cin >> y >> k >> n;
    for (int i = 1; i < n; i++)
    {
        if ((y + i) % k == 0 && i + y <= n)
        {
            x.push_back(i);
        }
    }
    if (x.size() == 0)
    {
        cout << "-1" << endl;
        return 0;
    }
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i];
        if (i + 1 != x.size())
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }
    return 0;
}