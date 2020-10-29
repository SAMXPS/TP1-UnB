#ifndef TU_H_INCLUDED
#define TU_H_INCLUDED

#include <iostream>
#include "ResultadoTU.h" 

template<class T>
class TU {
    private:
        void terminar() {
            delete instancia;
        }

    protected:
        T* instancia;
        virtual bool testarCriacaoObjeto() = 0;
        virtual bool testarCenarioSucesso() = 0;
        virtual bool testarCenarioFalha() = 0;

    public:
        ResultadoTU testar(bool verbose = false) {
            ResultadoTU resultado;

            if (verbose) {
                std::cout << "Realizando teste da classe " << typeid(T).name() << "." << std::endl;
            }

            resultado.criacaoDeObjeto = this->testarCriacaoObjeto();
            resultado.cenarioFalha = this->testarCenarioFalha();
            resultado.cenarioSucesso = this->testarCenarioSucesso();

            this->terminar();
            resultado.mostrar();

            return resultado;
        }

};

#endif // TU_H_INCLUDED