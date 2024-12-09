/*
  Titre      : Titre du programme
  Auteur     :  Philip Moumie
  Date       : 09/12/2024
  Description: Une description du programme
  Version    : 0.0.1
*/

#include <iostream>
using namespace std;

// Fonction pour échanger deux éléments en utilisant des pointeurs
void echanger(int* a, int* b) {
    int temp = *a;  // Sauvegarde la valeur pointée par a
    *a = *b;        // Remplace la valeur pointée par a par celle pointée par b
    *b = temp;      // Place la valeur sauvegardée dans b
}

// Fonction pour trier un tableau en utilisant des pointeurs
void trier(int* tableau, int taille) {
    for (int i = 0; i < taille - 1; i++) {
        // Trouver l'indice du plus petit élément à partir de i
        int* plusPetit = tableau + i;  // Pointeur sur l'élément actuel
        for (int j = i + 1; j < taille; j++) {
            if (*(tableau + j) < *plusPetit) { // Comparer les valeurs
                plusPetit = tableau + j;      // Mettre à jour le pointeur
            }
        }
        // Échanger les éléments si nécessaire
        if (plusPetit != tableau + i) {
            echanger(tableau + i, plusPetit);
        }
    }
}

// Fonction principale
int main() {
    int tableau[] = {29, 10, 14, 37, 13};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    cout << "Tableau avant tri : ";
    for (int i = 0; i < taille; i++) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    // Trier le tableau
    trier(tableau, taille);

    cout << "Tableau après tri : ";
    for (int i = 0; i < taille; i++) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    return 0;
}
