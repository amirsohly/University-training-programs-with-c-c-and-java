#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
struct Toop
{
int x;
int y;
};
struct Daste
{
int x;
int y;
};

void Daste1(struct Daste D1)
{
mvprintw(D1.y-1 , D1.x , "  * " );
mvprintw(D1.y   , D1.x , "  * " );
mvprintw(D1.y+1 , D1.x , "*****" );
mvprintw(D1.y+2 , D1.x , "*****" );
mvprintw(D1.y+3 , D1.x , "*****" );
}
void Daste2(struct Daste D2)
{

mvprintw(D2.y  , D2.x , "Q");

}

void Toop (struct Toop T)
{
mvprintw(T.y,T.x,"o");
}
int main()
{
 struct Daste D1;
 D1.x=50;
 D1.y=19;
srand(time(0));
int X = (rand() %
(70 - 5 + 1)) + 5;
int Y = (rand() %
(5 - 2 + 1)) + 2;
 struct Daste D2;
 D2.x=X;
 D2.y=Y;

 struct Toop t;
 t.x=81;
 t.y=18;

    int start;
    start = getch();

    initscr();
    curs_set(0);
    noecho();
    nodelay(stdscr ,TRUE);
    keypad(stdscr ,TRUE);
    int ymax,xmax;
    WINDOW*win=newwin (24,80,0,0);
    getmaxyx(stdscr,ymax,xmax);
    int tempx=1;
    int tempy=1;
    while(1)
    {
    clear();
   wborder(stdscr ,'|','|' ,'-' ,'-','+','+','+','+');

    Toop(t);

   if(t.y==1 || t.y==22)
    tempy*=-1;
    if(t.x==D2.x && t.y == D2.y)
     break;

    if(t.x==78) t.x=40 , t.y =12 , b ++;
    if(t.x==D1.x && t.y>=D1.y && t.y < D1.y)
        tempx*=-1;
    if(t.x==D2.x && t.y>=D2.y && t.y < D2.y)
        tempy*=-1;

    Daste1 (D1);
    Daste2 (D2);

    switch(getch()){
    case KEY_LEFT:
        D1.x--;
        break;

    case KEY_RIGHT:
        D1.x++;
        break;
        case KEY_UP:
        t.y-=tempy;
        t.x=D1.x+2;
        break;

        if (t.y == 35)
        break;}
    refresh();
    usleep(190000);
    }
    printf("\aYou Win!");
    refresh();
    getch();
    endwin();
    return 0;
}


