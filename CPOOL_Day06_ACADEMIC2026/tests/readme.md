C'est ma faute, je vais aérer au maximum pour que ce soit ultra-lisible sur ton écran. Voici une version avec de vrais espaces, des séparateurs nets et une structure "respirante".
🧪 UNIT TESTS - CRITERION 🧪
Validation & Robustesse du Code
📌 1. PRÉSENTATION

Ce dossier contient l'ensemble des tests unitaires développés avec la bibliothèque Criterion.

L'objectif est de garantir la fiabilité, la conformité et la robustesse de chaque fonction du Jour 06. Chaque fichier cible une fonction précise et traite :

    Les cas nominaux.

    Les cas limites (Edge Cases).

    La gestion des erreurs.

🛠️ 2. PRÉ-REQUIS

Pour compiler et exécuter ces tests sur ton système (Debian/Ubuntu), la bibliothèque doit être présente :
Bash

sudo apt install libcriterion-dev

🚀 3. UTILISATION
Compiler un Test Spécifique

Pour la Task 10 (my_str_isalpha) par exemple :
Bash

gcc -o unit_test my_str_isalpha.c tests/test_my_str_isalpha.c -lcriterion

Exécuter le Binaire

Une fois compilé, lance le test :
Bash

./unit_test

📋 4. STRATÉGIE DE TEST
Type de Test	Description	🎯 Objectif
Basic Case	Chaîne standard : "Hello"	Fonctionnement nominal.
Empty String	Chaîne vide : ""	Retour 1 (Standard Epitech).
Edge Cases	Limites ASCII : / ou :	Éviter les erreurs d'index.
Special Chars	\n, \t, ponctuation	Précision du filtrage.
Redirect STDOUT	Capture d'affichage	Valider my_showmem.
