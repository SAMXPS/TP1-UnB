#ifndef NUMERO_H_INCLUDED
#define NUMERO_H_INCLUDED

#include <string>		// std::string
#include <stdexcept>	// std::invalid_argument

/**
 * O Domínio Número tem como objetivo de indentificar
 * o número da conta do cliente
 */
class Numero {

    private:
		std::string valor;
		static const int tamanho = 8;

		/**
		 * A função validate irá verifica o tamanho do número da conta, o formato e o dígito verificador.
		 * Para verificar o dígito verificador é necessário fazer uma conta chamada de módulo 11.
		 * Essa conta multiplica todos os 6 primeiros dígitos por pesos de 7 a 2, onde cada peso irá multiplicar somente um dígito
		 * e comecará da esquerda indo para a direita, e começando pelo 7. Depois disso faz o módulo da soma das multiplicações por 11, e assim
		 * encotra-se o digito verificador e compara com o dígito recebido. Caso ele falhe em algum desses casos, é lançada a execeção
		 */
        static void validate(std::string valor) throw(std::invalid_argument);

    public:
		/**
		 * Método construtor da classe Numero
		 */
		Numero(std::string valor);

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
inline const std::string Numero::getValor() {
	return valor;
}

#endif // NUMERO_H_INCLUDED
