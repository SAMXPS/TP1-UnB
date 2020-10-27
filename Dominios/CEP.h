#ifndef CEP_H_INCLUDED
#define CEP_H_INCLUDED
#include <stdexcept>	// std::invalid_argument

// Implementação por Samuel James

/**
 * O Domínio CEP(Código de Endereçamento Postal) representa um código numérico que pode ser utilizado
 * para localização e distribuição das correspondências e endereços de forma lógica no Brasil.
 *
 * O valor do CEP pode estar contido nas seguintes faixas:
 * -  1000000 a  5999999
 * -  8000000 a  8499999 (São Paulo)
 * - 20000000 a 26600999 (Rio de Janeiro)
 * - 40000000 a 41999999 (Salvador)
 * - 60000000 a 60999999 (Fortaleza)
 * - 70000000 a 70999999 (Brasília)
 */
class CEP {

    private:
		long valor;

		/**
		 * O valor do CEP pode estar contido nas faixas descritas na documentação desta classe.
		 * Caso valor informado esteja fora dessas faixas, exceção será lançada.
		 */
        static void validate(long valor) throw(std::invalid_argument);

    public:
		/**
		 * Método construtor da classe CEP.
		 */
		CEP(long valor);

		/**
		 * Método setter:
		 *  - Verifica se o valor informado é valido, por meio do método validar;
		 *  - Se for inválido, lança exceção;
		 *  - Se for válido, atribui o valor ao atributo do objeto de classe.
		 */
		void setValor(long valor);

		/**
		 * Método getter:
		 * - Retorna o valor armazenado no atributo do objeto de classe.
		 */
		const long getValor();
};

// Implementação de método getter inline.
inline const long CEP::getValor() {
	return valor;
};

#endif // CEP_H_INCLUDED
