#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
    int a, b, c;
    system("Color 0A");
    while(1)
    {

    cout << "               GCF and LCM Finder  \n" << endl;
    cout << "              Type A Number 1 - 10: ";
    cin >> a;
    if( a > 10)
    {
        cout << "  \n Sorry the number to big ";
        cout << "      Type A Number 1 - 10: ";
        cin >> a;
    }
    if( a > 10)
    {
        cout << "\n\n            Sorry YOU WERE NOT LISTINING \n" <<endl;
        system("pause");
    }
    cout << "\n           Type Another Number 1 - 10: ";
    cin >> b;
        if( b > 10)
    {
        cout << "  \n Sorry the number to big ";
        cout << "      Type A Number 1 - 10: ";
        cin >> b;
    }
    if( b > 10)
    {
        cout << "\n\n            Sorry YOU WERE NOT LISTINING \n" <<endl;
        system("pause");
    }
    cout << "\n If you want to find the GCF press G if you want to find the LCM press L ";
    system("pause > nul");
    if(GetAsyncKeyState(VK_SPACE))
    {
        if(a = 0)
        {
            cout << "\n     The GCF is 0";
        }
        if(b = 0)
        {
            cout << "\n     The GCF is 0";
        }
    }
}
    return 0;
}
