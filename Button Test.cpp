#include <iostream>
#include "windows.h"
using namespace std;
void function(){
if(GetAsyncKeyState(VK_UP)){
    cout << "HI";
}
if(GetKeyState('A')){
    cout << "HI";
}
}
int main(){
function();
return 0;
}
