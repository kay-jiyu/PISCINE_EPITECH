# 🟦 CPOOL Day 07 - Epitech 2026

![C Language](https://img.shields.io/badge/Language-C-blue.svg)
![Build Status](https://img.shields.io/badge/Build-Passing-brightgreen.svg)
![Epitech](https://img.shields.io/badge/School-Epitech-blue)

---

## 📖 Sommaire

* **Task 01** : Création de la `libmy.a`
* **Task 02** : Création du script `my_build_lib.sh`
* **Task 03** : Création du `Makefile`
* **Task 04** : `my_revstr.c` (tests unitaires)
* **Task 05** : `my_strstr.c` (tests unitaires)
* **Task 06** : `my_sort_params.c` (tri alphabétique)

---

## 🛠️ Installation et Compilation

> **Où tu es :** À la racine du dépôt `CPOOL_Day07_ACADEMIC2026/`

1.  **Compiler la bibliothèque :**
    ```bash
    cd lib/my/
    make
    ```

2.  **Compiler les tâches :**
    ```bash
    gcc -o my_sort_params task06/my_sort_params.c -L./lib -lmy -I./include
    ```

---

## 🧪 Tests Unitaires

Utilisation de **Criterion** pour valider les fonctions :

* ✅ **my_strlen** : Calcul précis de la taille de chaîne.
* ✅ **my_revstr** : Inversion correcte en mémoire.
* ✅ **my_sort_params** : Tri ASCII respecté.

---

## 📁 Structure du Dépôt

```text
.
├── include/           # Headers (.h)
├── lib/               # Bibliothèque statique
│   └── my/            # Sources de la lib + Makefile
├── task04/            # Fichiers de la tâche 04
├── task05/            # Fichiers de la tâche 05
├── task06/            # Fichiers de la tâche 06
└── tests/             # Dossier des unit_tests
