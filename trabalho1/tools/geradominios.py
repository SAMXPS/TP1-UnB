import os.path

dominios = [
    "CEP",
    "Classe",
    "CodigoDeAgencia",
    "CodigoDeAplicacao ",
    "CodigoDeBanco",
    "CodigoDeProduto",
    "CPF",
    "Data",
    "Emissor",
    "Endereco",
    "Horario",
    "Nome",
    "Numero",
    "Prazo",
    "Senha",
    "Taxa",
    "ValorDeAplicacao",
    "ValorMinimo",
]

def lerArquivo(nome):
    f = open(nome, "r");
    conteudo = f.read()
    f.close()
    return conteudo

def geraArquivo(nome):
    return open(nome, "w")    

base_cpp    = lerArquivo("geradominios.cpp.base")
base_header = lerArquivo("geradominios.h.base")

def completaBase(variaveis, base):
    temp = base
    for chave in variaveis:
        temp = temp.replace(chave, variaveis[chave]);
    return temp

def geraHeader(dominio, variaveis):
    f = geraArquivo("../Dominios/" + dominio + ".h")
    f.write(completaBase(variaveis, base_header))
    f.close()

def geraCPP(dominio, variaveis):
    f = geraArquivo("../Dominios/" + dominio + ".cpp")
    f.write(completaBase(variaveis, base_cpp))
    f.close()

for dominio in dominios:
    variaveis = {
        "$includedMask$": dominio.upper() + "_H_INCLUDED",
        "$dominio$": dominio,
        "$tipoValor$": "string",
    }
    geraHeader(dominio, variaveis)
    geraCPP(dominio, variaveis)