#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int entrada;
    while (cin >> entrada)
    {
        if (entrada == 2002)
        {
            cout << "Acesso Permitido" << endl;
            break;
        }
        cout << "Senha Invalida" << endl;
    }

    return 0;
}