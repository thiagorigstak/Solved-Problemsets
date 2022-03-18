#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int N, k, doces = 0, resp = 0;
    cin >> N >> k;
    while (N--)
    {
        int x, max;
        cin >> x;
        doces += x;
        max = min(8, doces);
        doces -= max;
        k -= max;
        resp++;
        if (k <= 0)
        {
            break;
        }
    }
    if (k > 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << resp << endl;
    }

    return 0;
}