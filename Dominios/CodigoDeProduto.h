#ifndef CODIGODEPRODUTO_H_INCLUDED
#define CODIGODEPRODUTO_H_INCLUDED

#include <string>		// std::string
#include <stdexcept>	// std::invalid_argument

/**
 * O Código de Produto é um número que identifica individualmente cada produto de investimento.
 */
class CodigoDeProduto {
	
    private:
		std::string valor;
		
		/**
		 * A validação é feita de forma simples.
		 * Basicamente, verifica-se se a string tem tamanho 3.
		 * Em seguida, verifica-se se todos os characteres são algarismos numéricos.
		 */
        static void validate(std::string valor) throw(std::invalid_argument);
		
    public:
		/**
		 * Método construtor da classe CodigoDeProduto
		 */
		CodigoDeProduto(std::string valor);
		
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
		std::string getValor() const;
};

/**
 * Implementação de método getter inline
 */
inline std::string CodigoDeProduto::getValor() const{
	return valor;
}

#endif // CODIGODEPRODUTO_H_INCLUDED