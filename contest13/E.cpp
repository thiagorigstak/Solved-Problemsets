#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, m;
    int certas[500], erradas[500];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> certas[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> erradas[i];
    }
    sort(certas, certas + n);
    sort(erradas, erradas + m);
    int min = 2 * certas[0];
    min = max(min, certas[n - 1]);
    if (erradas[0] <= min)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << min << endl;
    }
    return 0;
}