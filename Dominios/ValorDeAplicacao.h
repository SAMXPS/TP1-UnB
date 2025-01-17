#ifndef VALORDEAPLICACAO_H_INCLUDED
#define VALORDEAPLICACAO_H_INCLUDED

#include <string>		// std::string
#include <stdexcept>	// std::invalid_argument

/**
 * Valor de aplicação é um valor numérico referente a uma quantida de dinheiro que será aplicada.
 */
class ValorDeAplicacao {

    private:
		double valor;
        static const int tamanho = 5;

		/**
		 * Validação simples, comparação de valores numéricos por sintaxe de if.
		 */
        static void validate(double valor) throw(std::invalid_argument);

    public:
		/**
		 * Método construtor da classe ValorDeAplicacao
		 */
		ValorDeAplicacao(double valor);

		/**
		 * Método setter:
		 *  - Verifica se o valor informado é valido, por meio do método validar;
		 *  - Se for inválido, lança exceção;
		 *  - Se for válido, atribui o valor ao atributo do objeto de classe.
		 */
		void setValor(double valor);

		/**
		 * Método getter:
		 * - Retorna o valor armazenado no atributo do objeto de classe.
		 */
		const double getValor();
};

/**
 * Implementação de método getter inline
 */
inline const double ValorDeAplicacao::getValor() {
	return valor;
}

#endif // VALORDEAPLICACAO_H_INCLUDED
