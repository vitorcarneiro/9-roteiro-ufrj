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
#include <time.h>

tipoErros
ExibirConteudoArquivo (char *nomeArquivo)
{
	unsigned long long valor, indice;
	
	byte *bytes, buffer[COMPRIMENTO_BUFFER];
	
	FILE *original;
	size_t lidos;

	original = fopen(nomeArquivo,"r");
	if (original == NULL) 
	{
		printf ("Nao foi possivel abrir o arquivo \"%s\" para leitura.\n", nomeArquivo);
		printf ("Erro (#%i) : %s\n", errno, strerror(errno));
		return erroAbrindoArquivo;
	}
	memset(buffer,0x00, COMPRIMENTO_BUFFER + 2);

/*------------------------------------------- Alocando memoria ---------------*/	
	bytes = (byte *) malloc(sizeof (BUFFER * 2 + 1));
	if(bytes == NULL)
	{
		fclose (original);	
		printf ("Memoria insuficiente.\n");
		return memoriaInsuficiente;
	}
/*----------------------------------------------------------------------------*/	
	fseek (original, 0, SEEK_SET);

	valor = strlen((char*)bytes);
	
	while((lidos = fread(bytes, 1, 16, original)) > 0)
	{
		printf ("%08X |", (int) valor);
		valor += strlen((char*)bytes);

		for(indice = 0; indice < strlen((char*)bytes); indice += 2)
		    printf ("%02X%02X ", bytes[indice], bytes[indice + 1]);
	       	
		if(strlen((char*)bytes) < 16)
		{
			for(indice = strlen((char*)bytes); indice < 15; indice += 2)
				printf("     ");	
		}
		printf("| ");	
		for(indice = 0; indice < strlen((char*)bytes); indice++){
			printf("%c", bytes[indice] < 0x20 ? '.': bytes[indice] < 0x7F ? bytes[indice] : '.');
		}
		printf("\n");	
		memset(bytes,0,16);
	}

	if(ferror (original))
	{
		printf ("Erro lendo o arquivo.\n");
		fclose (original);
		free (bytes);
		return erroAbrindoArquivo;
	}

	printf("Arquivo \"%s\" codificado.\n", nomeArquivo);

	return ok;
}

tipoErros
ConverterArquivoFormatoUnixParaFormatoDos (char *original, char *convertido)
{
	unsigned indice;
	byte bytes [BUFFER + 1];
	FILE *arquivoLeitura, *arquivoEscrita;
	
	char temporario[31] = "arquivoTemporario.XXXXXXXXXXXX", *backup;
	int arquivoTemporario ;
	
	size_t lidos;
	time_t horario;
	struct tm *diaHora;
	char anterior;

	arquivoLeitura = fopen (original, "r");
	
	if (arquivoLeitura == NULL) 
		return erroAbrindoArquivo ;
	
	if (convertido == NULL)
	{
		arquivoTemporario = mkstemp(temporario);
		if (arquivoTemporario == -1)
			return erroAbrindoArquivo;
		
		arquivoEscrita = fdopen (arquivoTemporario,"w");

		backup = (char *) malloc (sizeof(char[strlen(original) + 25]));
		if ( backup == NULL)
			return memoriaInsuficiente;
	}
	else
		arquivoEscrita = fopen (convertido, "w");	

	if (arquivoEscrita == NULL) 
		return erroAbrindoArquivo ;
	
	bytes [BUFFER] = '\0'; 

	memset(bytes, 0x00, BUFFER); 

	while ((lidos = fread(bytes, 1, BUFFER, arquivoLeitura)) > 0)
	{
		for (indice = 0 ; indice < strlen((char *) bytes); indice++)
		{
			if (bytes[indice] != '\n')
				fwrite(&bytes[indice], 1, 1, arquivoEscrita);
			
			else if (anterior == '\r')  
				fwrite(&bytes[indice], 1, 1, arquivoEscrita);
			
			else
				fwrite("\r\n", 2, 1, arquivoEscrita);

			anterior = bytes[indice];
		}
		memset(bytes, 0x00, BUFFER); 
	}

	fclose(arquivoLeitura);
	fclose(arquivoEscrita);

	if (convertido == NULL)
	{
		horario = time(NULL);
		diaHora = localtime (&horario);

		snprintf (backup, strlen(original)+25,"%sbackup-%04d%02d%02d_%02d%02d%02d",
				original,
				diaHora->tm_year +1900, diaHora->tm_mon +1 ,diaHora->tm_mday,
				diaHora->tm_hour,diaHora->tm_min,diaHora->tm_sec);

		printf ("\nBackup do arquivo original antes da conversao  \"%s\".\n\n",backup);
		rename (original,backup);
		rename (temporario,original);
	}

	return ok;
}

tipoErros
ConverterArquivoFormatoDosParaFormatoUnix (char *original, char *convertido)
{
	unsigned indice;
	byte bytes [BUFFER + 1];
	
	FILE *arquivoLeitura, *arquivoEscrita;
	char temporario[31] = "arquivoTemporario.XXXXXXXXXXXX", *backup;
	
	int arquivoTemporario ;
	size_t lidos;
	
	time_t horario;
	struct tm *diaHora;

	arquivoLeitura = fopen (original, "r");
	if (arquivoLeitura == NULL) 
		return erroAbrindoArquivo ;
	
	if (convertido == NULL)
	{
		arquivoTemporario = mkstemp(temporario);
		
		if (arquivoTemporario == -1)
			return erroAbrindoArquivo;
			
		arquivoEscrita = fdopen (arquivoTemporario,"w");

		backup = (char *) malloc (sizeof (char[strlen(original)+25]));
		if ( backup == NULL)
			return memoriaInsuficiente;
	}
	else
		arquivoEscrita = fopen (convertido, "w");	

	if (arquivoEscrita == NULL) 
		return erroAbrindoArquivo ;

	bytes [BUFFER] = '\0'; 

	memset(bytes, 0x00, BUFFER);

	while ((lidos = fread (bytes, 1, BUFFER, arquivoLeitura)) > 0 )
	{
		for (indice = 0 ; indice < strlen((char *) bytes); indice++ )
		{
			if (bytes[indice] != '\r')
				fwrite(&bytes[indice],1,1,arquivoEscrita);
		}
		memset(bytes, 0x00, BUFFER); 
	}

	fclose (arquivoLeitura);
	fclose (arquivoEscrita);

	if (convertido == NULL)
	{
		horario = time(NULL);
		diaHora = localtime (&horario);

		snprintf (backup,strlen(original)+25,"%sbackup-%04d%02d%02d_%02d%02d%02d",
				original,
				diaHora->tm_year +1900, diaHora->tm_mon +1 ,diaHora->tm_mday,
				diaHora->tm_hour,diaHora->tm_min,diaHora->tm_sec);

		printf ("\nArquivo antes da conversao salvo em \"%s\".",backup);
		rename (original,backup);
		rename (temporario,original);
	}

	return ok;
}


/*$RCSfile$*/