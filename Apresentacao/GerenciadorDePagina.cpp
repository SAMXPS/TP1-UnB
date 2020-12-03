#include "GerenciadorDePagina.h"
#include "Paginas/PaginaLogin.h"
#include <curses.h>
#include <iostream>

void GerenciadorDePagina::executar() {
    initscr();
    Pagina* pagina = new PaginaLogin();

    while (pagina != NULL) {
        limparTela();
        carregarDimensoes();
        pagina = pagina->mostrar(this);
    }

    noecho();
    getch();
    echo();

    fechar();
}

void GerenciadorDePagina::escreveNoCentro(std::string mensagem) {
    const char*campo1 = mensagem.c_str();
    mvprintw(linhas/2 + currentLine,(colunas-mensagem.size())/2,"%s",campo1);
    currentLine++;
}

std::string GerenciadorDePagina::lerInput() {
    getstr(readBuffer);
    return std::string(readBuffer);
}

void GerenciadorDePagina::carregarDimensoes() {
    getmaxyx(stdscr,linhas,colunas); 
}

void GerenciadorDePagina::limparTela() {
    clear();
    currentLine = 0;
}

void GerenciadorDePagina::fechar() {
    endwin();
}