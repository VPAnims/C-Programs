#include <iostream>
#include "windows.h"
#include <conio.h>
using namespace std;
bool gamer;
bool game;
bool gamechoose;
bool gamechoose2;
bool building;
bool hogrider;
bool buildingright;
bool buildingleft;
bool hogriderright;
bool hogriderleft;
bool case1;
bool case2;
bool case3;
bool case4;
bool case5;
bool case6;
bool end1;
bool end2;
char map[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# !    |   ! #           Game Moves:                     \n",
 "# !    |   ! #                                           \n",
 "#=!====|===!=#                                           \n",
 "# !    |   ! #                                           \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
//case 1
char map2[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# !    |   ! #                Game Moves:                \n",
 "# !    |   ! #         Hog Rider Has Been Placed         \n",
 "#=!====|===!=#                                           \n",
 "# !    |   ! #                                           \n",
 "# !    |   0 #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map3[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# !    |   ! #                Game Moves:                \n",
 "# !    |   ! #         Hog Rider Has Been Placed         \n",
 "#=!====|===!=#                                           \n",
 "# !    |   0 #                                           \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map4[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# !    |   ! #                Game Moves:                \n",
 "# !    |   ! #         Hog Rider Has Been Placed         \n",
 "#=!====|===0=#                                           \n",
 "# !    |   ! #                                           \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map5[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press Control to put a building          \n",
 "# @    |   @ #                                           \n",
 "# !    |   0 #                Game Moves:                \n",
 "# !    |   ! #         Hog Rider Has Been Placed         \n",
 "#=!====|===!=#              Player 1 loses               \n",
 "# !    |   ! #                                           \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
//case 2
char map6[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# !    |   ! #                Game Moves:                \n",
 "# !    |   ! #         Hog Rider Has Been Placed         \n",
 "#=!====|===!=#                                           \n",
 "# !    |   ! #                                           \n",
 "# !    |   0 #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map7[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# !    |   ! #                Game Moves:                \n",
 "# !    |   ! #         Hog Rider Has Been Placed         \n",
 "#=!====|===!=#                                           \n",
 "# !    |   0 #                                           \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map8[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# !    |   1 #                Game Moves:                \n",
 "# !    |   0 #         Hog Rider Has Been Placed         \n",
 "#=!====|===!=#         Building Has Been Placed          \n",
 "# !    |   ! #               Player 2 Lost               \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
//case 3
char map9[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press Control to put a building          \n",
 "# @    |   @ #                                           \n",
 "# !    |   ! #                Game Moves:                \n",
 "# !    |   ! #         Hog Rider Has Been Placed         \n",
 "#=!====|===!=#                                           \n",
 "# !    |   ! #                                           \n",
 "# 0    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map10[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# !    |   ! #                Game Moves:                \n",
 "# !    |   ! #         Hog Rider Has Been Placed         \n",
 "#=!====|===!=#                                           \n",
 "# 0    |   ! #                                           \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map11[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# !    |   ! #                Game Moves:                \n",
 "# !    |   ! #         Hog Rider Has Been Placed         \n",
 "#=0====|===!=#                                           \n",
 "# !    |   ! #                                           \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map12[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# 0    |   ! #                Game Moves:                \n",
 "# !    |   ! #         Hog Rider Has Been Placed         \n",
 "#=!====|===!=#              Player 1 loses               \n",
 "# !    |   ! #                                           \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
// case 4
char map13[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# !    |   ! #                Game Moves:                \n",
 "# !    |   ! #         Hog Rider Has Been Placed         \n",
 "#=!====|===!=#                                           \n",
 "# !    |   ! #                                           \n",
 "# 0    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map14[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# !    |   ! #                Game Moves:                \n",
 "# !    |   ! #         Hog Rider Has Been Placed         \n",
 "#=!====|===!=#                                           \n",
 "# 0    |   ! #                                           \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map15[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# 1    |   ! #                Game Moves:                \n",
 "# !    |   ! #         Hog Rider Has Been Placed         \n",
 "#=0====|===!=#         Building Has Been Placed          \n",
 "# !    |   ! #                                           \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map16[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# 1    |   ! #                Game Moves:                \n",
 "# 0    |   ! #         Hog Rider Has Been Placed         \n",
 "#=!====|===!=#         Building Has Been Placed          \n",
 "# !    |   ! #              Player 2 loses               \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
//why
char map40[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# !    |   1 #                Game Moves:                \n",
 "# !    |   ! #         Hog Rider Has Been Placed         \n",
 "#=!====|===!=#                                           \n",
 "# !    |   ! #                                           \n",
 "# !    |   0 #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map41[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# !    |   1 #                Game Moves:                \n",
 "# !    |   ! #         Hog Rider Has Been Placed         \n",
 "#=!====|===!=#                                           \n",
 "# !    |   0 #                                           \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map42[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# !    |   1 #                Game Moves:                \n",
 "# !    |   ! #         Hog Rider Has Been Placed         \n",
 "#=!====|===0=#         Building Has Been Placed          \n",
 "# !    |   ! #                                           \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map43[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# !    |   1 #                Game Moves:                \n",
 "# !    |   0 #         Hog Rider Has Been Placed         \n",
 "#=!====|===!=#         Building Has Been Placed          \n",
 "# !    |   ! #              Player 2 loses               \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
//case 5
char map17[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# !    |   1 #               Game Moves:                 \n",
 "# !    |   ! #         Building Has Been Placed          \n",
 "#=!====|===!=#                                           \n",
 "# !    |   ! #                                           \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map18[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# !    |   1 #               Game Moves:                 \n",
 "# !    |   ! #         Building Has Been Placed          \n",
 "#=!====|===!=#         Hog Rider Has Been Placed         \n",
 "# !    |   ! #                                           \n",
 "# 0    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map19[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# !    |   1 #               Game Moves:                 \n",
 "# !    |   ! #         Building Has Been Placed          \n",
 "#=!====|===!=#         Hog Rider Has Been Placed         \n",
 "# 0    |   ! #                                           \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map20[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# !    |   1 #               Game Moves:                 \n",
 "# !    |   ! #         Building Has Been Placed          \n",
 "#=0====|===!=#         Hog Rider Has Been Placed         \n",
 "# !    |   ! #                                           \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map21[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# 0    |   1 #               Game Moves:                 \n",
 "# !    |   ! #         Building Has Been Placed          \n",
 "#=!====|===!=#         Hog Rider Has Been Placed         \n",
 "# !    |   ! #               Player 1 loses              \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
//case 6
char map22[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# 1    |   ! #               Game Moves:                 \n",
 "# !    |   ! #         Building Has Been Placed          \n",
 "#=!====|===!=#                                           \n",
 "# !    |   ! #                                           \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map23[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# 1    |   ! #               Game Moves:                 \n",
 "# !    |   ! #         Building Has Been Placed          \n",
 "#=!====|===!=#         Hog Rider Has Been Placed         \n",
 "# !    |   ! #                                           \n",
 "# !    |   0 #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map24[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# 1    |   ! #               Game Moves:                 \n",
 "# !    |   ! #         Building Has Been Placed          \n",
 "#=!====|===0=#         Hog Rider Has Been Placed         \n",
 "# !    |   ! #                                           \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map25[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# 1    |   ! #               Game Moves:                 \n",
 "# !    |   ! #         Building Has Been Placed          \n",
 "#=!====|===!=#         Hog Rider Has Been Placed         \n",
 "# !    |   0 #                                           \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
char map26[100][100]
{
 "##############  Press The Right Arrow to put a building  \n",
 "#     $|$    #  Press The Up Arrow to put a building     \n",
 "# @    |   @ #                                           \n",
 "# 1    |   0 #               Game Moves:                 \n",
 "# !    |   ! #         Building Has Been Placed          \n",
 "#=!====|===!=#         Hog Rider Has Been Placed         \n",
 "# !    |   ! #               Player 1 loses              \n",
 "# !    |   ! #                                           \n",
 "# @    |   @ #                                           \n",
 "#     $|$    #                                           \n",
 "##############                                           \n"
};
int main()
{
    gamer = true;
    game = false;
    building = false;
    hogrider = false;
    buildingleft = false;
    buildingright = false;
    hogriderright = false;
    hogriderleft = false;
    gamechoose = false;
    gamechoose2 = false;
    system("Color 0A");
    cout << " Welcome to Hog Rider simulator \n" << endl;
    cout << "       Press Space to Play    \n" << endl;
    cout << "       Press Escape to Quit    \n" << endl;
    system("pause > nul");
        if(GetAsyncKeyState(VK_ESCAPE))
    {
        system("cls");
        system("Color 04");
        cout << "You always hated this game haven't you \n" << endl;
    }
    if(GetAsyncKeyState(VK_SPACE))
    {
        system("cls");
     for(int display=0; display<12; display++){
        cout << map[display];
     }
        system("pause > nul");
        gamechoose = true;
    }
    if(GetAsyncKeyState(VK_OEM_ATTN))
    do
    {
    if(GetAsyncKeyState(VK_RIGHT))
    {
        system("cls");
    cout << " Place Left ";
    cout << "| Place Right | " <<endl;
    cout << " \n    Press TAB to pick \n " << endl;
    system("pause > nul");
    if(GetAsyncKeyState(VK_TAB))
    {
        building = true;
        buildingright = true;
        if(hogriderleft == true)
        {
            system("cls");
    for(int display=0; display<12; display++){
        cout << map15[display];
     }
        }
        if(hogriderright == true)
        {
            system("cls");
    for(int display=0; display<12; display++){
        cout << map42[display];
     }
        }
        if(hogriderright == false && hogriderleft == false)
        {
            system("cls");
    for(int display=0; display<12; display++){
        cout << map17[display];
     }
        }
        }        system("pause > nul");
    }

    if(GetAsyncKeyState(VK_LEFT))
    {
        system("cls");
    cout << " | Place Left | ";
    cout << "  Place Right  " <<endl;
    cout << " \n     Press TAB to pick \n " << endl;
    system("pause > nul");
    if(GetAsyncKeyState(VK_TAB))
    {
        building = true;
        buildingleft = true;

                if(hogriderleft == true)
        {
            system("cls");
    for(int display=0; display<12; display++){
        cout << map18[display];
     }
        }
        if(hogriderright == true)
        {
            system("cls");
    for(int display=0; display<12; display++){
        cout << map40[display];
     }
        }
        if(hogriderright == false && hogriderleft == false)
        {
            system("cls");
    for(int display=0; display<12; display++){
        cout << map22[display];
     }
        }
        system("pause > nul");
    }
    }
    }while(!gamechoose);
    do
    {
        if(GetAsyncKeyState(VK_UP))
        {
    system("cls");
    cout << " Place Left ";
    cout << "| Place Right | " <<endl;
    cout << " \n    Press TAB to pick \n " << endl;
    system("pause > nul");
        if(GetAsyncKeyState(VK_TAB))
    {
        hogrider = true;
        hogriderright = true;
        if(buildingleft = true)
        {
        system("cls");
    for(int display=0; display<12; display++){
        cout << map23[display];
        }
    }
            if(buildingright = true)
        {
        system("cls");
    for(int display=0; display<12; display++){
        cout << map40[display];
        }
    }
            if(buildingleft == false && buildingright == false)
        {
        system("cls");
    for(int display=0; display<12; display++){
        cout << map2[display];
        }
    }
        system("pause > nul");
        }
        }
        if(GetAsyncKeyState(VK_DOWN))
        {
        system("cls");
    cout << " | Place Left | ";
    cout << "  Place Right  " <<endl;
    cout << " \n     Press TAB to pick \n " << endl;
    system("pause > nul");
        if(GetAsyncKeyState(VK_TAB))
    {
        hogrider = true;
        hogriderleft = true;
        cout<< "You placed the Rider on the left \n\n";
        system("pause > nul");
    }
        }
    }while(!gamechoose2);
}
