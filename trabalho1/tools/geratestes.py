import os.path

dominios = [
    "CEP",
    "Classe",
    "CodigoDeAgencia",
    "CodigoDeAplicacao",
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

base_cpp    = lerArquivo("TU.cpp.base")
base_header = lerArquivo("TU.h.base")

def completaBase(variaveis, base):
    temp = base
    for chave in variaveis:
        temp = temp.replace(chave, variaveis[chave]);
    return temp

def geraHeader(dominio, variaveis):
    f = geraArquivo("../Tests/TU" + dominio + ".h")
    f.write(completaBase(variaveis, base_header))
    f.close()

def geraCPP(dominio, variaveis):
    f = geraArquivo("../Tests/TU" + dominio + ".cpp")
    f.write(completaBase(variaveis, base_cpp))
    f.close()

for dominio in dominios:
    if (dominio == "CEP"):
        continue

    variaveis = {
        "$includedMask$": dominio.upper() + "_H_INCLUDED",
        "$dominio$": dominio,
        "$tipoValor$": "string",
    }
    
    geraHeader(dominio, variaveis)
    geraCPP(dominio, variaveis)