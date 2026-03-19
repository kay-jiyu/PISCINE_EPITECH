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

