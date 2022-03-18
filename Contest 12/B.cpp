#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t, s, x;
    cin >> t >> s >> x;
    if (x == t)
    {
        cout << "YES" << endl;
        return 0;
    }
    else if (x < s + t && x != t)
    {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = t; i <= x; i += s)
    {
        if (i == x || i + 1 == x)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}