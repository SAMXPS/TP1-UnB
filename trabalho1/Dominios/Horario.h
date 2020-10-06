#ifndef HORARIO_H_INCLUDED
#define HORARIO_H_INCLUDED

#include <string>		// std::string
#include <stdexcept>	// std::invalid_argument

/**
 * O Domínio Horário tem como objetivo de indentificar
 * o horário limite para aplicação no produto de investimento
 */
class Horario {

    private:
		std::string valor;
		static const int tamanho = 5;
		static const int maximo = 3;
		static const int minimo = 7;

		/**
		 * Essa validação confere se está no formato adequado com o caracter ":" entre os 4 dígitos, confere se está no
		 * intervalo de 13:00 a 17:00. Caso ele falhe em algum desses casos, é lançada a execeção
		 */
        static void validate(std::string valor) throw(std::invalid_argument);

    public:
		/**
		 * Método construtor da classe Horario
		 */
		Horario(std::string valor);

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
inline const std::string Horario::getValor() {
	return valor;
}

#endif // HORARIO_H_INCLUDED
