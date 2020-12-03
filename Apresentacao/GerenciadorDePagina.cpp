#include "GerenciadorDePagina.h"
#include <curses.h>
#include <iostream>

void GerenciadorDePagina::executar() {
    initscr();
    Pagina* pagina = new PaginaInicial();

    while (pagina != NULL) {
        limparTela();
        carregarDimensoes();
        pagina = pagina->mostrar(this);
    }

    fechar();
}

void GerenciadorDePagina::escreveNoCentro(std::string mensagem) {
    const char*campo1 = mensagem.c_str();
    mvprintw(linhas/2 + currentLine - 5,(colunas-mensagem.size())/2,"%s",campo1);
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