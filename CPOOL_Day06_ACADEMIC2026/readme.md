🌊 C POOL - DAY 06 🌊
String Manipulation & Memory Management
📌 PRÉSENTATION

Ce dépôt rassemble les exercices du Jour 06 de la Piscine. L'accent est mis sur la recréation des fonctions de la bibliothèque standard C (libc) et la compréhension profonde de la mémoire.
🛠️ FONCTIONS DE MANIPULATION

    🔤 Transformations & Recherche

        ✨ my_strstr — Recherche d'une sous-chaîne.

        ✨ my_strcmp — Comparaison de deux chaînes.

        ✨ my_strncmp — Comparaison limitée à n caractères.

        ✨ my_strupcase — Passage en MAJUSCULES.

        ✨ my_strlowcase — Passage en minuscules.

        ✨ my_strcapitalize — Capitalisation de début de mots.

🔍 VÉRIFICATEURS (BOOLEAN)
Fonction	Rôle	Status
🏷️ my_str_isalpha	Vérifie si Alphabet	Ready ✅
🔢 my_str_isnum	Vérifie si Chiffres	Ready ✅
📉 my_str_islower	Vérifie si Minuscules	Ready ✅
📈 my_str_isupper	Vérifie si Majuscules	Ready ✅
🖨️ my_str_isprintable	Vérifie si Imprimable	Ready ✅
🧠 EXERCICES AVANCÉS
💎 Gestion des Bases

    my_putnbr_base : Affiche un nombre dans n'importe quelle base (Binary, Hex, etc.).

    my_getnbr_base : Convertit une chaîne depuis une base vers un int.

💀 Visualisation Mémoire

    my_showstr : Affiche proprement les caractères invisibles.

    my_showmem : Dump mémoire complet. Affiche l'adresse, l'hexa et le contenu ASCII.

🧪 TESTS UNITAIRES (CRITERION)

Pour garantir la qualité du code, chaque fonction est passée au crible :

    Installation : sudo apt install libcriterion-dev

    Compilation :
    Bash

gcc -o unit_tests my_*.c tests/test_my_*.c -lcriterion

Exécution :
Bash

    ./unit_tests

📂 ARCHITECTURE DU REPO
Plaintext

.
├── 📄 my_putnbr_base.c
├── 📄 my_showmem.c
├── 📄 ... (autres fichiers .c)
│
├── 📂 tests/
│   ├── 📄 test_my_str_isalpha.c
│   └── 📄 ... (autres tests)
│
└── 📘 README.md

    ⚠️ IMPORTANT : Toutes les fonctions respectent la Norme Epitech (pas de fonctions interdites, 80 colonnes max, indentation stric
