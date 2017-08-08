
#include <conio.h>
#include <iostream.h>
#include <graphics.h>
#include <math.h>

voidvoidvoid bresenham(int xa,int ya,int xb,int yb)
{
int dx=xb-xa;
int dy=yb-ya;
int twoDx=2*dx;
int twoDy=2*dy;
int decisionParameter=twoDy-dx;
int k;int x=xa;int y=ya;

for(k=0;k<dx;k++)
{
   if(decisionParameter<0)
   {
	x=x+1;	
	decisionParameter=decisionParameter+twoDy;
   }
   else
   {
	
	x=x+1;
	y=y+1;
	decisionParameter=decisionParameter+twoDy-twoDx;
   }

	putpixel(x,y,WHITE);

}



}

