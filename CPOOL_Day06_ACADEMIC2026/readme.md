🌊 C Pool Day 06 - String & Memory Manipulation 🌊
📝 Description

Ce dépôt contient l'ensemble des fonctions développées lors du Jour 06 de la Piscine C. L'objectif est de manipuler les chaînes de caractères (recherche, comparaison, transformation) et de maîtriser la gestion mémoire ainsi que les changements de bases numériques. 💻✨
🛠️ Fonctions Disponibles
🔤 Manipulation de Chaînes
Task	Fonction	Description	✨ Status
04	my_strstr	Recherche une sous-chaîne dans une chaîne.	✅ Done
05	my_strcmp	Compare deux chaînes de caractères.	✅ Done
06	my_strncmp	Compare les n premiers caractères.	✅ Done
07	my_strupcase	Passage en MAJUSCULES.	✅ Done
08	my_strlowcase	Passage en minuscules.	✅ Done
09	my_strcapitalize	Capitalisation intelligente (début de mots).	🔥 Pro
🔍 Vérifications (Boolean)
Task	Fonction	Condition de Validation (1)	🛡️ Security
10	my_str_isalpha	Uniquement Alphabet (A-Z, a-z).	🆗
11	my_str_isnum	Uniquement Chiffres (0-9).	🆗
12	my_str_islower	Uniquement Minuscules.	🆗
13	my_str_isupper	Uniquement Majuscules.	🆗
14	my_str_isprintable	Uniquement Caractères Imprimables.	🆗
🧠 Bases & Mémoire (Hardcore)
Task	Fonction	Description	⚠️ Niveau
15	my_putnbr_base	Affiche un nombre dans n'importe quelle base.	🟠 Medium
16	my_getnbr_base	Convertit une base n en entier base 10.	🔴 Hard
17	my_showstr	Affiche le non-imprimable en Hexadécimal.	🟠 Medium
18	my_showmem	Dump Mémoire Complet (Hexa + ASCII).	💀 Expert
🧪 Tests Unitaires (Criterion) 🚦

Tous les tests sont automatisés pour garantir une fiabilité à 100%.
🚀 Lancer un test :
Bash

gcc -o unit_test [SOURCE].c tests/[TEST].c -lcriterion
./unit_test

📋 Scénarios couverts :

    📂 Empty Strings : Gestion des chaînes vides "".

    🔢 Negative Numbers : Gestion des signes pour les bases.

    📏 Buffer Limits : Respect strict du paramètre n.

    🔡 ASCII Edge Cases : Vérification des limites de la table ASCII.

📁 Organisation du Repository
Plaintext

.
├── 📄 my_*.c             # Sources des fonctions (Core logic)
├── 📂 tests/             # Dossier Criterion (Unit Tests)
│   └── 📄 test_my_*.c    # Fichiers de tests individuels
└── 📘 README.md          # La doc que tu lis actuellement

    💡 Note de fin : Toutes les fonctions sont garanties Norme Epitech, sans fuite mémoire et gérant les pointeurs NULL.
