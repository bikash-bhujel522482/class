#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
void floodFill(int x,int y){
    int fillColor=2;
    int oldColor=0;
    int cc=getpixel(x,y);
    if(cc==oldColor){
        putpixel(x,y,fillColor);
        delay(1);
        floodFill(x-1,y-1);
        floodFill(x,y-1);
        floodFill(x+1,y-1);
        floodFill(x-1,y);
        floodFill(x+1,y);
        floodFill(x-1,y+1);
        floodFill(x,y+1);
        floodFill(x+1,y+1);
    }
}
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    rectangle(150,150,50,50);
    floodFill(100,100);
    getch();
    return 0;
}
