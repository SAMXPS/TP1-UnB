#ifndef CPF_H_INCLUDED
#define CPF_H_INCLUDED

#include <string>		// std::string
#include <stdexcept>	// std::invalid_argument

/**
 * o Domínio CPF(Cadastro de Pessoa Físca) armezana uma sequência de números e caracteres. O CPF é um
 * documento que simboliza o registro de cidadãos brasileiros ou estrangeiros legais e armazena informações
 * pessoais do contribuinte no sistema da Receita Federal
 */
class CPF {

    private:
		std::string valor;
		static const int tamanho = 14;//tamanho do cpf

		/**
		 * A função validate verifica o CPF da seguinte forma:
		 * Primeiro a função pega os 9 primeiros dígitos sem contar com os "pontos", e multiplica eles por um peso correspondente,
         * para poder encontrar e verificar o primeiro dígito
		 * Sendo esses pessos 10, 9, 8, 7, 6, 5, 4, 3 e 2, e cada peso vai corresponder por somente um dígito de ordem crescente nos números de digitos
		 * e decrescente no número de pesos, ou seja, o peso 10 vai multiplicar o primeiro digito e o peso 2 irá multiplicar o nono dígito.
		 * Em seguida o essa multiplicações irão ser somadas, e a soma irá ser dividida por 11. Depois pega-se o resto da divisão, e com esse resto
		 * observa-se se o resto é maior ou menor que 2. Se for menor que 2, o primeiro dígito é 0, caso contrário subtrai o valor obtido por 11, ou seja
		 * se der resto 8 o dígito é 3 (11-8 = 3)
		 * Para o cálculo do segundo dígito, vamos multiplicar da mesma maneneira que a anterior
		 * porém dessa vez o primeiro dígito verificador entra nessa multiplicação, e então os pesos serão 11, 10, 9, 8, 7, 6, 5, 4, 3 e 2.
		 * Depois disso é feito a soma dessas multiplicações e novamente é feito o módulo da soma por 11, e novamente compara se o resto é maior ou menor que 2.
		 * Se o número for menor que 2 ele é automaticamente 0, se for maior que 2, subtrai esse número por 11
		 * Sendo assim foi possível verificar o CPF.
		 * Além dessa verificação, também confere o formato e tamanho do CPF padrão. Caso o CPF falhe em algum desses casos, a execeção é lançada
		 *
		 */
        static void validate(std::string valor) throw(std::invalid_argument);

    public:
		/**
		 * Método construtor da classe CPF
		 */
		CPF(std::string valor);

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
inline const std::string CPF::getValor() {
	return valor;
}

#endif // CPF_H_INCLUDED
