#include <stdio.h>
#include <stdlib.h>
#include "prototipi.h"

void caricaAzienda(Impiegato azienda[], int dim) {
	for (int i = 0; i < dim; i++) {
		printf("Inserisci la %d° matricola:\n", i + 1);
		scanf("%s", azienda[i ].matricola);
		printf("Inserisci il %d° nome:\n", i + 1);
		scanf("%s", azienda[i ].nome);
		printf("Inserisci il %d° cognome:\n", i + 1);
		scanf("%s", azienda[i ].cognome);
		printf("Inserisci il %d° stipendio:\n", i + 1 );
		scanf("%d", &azienda[i].stipendio);
	}
}
void visualizzaAzienda(Impiegato azienda[], int dim) {
	for (int i = 0; i < dim; i++) {
		printf("\nMatricola: %s\n", azienda[i].matricola);
		printf("Nome: %s\n", azienda[i].nome);
		printf("Cognome: %s\n", azienda[i].cognome);
		printf("Stipendio: %d\n\n", azienda[i].stipendio);
	}
}

void scriviRecord(Impiegato azienda[], int dim) {
	FILE* fp;
	fp = fopen("bianrio.bin", "wb");
	if (!(fp = fopen("binario.bin", "wb"))) {//controllo che lo stream venga aperto correttamente;
		printf("Si è verificato un'errore nell'apertura del file.\n");
		exit(1);
	}
	fwrite(azienda, sizeof(Impiegato), dim, fp);//Scrivo il record sul file binario
	fclose(fp);
}

void leggiRecord(Impiegato azienda[], int dim) {
	FILE* fp;
	fp = fopen("binario.bin", "rb");
	if (!(fp = fopen("binario.bin", "rb"))) {
		printf("Errore nell'apertura del file.\n");
		exit(1);
	}
	fread(azienda, sizeof(Impiegato), dim, fp);
	fclose(fp);
}