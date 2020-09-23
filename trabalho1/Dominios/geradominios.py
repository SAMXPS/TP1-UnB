import os.path

hed = ["#ifndef ", "#define ", "#endif // "]

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
    "Praazo",
    "Senha",
    "Taxa",
    "ValorDeAplicacao",
    "ValorMinimo",
]

def geraArquivo(nome):
    return open(nome, "w")

def geraConteudoHeader(dominio):
    upper = dominio.upper() + "H_INCLUDED"
    conteudo = ""
    for line in hed:
        conteudo += line + upper + "\n"
    return conteudo

def geraHeader(dominio):
    f = geraArquivo(dominio + ".h")
    f.write(geraConteudoHeader(dominio))
    f.close()

def geraCPP(dominio):
    f = geraArquivo(dominio + ".cpp")
    f.close()

for d in dominios:
    geraHeader(d)
    geraCPP(d)