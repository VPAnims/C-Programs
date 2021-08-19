#include <iostream>
#include "windows.h"
using namespace std;
bool game;

char map42232323[9][25]
{
        "       #       #     \n",
        "      #         #    \n",
        "     #           #   \n",
        "     #           #   \n",
        "           0         \n",
        "     #           #   \n",
        "     #           #   \n",
        "      #         #    \n",
        "       #       #     \n"

};

int main()
{
int x=5;
int y=13;
game = true;
while(game == true)
{
    system("cls");
    for(int display=0; display<10; display++){
        cout << map42232323[display];
    }
    system("pause>nul");
    if(GetAsyncKeyState(VK_DOWN))
    {
        int y2 = y+1;
        if(map42232323[y2][x] == ' '){
            y++;
            map42232323[y][x] = '0';
        }
    }

            if(GetAsyncKeyState(VK_UP)){
        int y2 = y-1;
        if(map42232323[y2][x] == ' '){
            y--;
            map42232323[y][x] = '0';
        }
    }
    if (GetAsyncKeyState(VK_RIGHT)){
        int x2 = x+1;
        if(map42232323[y][x2] == ' '){
            map42232323[y][x] = ' ';
            x++;
            map42232323[y][x] = '0';
        }
    }
     if (GetAsyncKeyState(VK_LEFT)){
        int x2 = x-1;
        if(map42232323[y][x2] == ' '){
            map42232323[y][x] = ' ';
            x--;
            map42232323[y][x] = '0';
        }
    }
}
    return 0;
}
