#include <bits/stdc++.h>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int N, K;
    string s;
    map<char, int> ult;
    set<char> guarda;
    cin >> N >> K >> s;
    for (int i = 0; i < N; i++)
    {
        ult[i] = i;
    }
    for (int i = 0; i < N; i++)
    {
        guarda.insert(s[i]);
        if (guarda.size() > K)
        {
            cout << "YES" << endl;
        }
        if (ult[s[i]] == i)
        {
            guarda.erase(s[i]);
        }
    }
    cout << "NO" << endl;
    return 0;
}