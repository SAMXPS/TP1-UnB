import os

dominios = [
    "CEP",
    "Classe",
    "CodigoDeAgencia",
    "CodigoDeAplicacao",
    "CodigoDeBanco",
    "CodigoDeProduto",
    #"CPF",
    "Data",
    "Emissor",
    "Endereco",
    "Horario",
    "Nome",
    #"Numero",
    "Prazo",
    "Senha",
    "Taxa",
    "ValorDeAplicacao",
    "ValorMinimo",
]

def geraComando():
    comando = "g++ ../main.cpp"

    for dominio in dominios:
        comando += " ../Dominios/" + dominio + ".cpp"
        comando += " ../Tests/TU" + dominio + ".cpp"

    comando += " -o out/test.exe -g"
    return comando

def lerArquivo(nome):
    f = open(nome, "r")
    conteudo = f.read()
    f.close()
    return conteudo

def geraArquivo(nome):
    return open(nome, "w") 

def processaMain():
    main = lerArquivo("../main.cpp")

    linhas = main.splitlines()

    main2 = ""
    
    for linha in linhas:
        if linha.endswith("$"):
            dominio = (linha.split("$")[1])
            if dominio not in dominios:
                if not linha.startswith("//"):
                    linha = "//" + linha
            elif linha.startswith("//"):
                linha = linha[2:]
        main2 += linha + "\n"

    #print(main2)

    f = geraArquivo("../main.cpp")
    f.write(main2)
    f.close()

    return 1

if (processaMain()):
    print("opa")
    os.system(geraComando())

