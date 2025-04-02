#include<iostream>
#include<math.h>
#include<graphics.h>
void Draw(int x,int y, int h,int k)
{
    putpixel(x+h,y+k, WHITE);
    putpixel(-x+h,y+k, WHITE);
    putpixel(x+h,-y+k, WHITE);
    putpixel(-x+h,-y+k, WHITE);
}
int main()
{
    int h,k,a,b,p;
    printf("Enter ellipse center:");
    scanf("%d%d",&h,&k);
    printf("Enter semi-major axis a and b:");
    scanf("%d%d",&a,&b);
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int x0=0;
    int y0=b;
    int x=x0;
    int y=y0;
    p=b*b+a*a/4-a*a*b;
    printf("\np\t\t(x,b)");

    Draw(x,y,h,k);
    while(2*b*b*x<2*a*a*y)
    {
        if(p<0)
        {
            x=x+1;
            y=y;
            p=p+2*b*b*x+b*b;
            printf("\n%d\t\t(%d,%d)",p,x,y);
            Draw(x,y,h,k);
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*b*b*x-2*a*a*y+b*b;
            printf("\n%d\t\t(%d,%d)",p,x,y);
            Draw(x,y,h,k);
        }
    }
    p=b*b*(x+1/2)*(x+1/2)+a*a*(y-1)*(y-1)-a*a*b*b;

    while(y>=0)
    {
        if(p<0)
        {
            x=x+1;
            y=y-1;
            p=p+2*b*b*x-2*a*a*y+a*a;
             printf("\n%d\t\t(%d,%d)",p,x,y);
            Draw(x,y,h,k);
        }
        else
        {
            x=x;
            y=y-1;
            p=p-2*a*a*y+a*a;
             printf("\n%d\t\t(%d,%d)",p,x,y);
            Draw(x,y,h,k);
        }
    }
    getch();
    return 0;
}
