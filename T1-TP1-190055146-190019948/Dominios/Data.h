#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

#include <string>		// std::string
#include <stdexcept>	// std::invalid_argument

/**
 * Data é uma representação de dias, meses e anos.
 * Leva em conta a ocorrencia de ans bissextos.
 * No caso deste trabalho, está restringida aos ans 2020 a 2099.
 */
class Data {
	
    private:
		std::string valor;

		/**
		 * Verifica-se as posições dos caracteres divisores.
		 * Em seguida, verifica-se se todos os caracteres restantes são números.
		 * Finalmente, converte-se cada parte da data em seu respectivo valor numérico.
		 * É levado em conta a ocorrência de anos bissextos.
		 */
        static void validate(std::string valor) throw(std::invalid_argument);
		
    public:
		/**
		 * Método construtor da classe Data
		 */
		Data(std::string valor);
		
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
 * Implementação de método getter inline.
 */
inline const std::string Data::getValor() {
	return valor;
}

#endif // DATA_H_INCLUDED