#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STRLEN 30
#define N 3

struct s_studente {
    char nome[MAX_STRLEN];
    char cognome[MAX_STRLEN];
    int eta;
    char classe[MAX_STRLEN];
};

struct s_studente studente;

int main(int argc, char** argv) {
    
    int i;
    
    FILE *puntaFile;
    puntaFile = fopen("elenco.dat", "wb");
    
    if(puntaFile != NULL) {
        for(i = 0; i < N; i++) {
            printf("Nome %d : ");
            scanf("%s", studente.nome);
            printf("Congome %d : ");
            scanf("%s", studente.cognome);
            printf("Eta' %d : ");
            scanf("%d", &(studente.eta));
            printf("Classe %d : ");
            scanf("%s", studente.classe);
            fwrite(&studente, sizeof(studente), 1, puntaFile);
        }
        
        fclose(puntaFile);
    }
    
    return (EXIT_SUCCESS);
}