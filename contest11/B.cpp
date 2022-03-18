#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int a, b, c, d;
    bool normal = 0, deg = 0;
    cin >> a >> b >> c >> d;
    if (a + b > c && a + c > b && b + c > a)
    {
        normal = 1;
    }
    else if (a + b > d && a + d > b && b + d > a)
    {
        normal = 1;
    }
    else if (a + c > d && a + d > c && b + d > a)
    {
        normal = 1;
    }
    else if (b + c > d && b + d > c && c + d > b)
    {
        normal = 1;
    }
    if (normal == 1)
    {
        cout << "TRIANGLE" << endl;
    }
    else
    {
        if (a + b == c || a + c == b || b + c == a)
        {
            deg = 1;
        }
        else if (a + b == d || a + d == b || b + d == a)
        {
            deg = 1;
        }
        else if (a + c == d || a + d == c || b + d == a)
        {
            deg = 1;
        }
        else if (b + c == d || b + d == c || c + d == b)
        {
            deg = 1;
        }
        if (deg == 1)
        {
            cout << "SEGMENT" << endl;
        }
        else
        {
            cout << "IMPOSSIBLE" << endl;
        }
    }

    return 0;
}