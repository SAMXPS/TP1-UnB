#ifndef NOME_H_INCLUDED
#define NOME_H_INCLUDED

#include <string>		// std::string
#include <stdexcept>	// std::invalid_argument

/**
 * Nome é uma sequência de caracteres, geralmente é associada a um substantivo composto,
 * uma vez que sempre se inicia com letras maiúsculas.
 */
class Nome {
	
    private:
		std::string valor;
		
		/**
		 * Validação feita de forma simples.
		 * Primeiro, é verificado o tamanho da string.
		 * Em seguida, verifica-se que todos valores são letras do alfabeto.
		 * No caso de uma letra suceder um espaço, verifica-se se é maiúscula.
		 */
        static void validate(std::string valor) throw(std::invalid_argument);
		
    public:
		/**
		 * Método construtor da classe Nome
		 */
		Nome(std::string valor);
		
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
inline const std::string Nome::getValor() {
	return valor;
}

#endif // NOME_H_INCLUDED