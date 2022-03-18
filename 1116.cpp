#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setprecision(1) << fixed;
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x, y;
        double div;
        cin >> x >> y;
        if (y == 0)
        {
            cout << "divisao impossivel" << endl;
        }
        else
        {
            div = (double)x / y;
            cout.precision(1);
            cout << div << endl;
        }
    }
    return 0;
}