// return_statement.cpp
#include <stdlib.h>
int main()
{
    if(GetAsyncKeyState(VK_LBUTTON)){
           exit( 3 );
    }
    return 3;
}
