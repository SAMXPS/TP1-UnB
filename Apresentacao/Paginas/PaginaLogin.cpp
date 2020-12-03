#include <string.h>
#include <curses.h>

using namespace std;

// Exemplo de uso de funções da biblioteca PDCurses.

int mostrar()
{
    char campo1[]="Digite o CPF  : ";
    char campo2[]="Digite a senha: ";
    char dado1[80];
    char dado2[80];
    int linha,coluna;

    initscr();                                                                      // Inicia curses.
    getmaxyx(stdscr,linha,coluna);                                                  // Armazena quantidade de linhas e de colunas.
    mvprintw(linha/2,(coluna-strlen(campo1))/2,"%s",campo1);                        // Imprime nome do campo.
    getstr(dado1);                                                                  // Lê dado.
    mvprintw(linha/2 + 2,(coluna-strlen(campo2))/2,"%s",campo2);                    // Imprime nome do campo.
    getstr(dado2);                                                                  // Lê dado.
    clear();                                                                        // Limpa janela.
    mvprintw(linha/2,(coluna-strlen(campo1))/2,"Digitado CPF   : %s",dado1);        // Imprime dado.
    mvprintw(linha/2 + 2,(coluna-strlen(campo2))/2,"Digitada senha : %s",dado2);    // Imprime dado.
    noecho();                                                                       // Desabilita eco.
    getch();                                                                        // Lê caracter digitado.
    echo();                                                                         // Habilita eco.
    endwin();                                                                       // Finaliza curses.

    return 0;
}

