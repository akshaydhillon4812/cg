#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm," ");
circle(300,200,40);
line(180,160,260,200);
line(180,160,180,240);
line(180,240,260,200);
line(260,80,340,80);
line(260,80,300,160);
line(340,80,300,160);
line(420,160,420,240);
line(420,160,340,200);
line(420,240,340,200);
line(300,240,340,320);
line(340,320,260,320);
line(300,240,260,320);
getch();
closegraph();
return 0;
}
