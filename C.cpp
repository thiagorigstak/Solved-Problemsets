#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string s;
    int n;
    int total = 0;
    cin >> n;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        int x;
        x = (int)s[i];
        if (x % 2 == 0)
        {
            total += i + 1;
        }
    }
    cout << total << endl;
    return 0;
}