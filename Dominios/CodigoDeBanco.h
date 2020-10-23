#ifndef CODIGODEBANCO_H_INCLUDED
#define CODIGODEBANCO_H_INCLUDED

#include <string>		// std::string
#include <stdexcept>	// std::invalid_argument

/**
 * O Domínio Código de banco tem como objetivo de indentificar
 * o Código de banco do cliente.
 *
 */
class CodigoDeBanco {

    private:
		std::string valor;
		static const int tamanho = 3;

		/**
		 * A função "validate" confere se o Codigo de banco corresponde aos códigos dos
		 * 5 maiores bancos do brasileiros por ativos totais. Os códigos são
		 * "341", "001", "394", "104", "033". Caso o valor informado esteja fora desses casos, a execeção é lançada
		 */
        static void validate(std::string valor) throw(std::invalid_argument);

    public:
		/**
		 * Método construtor da classe CodigoDeBanco
		 */
		CodigoDeBanco(std::string valor);

		/**
		 * Método setter:
		 *  - Verifica se o valor informado é valido, por meio do método validar;
		 *  - Se for inválido, lança exceção;
		 *  - Se for válido, atribui o valor ao atributo do objeto de classe.
		 */
		void setValor(std::string valor);

		/**
		 * Método getter:
		 * - Retorna o valor armazenado no atributo do objeto de classe.
		 */
		const std::string getValor();
};

/**
 * Implementação de método getter inline
 */
inline const std::string CodigoDeBanco::getValor() {
	return valor;
}

#endif // CODIGODEBANCO_H_INCLUDED
