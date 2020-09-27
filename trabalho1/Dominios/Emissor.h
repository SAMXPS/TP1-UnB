#ifndef EMISSOR_H_INCLUDED
#define EMISSOR_H_INCLUDED

/**
 * TODO: Dar explicação resumida sobre a classe
 */
class Emissor {

    private:
		string valor;
		static const int maximo = 30;
		static const int minimo = 5;
		/**
		 * Método estático que faz a validação do valor.
		 * Para mais informações, vide documentação de implementação do mesmo.
		 */
        static void validate(string valor) throw invalid_argument;

    public:
		/**
		 * Método construtor da classe Emissor
		 */
		Emissor(string valor);

		/**
		 * Método setter:
		 *  - Verifica se o valor informado é valido, por meio do método validar;
		 *  - Se for inválido, lança exceção;
		 *  - Se for válido, atribui o valor ao atributo do objeto de classe.
		 */
		void setValor(string valor);

		/**
		 * Método getter:
		 * - Retorna o valor armazenado no atributo do objeto de classe.
		 */
		const string getValor();
}

/**
 * Implementação de método getter inline
 */
inline const string Emissor::getValor() {
	return valor;
}

#endif EMISSOR_H_INCLUDED
