#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int N;
    int q = 1, c = 1;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout << i + 1 << " ";
        cout << q * q << " ";
        cout << c * c * c << endl;
        for (int j = i; j < i + 1; j++)
        {
            cout << i + 1 << " ";
            cout << q * q + 1 << " ";
            cout << c * c * c + 1 << endl;
        }
        q++;
        c++;
    }
    return 0;
}