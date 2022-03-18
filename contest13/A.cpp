#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int a, b, count = 0;
    cin >> a >> b;
    while (1)
    {
        count++;
        a *= 3;
        b *= 2;
        if (a > b)
        {
            cout << count << endl;
            break;
        }
    }
    return 0;
}