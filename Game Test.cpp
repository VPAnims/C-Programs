#include <iostream>
#include <string>
#include "windows.h"
using namespace std;
char map [14][24]={
    "oooooooooooooooooooo \n",
    "o8           xxx@xxo \n",
    "oxxxxxxxx    xxx xxo \n",
    "o            x     o \n",
    "o  x         x     o \n",
    "o  xxxxxxx   x     o \n",
    "o  x     x         o \n",
    "o xx xx  x  xxxxxxxo \n",
    "o%xx+xx            o \n",
    "oooooooooooooooooooo \n"
};
char map2 [15][25]={
    "##################### \n",
    "# .   Main Menu     # \n",
    "# .   Level's       # \n",
    "# .   Setting's     # \n",
    "#                   # \n",
    "#                   # \n",
    "#                   # \n",
    "#                   # \n",
    "#                   # \n",
    "##################### \n",
};
int x=1;
int y=1;
int a, start;
bool game_running = true;
bool game_start = true;


int main(){
     for(int display=0; display<11; display++){
        cout << map2[display];
     }
cout << "             Main Menu \n\n";
cout << "              Level's \n\n";
cout << "             Settings \n\n ";
cout << "        Unlock to use Badges \n\n";
cout << "         Unlock to use Skins: ";
cin >> a;
if (a = 8 && game_start == true){
while(game_start == true){
    system("cls");
    for(int display=0; display<10; display++){
        cout << map[display];
    }

    system("pause>nul");

    if(GetAsyncKeyState(VK_DOWN)){
        int y2 = y+1;
        if(map[y2][x] == ' '){
            map[y][x] = ' ';
            y++;
            map[y][x] = '8';
        }
    }

            if(GetAsyncKeyState(VK_UP)){
        int y2 = y-1;
        if(map[y2][x] == ' '){
            map[y][x] = ' ';
            y--;
            map[y][x] = '8';
        }
    }
    if (GetAsyncKeyState(VK_RIGHT)){
        int x2 = x+1;
        if(map[y][x2] == ' '){
            map[y][x] = ' ';
            x++;
            map[y][x] = '8';
        }
    }
     if (GetAsyncKeyState(VK_LEFT)){
        int x2 = x-1;
        if(map[y][x2] == ' '){
            map[y][x] = ' ';
            x--;
            map[y][x] = '8';
        }
    }

}
}
return 0;
}
