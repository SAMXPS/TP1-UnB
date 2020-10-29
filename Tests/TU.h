#ifndef TU_H_INCLUDED
#define TU_H_INCLUDED

#include <string>
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
                std::string className = typeid(T).name();
                std::cout << "Realizando teste da classe " << className.substr(1, className.length()) << "." << std::endl;
            }

            resultado.criacaoDeObjeto = this->testarCriacaoObjeto();

            if (resultado.criacaoDeObjeto) {
                resultado.cenarioSucesso = this->testarCenarioSucesso();
                resultado.cenarioFalha = this->testarCenarioFalha();
            }

            this->terminar();
            resultado.mostrar();

            return resultado;
        }

};

#endif // TU_H_INCLUDED