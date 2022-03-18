#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int doces, resp;
        cin >> doces;
        if (doces % 2 == 0)
        {
            resp = (doces / 2) - 1;
        }
        else
        {
            resp = (doces / 2);
        }
        cout << resp << endl;
    }
    return 0;
}