/*==============================================================================
File		:	file1.c
Autore		:	M. Stefanello
Diario		:	18.11.21: emissione
Descrizione	:	Esempio multi-modulo
==============================================================================*/

#include "file1.h" // header di questo file
#include "main.h"  // interfaccia di "main": extern di pippo

/*------------------------------------------------------------------------------
 Sintassi           : void function1(void)                           
 Parametri di input : nessuno
 Valore di ritorno  : nessuno
 Descrizione        : funzione che aggiunge 1 a pippo ad ogni chiamata
------------------------------------------------------------------------------*/
void function1(void)
{
	pippo += 1;
}
