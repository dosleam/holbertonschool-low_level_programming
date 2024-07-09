#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* copier_chaine(const char* source) {
    char* copie;
    size_t taille;

    // Calculer la taille nécessaire pour la copie
    taille = strlen(source) + 1; // +1 pour le null terminator

    // Allouer la mémoire
    copie = (char*)malloc(taille);

    // Vérifier si l'allocation a réussi
    if (copie == NULL) {
        // Allocation échouée, retourner NULL ou gérer l'erreur
        return NULL;
    }

    // Copier la chaîne source dans la mémoire allouée
    strcpy(copie, source);

    // Retourner le pointeur vers la copie
    return copie;
}
