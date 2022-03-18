#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, contador = 0;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            while (a[i] < a[j] - 1 && a[i] < a[j - 1])
            {
                contador++;
                a[i]++;
                a[j]--;
            }
        }
    }
    cout << contador << endl;
    return 0;
}