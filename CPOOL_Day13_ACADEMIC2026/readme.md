
# 🚀 CPool_Day13_$ACADEMICYEAR - CSFML Discovery 🌟

[![Unix & C Lab](https://img.shields.io/badge/Unix%20&%20C%20Lab-Seminar-brightgreen.svg)](https://42.fr)
[![CSFML](https://img.shields.io/badge/CSFML-Discovery-blue.svg)](https://www.sfml-dev.org/)
[![Language](https://img.shields.io/badge/Language-C-red.svg)](https://en.wikipedia.org/wiki/C_(programming_language))

> **Seminar B-CPE-100** - **Day 13** : Découverte de la programmation graphique en C avec CSFML ! 🎮✨

---

## 📋 Sommaire
- [🎯 Objectifs](#-objectifs)
- [🛠️ Installation CSFML](#️-installation-csfml)
- [📂 Structure du projet](#📂-structure-du-projet)
- [🚀 Tâches](#-tâches)
  - [Tâche 00 : Installation](#tâche-00--installation)
  - [Tâche 01 : Ouvrir une fenêtre](#tâche-01--ouvrir-une-fenetre)
  - [Tâche 02 : Afficher un pixel](#tâche-02--afficher-un-pixel)
  - [Tâche 03 : Dessiner un carré](#tâche-03--dessiner-un-carré)
  - [Tâche 04 : Afficher une image](#tâche-04--afficher-une-image)
- [📚 Documentation](#📚-documentation)
- [⚖️ Droits du repository](#️-droits-du-repository)

---

## 🎯 Objectifs

Découvrez la **programmation graphique en C** avec **CSFML** ! 🖥️🎨

- ✅ Ouvrir une fenêtre graphique
- ✅ Manipuler des pixels individuellement
- ✅ Créer une structure `framebuffer`
- ✅ Dessiner des formes simples (pixels, carrés)
- ✅ Charger et afficher des images BMP

**Repository rights** : ramassage-tek 🔒

---

## 🛠️ Installation CSFML {#installation-csfml}

### 📥 Étape 1 : Télécharger le script
```bash
wget https://campus.42.fr/path/to/build_csfml.sh
chmod +x build_csfml.sh
```

### 🔧 Étape 2 : Installation (root requis)
```bash
sudo ./build_csfml.sh
```

> **✅** Le script installe automatiquement toutes les bibliothèques CSFML nécessaires ! ✨

---

## 📂 Structure du projet

```
CPool_Day13_$ACADEMICYEAR/
├── main.c                 # 🎮 Programme principal
├── framebuffer.c          # 🖼️ Gestion du framebuffer
├── framebuffer.h          # 📋 Prototypes et structures
├── build_csfml.sh         # 🛠️ Script d'installation
└── README.md              # 📖 Ce fichier !
```

> **⚠️ IMPORTANT** : Ne gardez que les fichiers sources, **PAS** les binaires/objets/temp !

---

## 🚀 Tâches

### Tâche 00 : Installation ✅
> **Statut** : [x] **Terminé** 🟢

### Tâche 01 : Ouvrir une fenêtre 🪟 {#tache-01-ouvrir-une-fenetre}

**Objectif** : Créer une fenêtre 800x600 qui reste ouverte !

```c
sfRenderWindow* window = sfRenderWindow_create(
    sfVideoMode_getFullscreenModes(NULL)[0], 
    "CSFML Day13", 
    sfResize | sfClose, 
    NULL
);
```

**Résultat attendu** : Une belle fenêtre vide ! 😍

### Tâche 02 : Afficher un pixel 🔴 {#tache-02-afficher-un-pixel}

#### 1️⃣ Créer un tableau de pixels
```c
sfUint32 pixels[800 * 600];
```

#### 2️⃣ Structure `framebuffer_t`
```c
typedef struct s_framebuffer {
    sfUint32* pixels;
    unsigned int width;
    unsigned int height;
} framebuffer_t;
```

#### 3️⃣ Prototype `framebuffer_create`
```c
framebuffer_t* framebuffer_create(unsigned int width, unsigned int height);
```

#### 4️⃣ Fonction `put_pixel`
```c
void put_pixel(framebuffer_t* framebuffer, unsigned int x, unsigned int y, sfColor color);
```

**🎯 Pixels à afficher** :
- 🔴 (10, 10)
- 🔴 (100, 100) 
- 🔴 (250, 400)

### Tâche 03 : Dessiner un carré 🔵 {#tache-03-dessiner-un-carre}

**Prototype** :
```c
void draw_square(framebuffer_t* framebuffer, sfVector2u position, 
                 unsigned int size, sfColor color);
```

**Objectif** : Carré bleu 10x10 pixels à la position (100, 100) ! 📦

### Tâche 04 : Afficher une image 🖼️ {#tache-04-afficher-une-image}

**Mission** : Charger et afficher une image **BMP** dans votre fenêtre !

> **💡 BMP** = Format simple et parfait pour débuter avec CSFML ! 🎉

---

## 📚 Documentation

| Fonction clé | Description |
|-------------|-------------|
| `sfRenderWindow_create()` | 🪟 Créer une fenêtre |
| `sfTexture_create()` | 🖼️ Créer une texture |
| `sfSprite_create()` | 🎨 Créer un sprite |
| `sfVector2u` | 📍 Position (x, y) |

**Headers CSFML** :
```c
#include <CSFML/Graphics.h>
#include <CSFML/Window.h>
#include <CSFML/System.h>
```

---

## ⚖️ Droits du repository

```
Repository rights: ramassage-tek
```

> **🚫** Pas de fichiers inutiles (binaires, .o, temporaires) ! 📂

---

## 🎉 Compilateur & Exécution

```bash
gcc -Wall -Wextra -Werror *.c -lcsfml-graphics -lcsfml-window -lcsfml-system -o day13
./day13
```

