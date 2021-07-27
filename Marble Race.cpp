#include <iostream>
#include "windows.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
bool game_running;
char map [19][43]={
    "                                       \n",
    "             _1                _2      \n",
    "            /                 /        \n",
    "           /                 /         \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "        _/                _/           \n",
    "             _3                _4      \n",
    "            /                 /        \n",
    "           /                 /         \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "        _/                _/           \n"
};
char map2 [19][43]={
    "                                       \n",
    "             1_                2_      \n",
    "            /                 /        \n",
    "           /                 /         \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "        _/                _/           \n",
    "             3_                4_      \n",
    "            /                 /        \n",
    "           /                 /         \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "        _/                _/           \n"
};
char map3 [19][43]={
    "                                       \n",
    "             __                __      \n",
    "            /                 /        \n",
    "           1                 2         \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "        _/                _/           \n",
    "             __                __      \n",
    "            /                 /        \n",
    "           3                 4         \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "        _/                _/           \n"
};
char map4 [19][43]={
    "                                       \n",
    "             __                __      \n",
    "            /                 /        \n",
    "           /                 /         \n",
    "         1|                2|          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "        _/                _/           \n",
    "             __                __      \n",
    "            /                 /        \n",
    "           /                 /         \n",
    "         3|                4|          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "        _/                _/           \n"
};
char map5 [19][43]={
    "                                       \n",
    "             __                __      \n",
    "            /                 /        \n",
    "           /                 /         \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                2|          \n",
    "          |                 |          \n",
    "         1|                 |          \n",
    "        _/                _/           \n",
    "             __                __      \n",
    "            /                 /        \n",
    "           /                 /         \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "         3|                4|          \n",
    "          |                 |          \n",
    "        _/                _/           \n"
};
char map6 [19][43]={
    "                                       \n",
    "             __                __      \n",
    "            /                 /        \n",
    "           /                 /         \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "       1_/               2_/           \n",
    "             __                __      \n",
    "            /                 /        \n",
    "           /                 /         \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "          |                 |          \n",
    "       3_/               4_/           \n"
};
char map7 [19][43]={
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                    1                  \n",
    "                   ---                 \n",
    "           2                           \n",
    "          ---              3           \n",
    "                          ---          \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n"
};
char map8 [19][43]={
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                    2                  \n",
    "                   ---                 \n",
    "           3                           \n",
    "          ---              4           \n",
    "                          ---          \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n"
};
char map9 [19][43]={
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                    3                  \n",
    "                   ---                 \n",
    "           4                           \n",
    "          ---              1           \n",
    "                          ---          \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n"
};
char map0 [19][43]={
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                    4                  \n",
    "                   ---                 \n",
    "           1                           \n",
    "          ---              2           \n",
    "                          ---          \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n",
    "                                       \n"
};
int main() {
    int iSecret;
     srand (time(NULL));
 iSecret = rand() % 4 + 1;
    game_running = true;
while(game_running == true){
      system("cls");
    for(int display=0; display<19; display++){
        cout << map[display];
}
        cout << "Press space for the marbles to fall";
system("pause>nul");
if(GetAsyncKeyState(VK_SPACE)){
       system("cls");
    for(int display=0; display<19; display++){
        cout << map2[display];
    }
              system("cls");
    for(int display=0; display<19; display++){
        cout << map3[display];
    }
              system("cls");
    for(int display=0; display<19; display++){
        cout << map4[display];
    }
              system("cls");
    for(int display=0; display<19; display++){
        cout << map5[display];
    }
              system("cls");
    for(int display=0; display<19; display++){
        cout << map6[display];
}
}
if(iSecret == 1){
                  system("cls");
    for(int display=0; display<19; display++){
        cout << map7[display];
    }
        cout << " Marble 1 won! ";
                system("pause > nul");
}
if(iSecret == 2){
                  system("cls");
    for(int display=0; display<19; display++){
        cout << map8[display];
    }
        cout << " Marble 2 won! ";
                system("pause > nul");
}
if(iSecret == 3){
                  system("cls");
    for(int display=0; display<19; display++){
        cout << map9[display];
    }
        cout << " Marble 3 won! ";
                system("pause > nul");

}
if(iSecret == 4){
                  system("cls");
    for(int display=0; display<19; display++){
        cout << map0[display];
    }
        cout << " Marble 4 won! ";
        system("pause > nul");

}
}
return 0;
}
