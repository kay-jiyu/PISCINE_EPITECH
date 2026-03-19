# Piscine EPITECH 2026 🏊‍♂️

## 📝 Présentation
Projet réalisé dans le cadre du **B1 - Unix and C Lab Seminar**. La Piscine est une période intensive d'apprentissage du langage C et des fondamentaux du système Unix.

---

## 🛠️ Spécifications Globales
* **Langage :** C 🟦
* **Norme :** Epitech Coding Style ✨
* **Gestionnaire de version :** Git 📂
* **Droits d'accès :** `ramassage-tek` 🔐

---

## ⚠️ Règles de Rendu
* **Zéro fichiers inutiles :** Pas de binaires, de fichiers objets (`.o`) ou de fichiers temporaires. 🧹
* **Pas de `main` :** Seules les fonctions demandées sont pushées, le test se fait avec un `main` externe. 🛑
* **Fonctions autorisées :** Utilisation stricte des fonctions autorisées par le sujet (ex: `my_putchar`).
* **Compilation :** Tout fichier doit compiler avec `*.c`. Une erreur empêchant la compilation entraîne un **0** immédiat. ⚙️

---
# 🚀 Epitech C Pool - Configuration

### 📦 Bibliothèque & Headers
* **include/** 📂 : Contient le fichier `my.h`. Ce header regroupe tous les prototypes de la bibliothèque.
* **lib/my/** 📚 : Contient les sources (`.c`) de la **libmy**.
* **Inclusion** 💡 : Chaque fichier source utilise `#include "my.h"` pour accéder aux fonctions.

---

### 🛠️ Gestion du Makefile
Le **Makefile** à la racine automatise la compilation :

* **make** 🔨 : Compile la bibliothèque `libmy.a` puis l'exécutable.
* **make clean** 🧹 : Supprime les fichiers objets (`.o`).
* **make fclean** 🗑️ : Supprime les objets, la bibliothèque et l'exécutable.
* **make re** 🔄 : Relance une compilation complète.

---

## 📂 Organisation du Dépôt
Chaque jour de la piscine est organisé par dépôts spécifiques (ex: `CPool_Day03_2026`) contenant :
* Les dossiers par **Task**.
* Un fichier **.gitignore** pour garder le repo propre.
* Le code source rigoureusement formaté.

---

## 🚀 Objectifs
Apprendre l'autonomie, la rigueur algorithmique et maîtriser la gestion mémoire et les pointeurs sans utiliser de fonctions de la bibliothèque standard (sauf autorisation).
