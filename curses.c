#include <ncurses.h>
#include <string.h>

//This function shows some uses to ncurses lib in linux. 
//the most of uses is window manipulation.

int main( int argc, char ** argv ){

    // Mensagem aparece na tela
    char mesg[]="Digite uma mensagem: ";
    char str[80];

    // para armazenar o número de linhas e o número de colunas da tela
    int row,col;

    // inicia a ncurses
    initscr();

    // obtém o número de linhas e colunas
    getmaxyx(stdscr,row,col);

    // imprime a mensagem no centro da tela
    mvprintw(row/2,(col-strlen(mesg))/2,"%s",mesg);
    getstr(str);
    attron(A_BOLD);
    mvprintw(0, (col-strlen("Você digitou: "))/2, "Você digitou: %s", str);
    getch();
    endwin();

    return 0;
}

