#ifndef SENHA_H_INCLUDED
#define SENHA_H_INCLUDED

/**
 * TODO: Dar explicação resumida sobre a classe
 */
class Senha {
	
    private:
		string valor;
		
		/**
		 * Método estático que faz a validação do valor.
		 * Para mais informações, vide documentação de implementação do mesmo.
		 */
        static void validate(string valor) throw invalid_argument;
		
    public:
		/**
		 * Método construtor da classe Senha
		 */
		Senha(string valor);
		
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
inline const string Senha::getValor() {
	return valor;
}

#endif SENHA_H_INCLUDED