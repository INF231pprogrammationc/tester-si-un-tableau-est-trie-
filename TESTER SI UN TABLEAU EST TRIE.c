Conversation opened. 5 messages. 1 message unread.

Skip to content
Using Gmail with screen readers
Conversations
0% of 15 GB used
Terms · Privacy · Program Policies
Last account activity: 0 minutes ago
Open in 2 other locations · Details
#include <stdio.h>
#include <stdbool.h>
bool estTrieCroissant(int tableau[], int taille) {
    if (taille <= 1) return true;
    for (int i = 0; i < taille - 1; i++) {
    if (tableau[i] > tableau[i + 1]) {
      return false;
     }
    }
    return true;
   }
bool estTrieDecroissant(int tableau[], int taille) {
    if (taille <= 1) return true;
    for (int i = 0; i < taille - 1; i++) {
    if (tableau[i] < tableau[i + 1]) {
    return false;
    }
    }
    return true;
    }
  void afficherTableau(int tableau[], int taille) {
    printf("[");
    for (int i = 0; i < taille; i++) {
     printf("%d", tableau[i]);
    if (i < taille - 1) printf(", ");
    }
    printf("]\n");
    }
int main() {
    int taille;
    printf("=== Testeur de tableau trié ===\n\n");
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);
    if (taille <= 0) {
    printf("La taille doit être positive.\n");
    return 1;
    }
    int tableau[taille];
    printf("\nEntrez les %d éléments du tableau :\n", taille);
    for (int i = 0; i < taille; i++) {
    printf("Élément %d : ", i + 1);
    scanf("%d", &tableau[i]);
    }
    printf("\nTableau saisi : ");
    afficherTableau(tableau, taille);
    bool croissant = estTrieCroissant(tableau, taille);
    bool decroissant = estTrieDecroissant(tableau, taille);
    if (croissant && decroissant) {
    printf("Résultat : Le tableau est constant (tous les éléments sont égaux).\n");
    } else if (croissant) {
    printf("Résultat : Le tableau est trié en ordre CROISSANT.\n");
    } else if (decroissant) {
    printf("Résultat : Le tableau est trié en ordre DÉCROISSANT.\n");
    } else {
    printf("Résultat : Le tableau N'EST PAS TRIÉ.\n");
    }
    return 0;
}
trie du tableau 2.c
Displaying trie du tableau 2.c.