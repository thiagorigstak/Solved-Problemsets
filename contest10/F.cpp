#include <bits/stdc++.h>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int N, K;
    string s;
    unordered_map<char, int> ult;
    unordered_set<char> guarda;
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
            return 0;
        }
        if (ult[s[i]] == i)
        {
            guarda.erase(s[i]);
        }
    }
    cout << "NO" << endl;
    return 0;
}