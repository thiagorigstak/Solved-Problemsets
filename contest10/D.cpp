#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    char s;
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    int x[26] = {0};
    int N, ok = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        s = tolower(s);
        for (int j = 0; j < 26; j++)
        {
            if (s == alpha[j])
            {
                x[j] = 1;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (x[i] == 1)
        {
            ok++;
        }
    }
    if (ok == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}