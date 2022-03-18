#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int rec1, rec2;
    int N, unit;
    int soma = 0;
    cin >> N;
    rec1 = N - 2;
    rec2 = 2;
    while (rec1 > 0)
    {
        unit = rec1 % 10;
        soma += unit;
        rec1 /= 10;
        unit = rec2 % 10;
        rec2 /= 10;
        soma += unit;
    }
    cout << soma << endl;
    return 0;
}