#ifndef CLASSE_H_INCLUDED
#define CLASSE_H_INCLUDED

#include <string>		// std::string
#include <stdexcept>	// std::invalid_argument

/**
 * Representa o tipoo de investimento que será feito.
 * Pode ser CDB, LCA, LCI, LF ou LC.
 */
class Classe {
	
    private:
		std::string valor;
		
		/**
		 * A validação é feita de forma simples, apenas coomparando os valores de Strings.
		 */
        static void validate(std::string valor) throw (std::invalid_argument);
		
    public:
		/**
		 * Método construtor da classe Classe
		 */
		Classe(std::string valor);
		
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
inline const std::string Classe::getValor() {
	return valor;
}

#endif // CLASSE_H_INCLUDED