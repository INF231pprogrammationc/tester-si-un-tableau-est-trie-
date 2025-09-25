PROBLÈME:

Vérifier si un tableau d’entiers saisi par l’utilisateur est trié :
• en ordre croissant,
• en ordre décroissant,
• constant (tous les éléments égaux),
• ou non trié.

PRINCIPE:
1. Lire la taille du tableau et ses éléments.
2. Vérifier si le tableau est trié en ordre croissant.
3. Vérifier si le tableau est trié en ordre décroissant.
4. Selon les résultats :
• si croissant et décroissant → tableau constant,
• si seulement croissant → trié croissant,
• si seulement décroissant → trié décroissant,
• sinon → non trié.
5. Afficher le résultat.

DICTIONNAIRE DE DONNÉES:
• taille : taille du tableau (int)
• tableau[taille] : tableau d’entiers saisi (int[])
• i : indice de parcours (int)
• croissant : indicateur booléen si le tableau est croissant (bool)
• decroissant : indicateur booléen si le tableau est décroissant (bool)

COMPLEXITÉ:
• Temps : O(n) .
• Espace : O(n
