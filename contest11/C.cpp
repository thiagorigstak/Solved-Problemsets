#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, m, a;
    int base = 0, altura = 0;
    cin >> n >> m >> a;
    while (n > base && m > altura)
    {
        if (n > base)
        {
            base += a;
        }
        if (m > altura)
        {
            altura += a;
        }
    }
    cout << (base + altura) / a << endl;
    return 0;
}