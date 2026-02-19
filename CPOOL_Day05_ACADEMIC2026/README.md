🏗️ CPool Day 05 : Mathematical Mastery & Backtracking 👑

Bienvenue dans le dépôt du Jour 05. Ici, on dompte les chiffres et on résout des problèmes d'échecs complexes ! ♟️
📂 Sommaire des Exercices
🧮 Section 01 : Puissances et Factorielles

    Factorielle Itérative 🔄 : my_compute_factorial_it

    Factorielle Récursive 🪆 : my_compute_factorial_rec

    Puissance Itérative ⚡ : my_compute_power_it

    Puissance Récursive 🔌 : my_compute_power_rec

        Note : Gestion des cas d'erreurs (négatifs) et limites d'overflow.

🔍 Section 02 : Nombres Premiers & Racines

    Square Root 📐 : my_compute_square_root (optimisé pour ne pas boucler inutilement).

    Is Prime? 💎 : my_is_prime (test de primalité via l'algorithme de division).

    Find Prime Sup 📈 : my_find_prime_sup (recherche intelligente du prochain nombre premier).

🏰 Section 03 : Le Problème des N-Reines

    Queens Placements 👑 : count_valid_queens_placements

        Utilisation d'un algorithme de Backtracking (retour sur trace).

        Vérification des collisions en lignes, colonnes et diagonales.

        Optimisation du stockage sur un tableau 1D. 🧠

🚀 Zoom sur l'Algorithme des Reines

Le défi est de placer n reines sur un plateau n×n sans qu'elles ne s'entretuent.
⚙️ Logique de résolution :

    Placer une reine sur la première ligne libre. ✍️

    Vérifier si la position est "safe" (pas d'attaque). ✅

    Récursion : Passer à la ligne suivante. 🪜

    Backtrack : Si aucune case ne marche, on revient à la ligne précédente et on déplace la reine. 🔙

📊 Tableau des Performances (N-Queens)
Taille du Plateau (n)	Combinaisons Trouvées	Difficulté
1x1	1	👶 Easy
4x4	2	🟢 Normal
5x5	10	🟡 Medium
8x8	92	🔴 Hard
10x10	724	🔥 Insane
