#ifndef CODIGODEAPLICACAO _H_INCLUDED
#define CODIGODEAPLICACAO _H_INCLUDED

#include <string>		// std::string
#include <stdexcept>	// std::invalid_argument

/**
 * TODO: Dar explicação resumida sobre a classe
 */
class CodigoDeAplicacao {
	
    private:
		std::string valor;
		
		/**
		 * Método estático que faz a validação do valor.
		 * Para mais informações, vide documentação de implementação do mesmo.
		 */
        static void validate(std::string valor) throw (std::invalid_argument);
		
    public:
		/**
		 * Método construtor da classe CodigoDeAplicacao 
		 */
		CodigoDeAplicacao (std::string valor);
		
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
inline const std::string CodigoDeAplicacao::getValor() {
	return valor;
}

#endif // CODIGODEAPLICACAO _H_INCLUDED