#include <bits/stdc++.h>

using namespace std;

long long mdc(long long a, long long b)
{
    if (b == 0)
    {
        return a;
    }
    return mdc(b, a % b);
}

int main()
{
    ios::sync_with_stdio(false);
    long long a, b, x, y; // a -> w & b -> h
    cin >> a >> b >> x >> y;
    long long k = mdc(x, y);
    cout << min(a / (x / k), b / (y / k)) << endl;
    return 0;
}