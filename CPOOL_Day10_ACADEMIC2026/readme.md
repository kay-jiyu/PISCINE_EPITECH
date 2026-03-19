🚀 EPITECH - C Pool Day 10
🛠 Task 05 : My Advanced Do-Op
📝 Description
Ce projet est une version évoluée du do-op. L'objectif est de réaliser des opérations arithmétiques simples en utilisant un tableau de structures contenant des pointeurs sur fonctions.
> Règle d'or : Interdiction d'utiliser des if, else if ou switch pour comparer les opérateurs ! 🚫
> 
📂 Structure du Projet
.
├── include/
│   ├── my.h           # Prototypes de la libmy
│   └── my_opp.h       # Structure et tableau de pointeurs sur fonctions
├── lib/
│   └── libmy.a        # Ta bibliothèque compilée
└── my_advanced_do_op/
    ├── Makefile       # Compilation automatique
    ├── main.c         # Moteur de recherche d'opérateur
    └── operations.c   # Fonctions de calcul (+, -, *, /, %, usage)

⚙️ Installation & Compilation
Pour compiler le projet, place-toi dans le dossier my_advanced_do_op/ et lance :
make

Cela génère un binaire nommé my_advanced_do-op.
🎮 Utilisation
Le programme prend 3 arguments : valeur1, opérateur, valeur2.
./my_advanced_do-op 42 "+" 1
# Retour : 43

./my_advanced_do-op 5 "*" 5
# Retour : 25

./my_advanced_do-op 10 "/" 0
# Retour : Stop: division by zero

🛠 Fonctionnement Interne
Le programme parcourt le tableau MY_OPP défini dans my_opp.h.
 * Recherche : Il compare l'argument 2 avec chaque .opp du tableau.
 * Appel : S'il y a correspondance, il exécute la fonction associée .f.
 * Erreur : Si l'opérateur est inconnu, il appelle la fonction de usage.
⚠️ Cas Particuliers
 * 💀 Division par 0 : Affiche Stop: division by zero et retourne 0.
 * 🔢 Modulo par 0 : Affiche Stop: modulo by zero et retourne 0.
 * ❓ Opérateur inconnu : Affiche un message d'erreur via my_usage.
 * 🚫 Arguments invalides : Le programme retourne 84.

