#include <bits/stdc++.h>

using namespace std;

const int inf = 1234567890;

int main()
{
    ios::sync_with_stdio(false);
    int n, m; //n = xadrez m = programaçao
    int resp = 0;
    vector<pair<int, int>> tx, tp;
    cin >> n;
    int guarda = n;
    while (n--)
    {

        int entrada, saida;
        cin >> entrada >> saida;
        pair<int, int> ab;
        ab = make_pair(entrada, saida);
        tx.push_back(ab);
    }
    cin >> m;
    int guarda2 = m;
    while (m--)
    {
        int entrada, saida;
        cin >> entrada >> saida;
        pair<int, int> ab;
        ab = make_pair(entrada, saida);
        tp.push_back(ab);
    }
    int minR1 = inf, maxL1 = -inf;
    int minR2 = inf, maxL2 = -inf;
    for (int i = 0; i < guarda; i++)
    {
        maxL1 = max(maxL1, tx[i].first);
        minR1 = min(minR1, tx[i].second);
    }
    for (int i = 0; i < guarda2; i++)
    {
        maxL2 = max(maxL2, tp[i].first);
        minR2 = min(minR2, tp[i].second);
    }
    int res = max(maxL2 - minR1, maxL1 - minR2);
    cout << max(res, 0) << endl;
    return 0;
}