#include <iostream>
#include "windows.h"
#include <conio.h>

using namespace std;

int main()
{
    cout<<"Press 'F' for Left Click"<<endl;//0x46
    cout<<"Press 'G' for Right Click"<<endl;//0x47
    while(1)
    {

        if (GetAsyncKeyState(0x01))
        {
            cout << "Left clicked"<<endl;
        }
        else if(GetAsyncKeyState(0x02))
        {
            cout << "Right clicked"<<endl;
        }
        else if (GetAsyncKeyState(0x46))
        {
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            Sleep(100);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

        }
        else if (GetAsyncKeyState(0x47))
        {
            mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
            Sleep(100);
            mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
        }
    }

    getch();
    return 0;
}
