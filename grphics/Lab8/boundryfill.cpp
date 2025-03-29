#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
void boundaryFill(int x,int y){
    int fillColor=4;
    int boundaryColor=15;
    int cc=getpixel(x,y);
    if(cc!=boundaryColor && cc!=fillColor){
        putpixel(x,y,fillColor);
        delay(15);
        boundaryFill(x-1,y);
        boundaryFill(x+1,y);
        boundaryFill(x,y-1);
        boundaryFill(x,y+1);
    }
}
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    circle(100,100,50);
    boundaryFill(100,100);
    getch();
    return 0;
}
