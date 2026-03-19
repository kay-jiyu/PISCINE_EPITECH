
📌 CPool Day 09 - Structures & Macros 🚀
📝 Description
Ce projet porte sur l'utilisation des structures, des unions et la manipulation avancée des bits (le binaire). L'objectif est d'apprendre à stocker des données complexes et à optimiser la gestion des couleurs (ARGB) et de la mémoire.
🛠️ Liste des Tasks
🔹 Task 01 : my_macro_abs 📏
Création d'une macro ABS(value) qui retourne la valeur absolue d'un nombre.
 * Fichier : my_macro_abs.h
 * Concept : Utilisation du préprocesseur C.
🔹 Task 02 : get_color 🎨
Fonction qui assemble trois composants (Rouge, Vert, Bleu) dans un seul int.
 * Fichier : get_color.c
 * Technique : Décalage de bits (<<) et opérateur OR (|).
🔹 Task 03 : my_params_to_array 📦
Stockage des arguments de la ligne de commande dans un tableau de structures info_param.
 * Fichier : my_params_to_array.c
 * Important : Le dernier élément du tableau doit avoir son champ str mis à 0.
🔹 Task 04 : my_show_param_array 🖥️
Affichage du contenu du tableau de structures créé à la Task 03.
 * Fichier : my_show_param_array.c
 * Format : Affiche la string, sa longueur et le tableau de mots associé.
🔹 Task 05 : get_color (Variante) 🌈
Manipulation des couleurs avec gestion de l'opacité (Alpha).
 * Concept : Format ARGB 32-bits.
🔹 Task 06 : swap_endian_color 🔄
Inversion de l'ordre des octets d'une couleur (Endianness).
 * Fichier : swap_endian_color.c
 * But : Passer d'un format [A][R][G][B] à [B][G][R][A].
⚙️ Compilation
Pour compiler les tests, assure-toi d'avoir ta libmy prête :
gcc main.c -L./lib/my -lmy -I./include

© 2026 - Promo Epitech 👨‍💻

