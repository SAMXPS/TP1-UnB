#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <string>
class CPF{
    private:
        static const int TAMANHO = 14;
        string valor;
        int tamanhoValor = valor.size()
        void validar(string valor);
    public:
        CPF();
        CPF(string);
        void setValor(string);
        string getValor();
        ~CPF();
};



#endif // DOMINIOS_H_INCLUDED
