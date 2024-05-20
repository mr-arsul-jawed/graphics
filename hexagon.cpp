#include<stdio.h>
#include<graphics.h>
int main(){
    int gd=DETECT,gm;
    int arr[]= {100,50,200,100,
                200,200,100,300,
                50,200,50,100,
                100,50};
    initgraph(&gd,&gm," ");
    drawpoly(7,arr);
    getch();
    closegraph();
    return 0;
}