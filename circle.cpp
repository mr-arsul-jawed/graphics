#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main(){
    int gd = DETECT,gm;

    initgraph(&gd, &gm,(char*)"");
    //setcolor(BLUE);
   circle(320,220,120);
    //setfillstyle(SOLID_FILL,BLUE);
    //floodfill(322,222,BLUE);
    getch();
    closegraph();
    return 0;
}