#include <stdio.h>
#include<graphics.h>
#include<math.h>
void draw(int x,int y,int xc, int yc)
{
    putpixel(x+xc,y+yc,WHITE);
    //delay(10);
    putpixel(-x+xc,y+yc,WHITE);
    //delay(10);
    putpixel(-x+xc,-y+yc,WHITE);
    //delay(10);
    putpixel(x+xc,-y+yc,WHITE);
    //delay(10);
    putpixel(y+xc,x+yc,WHITE);
    //delay(10);
    putpixel(y+xc,-x+yc,WHITE);
    //delay(10);
    putpixel(-y+xc,-x+yc,WHITE);
    //delay(10);
    putpixel(-y+xc,x+yc,WHITE);
    //delay(10);

}
int main()
{
    int xc,yc,r;
    printf("enter the point xc=");
    scanf("%d",&xc);
    printf("enter the point yc=");
    scanf("%d",&yc);
    printf("enter the point r=");
    scanf("%d",&r);
    int xo= 0;
    int yo= r;
    int p= 1-r;
    int x=xo;
    int y=yo,i=0;
      int gd= DETECT,gm;
     initgraph(&gd,&gm," ");

     printf("\nK\tP\t\t(X,Y)");
     printf("\n==================================");
     draw( x,y,xc,yc);
     while(y>x)
     {
         if(p<0)
         {
             x=x+1;
             y=y;
             p= p+ 2*x +1;
             draw(x,y,xc,yc);
         }
         else{
            x=x+1;
            y=y-1;
            p= p+2*x-2*y+1;
            draw(x,y,xc,yc);
         }
         printf("\n%d\t%d\t\t(%d,%d)",i,p,x,y);
         i++;
     }
getch();
closegraph();
return 0;
}