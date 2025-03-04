#include<stdio.h>
#include<graphics.h>
#include<math.h>
int swapp(int &a,int &b,int &c,int &d)
{
    int temp;
    temp=a;
    a=c;
    c=temp;
    temp=b;
    b=d;
    d=temp;
}

int main()
{
    int gd=DETECT,gm;
    int x0,y0,xn,yn,x,y,dx,dy,a,p,i;
    printf("Enter the point x0=");
    scanf("%d",&x0);
    printf("\nEnter the point y0=");
    scanf("%d",&y0);
    printf("\nEnter the point xn=");
    scanf("%d",&xn);
    printf("\nEnter the point yn=");
    scanf("%d",&yn);

    initgraph(&gd,&gm," ");

    dx=abs(xn-x0);
    dy=abs(yn-y0);

    if((xn-x0)>0&&(yn-y0)<0 || (xn-x0)<0&&(yn-y0)>0)
        a=-1;
    else
        a=1;

    if(dx>=dy)
    {
        if(xn<x0)
        {
            swapp(x0,y0,xn,yn);
        }
        x=x0;
        y=y0;

        putpixel(x,y,WHITE);
        p=2*dy-dx;

        printf("k\tP\t\t\(x,y)\n");
         printf("===============================\n");


        for(i=0;i<=dx;i++)
        {
            if(p<0)
            {
                x=x+1;
                y=y;
                putpixel(x,y,BLUE);
                p=p+2*dy;
            }
            else
            {
                x=x+1;
                y=y+a;
                putpixel(x,y,BLUE);
                p=p+2*dy-2*dx;
            }
            printf("%d\t%d\t\t(%d,%d)\n",i,p,x,y);
        }

    }
    getch();
}
