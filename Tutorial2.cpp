
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm," ");
circle(300,200,40);
//Upper Leaf
line(255,80,300,160);
line(300,160,345,80);
arc(300,80,0,-180,45);
//Bottom left leaf
line(190,220,265,220);
line(265,220,240,290);
arc(203,263,105,330,45);
//Bottom Right leaf
line(335,220,420,220);
line(335,220,380,290);
arc(417,264,-144,86,45);
getch();
closegraph();
return 0;
}
