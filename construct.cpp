#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string s;
    string compara = "abcdefghijklmnopqrstuvwxyz";
    int letras[27] = {0};
    int cont = 0;
    getline(cin, s);
    cout << s << endl;
    int x = s.size();
    for (int i = 0; i < x; i++)
    {
        if (isalpha(s[i]) == 0)
        {
            for (int j = 0; j < 27; i++)
            {
                if (s[i] == compara[j])
                {
                    letras[j] = 1;
                }
            }
        }
    }
    for (int i = 0; i < 27; i++)
    {
        if (letras[i] == 1)
        {
            cont++;
        }
    }
    cout << cont << endl;
    return 0;
}