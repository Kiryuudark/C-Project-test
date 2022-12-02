#include <ncurses.h>
#include <string.h>

//This function shows some uses to ncurses lib in linux. 
//the most of uses is window manipulation.

int main( int argc, char ** argv ){

    char mesg[]="Digite uma mensagem: ";
    char str[80];

    // size of window
    int row,col;
    // starts ncurses lib
    initscr();
    // get widow size and put it in row and col
    getmaxyx(stdscr,row,col);
    mvprintw(row/2,(col-strlen(mesg))/2,"%s",mesg);
    getstr(str);
    attron(A_BOLD);
    //print mensage
    mvprintw(0, (col-strlen("Você digitou: "))/2, "Você digitou: %s", str);
    getch();
    endwin();

    return 0;
}