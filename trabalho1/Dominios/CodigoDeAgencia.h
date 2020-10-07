#ifndef CODIGODEAGENCIA_H_INCLUDED
#define CODIGODEAGENCIA_H_INCLUDED

#include <string>		// std::string
#include <stdexcept>	// std::invalid_argument

/**
 * Código de Agência é um número que representa a agência bancária da conta do cliente.
 * Cada agência possui um código distinto.
 */
class CodigoDeAgencia {

    private:
		std::string valor;
		static const int tamanho = 4;

		/**
		 * A validação é feita de forma simples.
		 * Basicamente, verifica-se se a string tem tamanho 4.
		 * Em seguida, verifica-se se todos os characteres são algarismos numéricos.
		 */
        static void validate(std::string valor) throw (std::invalid_argument);

    public:
		/**
		 * Método construtor da classe CodigoDeAgencia
		 */
		CodigoDeAgencia(std::string valor);

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
inline const std::string CodigoDeAgencia::getValor() {
	return valor;
}

#endif // CODIGODEAGENCIA_H_INCLUDED
