#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n;
    int calculo1, calculo2, resp;
    int tam;
    vector<int> vect;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vect.emplace_back(x);
    }
    sort(vect.begin(), vect.end());
    tam = vect.size();
    calculo1 = vect[tam / 2];
    calculo2 = vect[(tam / 2) - 1];
    resp = calculo1 - calculo2;
    cout << resp << endl;
    return 0;
}