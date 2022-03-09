/* 
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2021/2
Prof. Marcelo Luiz Drumond Lanza
Autor: Vitor Carneiro Silva de Oliveira
Descricao: Funcoes do roteiro 9

$Author$
$Date$
$Log$
*/

#ifdef __linux__
#define _XOPEN_SOURCE 600
#endif

#if defined (__FreeBSD__) && defined (__STRICT_ANSI__)
#define __ISO_C_VISIBLE         1999
#define __LONG_LONG_SUPPORTED
#endif

#include "aula0901.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <limits.h>
#include <errno.h>

#define OK										0
#define NUMERO_ARGUMENTOS_INVALIDO				1
#define ERRO_LENDO_ARQUIVO 						2

int main (int argc, char *argv[])
{
	tipoErros resultado;
	
	if(argc < 2) 
	{
		printf ("Uso: %s <arquivo> <arquivo>\n", argv[0]);
		exit (NUMERO_ARGUMENTOS_INVALIDO) ;	
	}
	
	resultado = ConverterArquivoFormatoUnixParaFormatoDos (argv[1], argv[2]);
	
	if(resultado != ok)
	{
		exit(ERRO_LENDO_ARQUIVO);
	}
	return OK;
}









/* $RCSfile$ */