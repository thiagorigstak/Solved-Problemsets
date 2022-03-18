#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, a;
    int m, b;
    int vetor[100001];
    long long V = 0, P = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        vetor[a] = i + 1;
    }
    cin >> m;
    while (m--)
    {
        cin >> b;
        V += vetor[b];
        P += (n + 1 - vetor[b]);
    }
    cout << V << " " << P;
    return 0;
}