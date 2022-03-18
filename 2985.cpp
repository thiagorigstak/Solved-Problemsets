#include <bits/stdc++.h>

using namespace std;

main()
{
    ios::sync_with_stdio(false);
    int N;
    vector<int> E, S;
    int aulas = 1;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        E.push_back(x);
        S.push_back(x + y);
    }

    
    /*for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (K[i] == K[i + j])
            {
                if (K[i] < K[i + j])
                {
                }
            }
        }
    }

    int i = 0;
    while (N--)
    {
        if (K[i] <= K[i + 1])
        {
            int x = 1;
            while (K[i] == K[i + x])
            {
                x++;
            }
            i = x;
            x = 1;
            aulas++;
        }
        i++;
    }
    cout << aulas << endl;
    */
    for (int i = 0; i < N; i++)
    {
        cout << E[i] << "||" << S[i] << endl;
    }
    return 0;
}