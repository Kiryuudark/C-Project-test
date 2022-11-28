#include <ncurses.h>

//testing curses library for linux 

int main (){
    initscr();
    printw("testing");
    getch();
    refresh();
    getch();
    printw("a");
    getch();
    endwin();
    return 0;
}