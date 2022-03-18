#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int N;
    int res = 0;
    cin >> N;
    while (N--)
    {
        char s[4];
        for (int i = 0; i < 3; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < 3; i++)
        {
            if (s[i] == '+')
            {
                res++;
                break;
            }
            else if (s[i] == '-')
            {
                res--;
                break;
            }
        }
    }
    cout << res << endl;
    return 0;
}