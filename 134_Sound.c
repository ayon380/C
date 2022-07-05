#include <stdio.h>
#include<windows.h>
#include<mmsystem.h>
int main()
{
    PlaySound("Chidiya.mp3",NULL,SND_ASYNC);
    return 0;
}