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