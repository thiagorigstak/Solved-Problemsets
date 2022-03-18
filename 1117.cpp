#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setprecision(1) << fixed;
    ios::sync_with_stdio(false);
    double n1, media = 0;
    int i = 0;
    while (i < 2)
    {
        cin >> n1;
        if (n1 >= 0 && n1 <= 10)
        {
            media += n1;
            i++;
        }
        else
        {
            cout << "nota invalida" << endl;
        }
    }
    cout.precision(2);
    cout << "media = " << media / 2 << endl;
    return 0;
}