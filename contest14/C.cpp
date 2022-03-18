#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int tempo[6], erros[6];
    int valores[5] = {500, 1000, 1500, 2000, 2500};
    for (int i = 1; i <= 5; i++)
    {
        cin >> tempo[i];
    }
    for (int i = 1; i <= 5; i++)
    {
        cin >> erros[i];
    }
    int suc, fail;
    cin >> suc >> fail;
    long long int score;
    score = 100 * suc - 50 * fail;
    for (int i = 1; i <= 5; i++)
    {
        score += max(valores[i - 1] - valores[i - 1] * tempo[i] / 250 - 50 * erros[i], valores[i - 1] / 10 * 3);
    }
    cout << score << endl;
    return 0;
}