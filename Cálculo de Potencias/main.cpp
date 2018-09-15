#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int b, p, t = 1, n;

    cout << "Introduce la base" << endl;
    cin >> b;

    cout << "Introduce la potencia" << endl;
    cin >> p;

    for(n=1; n<=p; n++){
        t*=b;
    };

    cout << "El resultado de la operacion es " << t << endl << endl;

    system("pause");
    return 0;
}
