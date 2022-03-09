/* 
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2021/2
Prof. Marcelo Luiz Drumond Lanza
Autor: Vitor Carneiro Silva de Oliveira
Descricao: Prototipo do roteiro 9

$Author$
$Date$
$Log$
*/

#ifndef _AULA0901_
#define _AULA0901_  "@(#)aula0901.h $Revision$"
#endif

#define BUFFER   16
#define COMPRIMENTO_BUFFER   100

typedef unsigned char byte;

typedef enum
{
	ok,
	valorInvalido,
	memoriaInsuficiente,
	erroAbrindoArquivo
} tipoErros;

tipoErros
ExibirConteudoArquivo (char *original /* (E) */);

tipoErros
ConverterArquivoFormatoUnixParaFormatoDos (char *original, char *convertido);

tipoErros
ConverterArquivoFormatoDosParaFormatoUnix (char *original, char *convertido);

/*$RCSfile$*/