#include <stdio.h>
#include "prototipi.h"
#include <stdlib.h>


int main() {
	int const dim = 2;
	Impiegato azienda1[dim];//primo array di struct, da cui leggerò i dati da scrivere nel file binario;
	Impiegato azienda2[dim];//secondo array di struct, nel quale reinserirò i dati letti dal file;
	//carico l'azienda di struct tramite input dell'utente;
	caricaAzienda(azienda1, dim);
	//visualizzo il contenuto dell'array di struct;
	visualizzaAzienda(azienda1, dim);
	//Scrivo i record nel file binario;
	scriviRecord(azienda1, dim);
	//leggo i record dal file binario e li inserisco in un secondo array;
	leggiRecord(azienda2, dim);
	//controllo che il secondo array contenga i dati corretti;
	visualizzaAzienda(azienda2, dim);




	return 0;
}