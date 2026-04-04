
# 🏊‍♂️ Piscine EPITECH 2026 - C Pool COMPLÈTE (Debian 13) 🚀

[![Epitech](https://img.shields.io/badge/Epitech-Piscine%202026-orange.svg)](https://www.epitech.eu/)
[![Langage](https://img.shields.io/badge/Langage-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Unix Lab](https://img.shields.io/badge/B1-Unix%20&%20C%20Lab-brightgreen.svg)](https://epitech.eu/)
[![CSFML](https://img.shields.io/badge/Graphics-CSFML-purple.svg)](https://www.sfml-dev.org/)
[![Norme](https://img.shields.io/badge/Norme-Epitech%20Coding%20Style-yellow.svg)](https://github.com/epitech/epitech-norminette)

> **B1 - Unix and C Lab Seminar** | **Ramassage-tek** 🔐 | **2026 Edition** ✨
## Ce dépôt regroupe mes premiers exercices en C sur Debian 13.
Du "Hello World" aux fonctions avancées, avec tests pratiques et environnement web local.
---

## 🎯 PRESENTATION GÉNÉRALE

**Immersion 5+ semaines** en **C pur + Unix + Graphismes** ! 🏊‍♂️💻🎮

---

## 📋 SPÉCIFICATIONS GLOBALES

| Critère | Détails |
|---------|---------|
| **🟦 Langage** | C (ANSI C99) |
| **📏 Norme** | Epitech Coding Style |
| **🔐 Droits** | `ramassage-tek` |
| **🚫 Interdit** | Binaires, `.o`, `main()` dans sources |
| **✅ Graphismes** | CSFML (Day13+) |

---

## 🏗️ ARCHITECTURE

```
Piscine_2026/
├── lib/my/                 # 📚 libmy.a (Day01-09)
├── include/my.h            # 📋 Prototypes
├── CSFML/                  # 🎮 Day13+ Graphismes
│   ├── framebuffer.c
│   └── day13.c
├── Makefile
└── README.md
```

---

## 📂 TABLEAU COMPLET - TOUS LES JOURS ! 🔥

| **Jour** | **Thème** | **Fichiers clés** | **Étoiles** | **Compétences** |
|----------|-----------|-------------------|-------------|-----------------|
| **Day01** | Bases C | `my_putchar.c` | ⭐⭐⭐⭐⭐ | Conditions |
| **Day02** | Nombres | `my_isneg.c` | ⭐⭐⭐⭐⭐ | Boucles |
| **Day03** | Pointeurs | `my_strcmp.c` | ⭐⭐⭐⭐ | Algos |
| **Day04** | Bases | `my_putnbr_base.c` | ⭐⭐⭐⭐⭐ | Conversion |
| **Day05** | Strings | `my_strcat.c` | ⭐⭐⭐⭐ | Manipulation |
| **Day06** | Malloc | `my_strdup.c` | ⭐⭐⭐⭐⭐ | Mémoire |
| **Day07** | Listes | `my_list_size.c` | ⭐⭐⭐⭐⭐ | Structures |
| **Day08** | Exercices | `my_apply_on_list.c` | ⭐⭐⭐ | Optimisation |
| **Day09** | **BistroMatic** | `evalexpr.c` | ⭐⭐⭐⭐⭐⭐ | Projet final |
| **Day10** | Avancé | `my_revstr.c` | ⭐⭐⭐⭐ | Strings pro |
| **Day11** | Listes++ | `my_sort_list.c` | ⭐⭐⭐⭐⭐ | Algos listes |
| **Day12** | Prep GFX | `my_put_pixel.c` | ⭐⭐⭐⭐ | Proto graph |
| **Day13** | **CSFML** | `framebuffer.c` | ⭐⭐⭐⭐⭐⭐ | **🎮 Graphismes** |
| **Day13** | Fenêtre | `sfRenderWindow` | ⭐⭐⭐⭐ | GUI 800x600 |
| **Day13** | Pixels | `put_pixel()` | ⭐⭐⭐⭐⭐ | Manipulation |
| **Day13** | Carré | `draw_square()` | ⭐⭐⭐⭐⭐ | Formes |
| **Day13** | Image BMP | `sfImage_loadFromFile` | ⭐⭐⭐⭐⭐⭐ | **Textures** |

---

## 🎮 DAY13 CSFML - GRAPHISMES ! 🖥️✨

### 📥 Installation
```bash
sudo ./build_csfml.sh
```

### 🏗️ Structure framebuffer
```c
typedef struct s_framebuffer {
    sfUint32* pixels;
    unsigned int width;
    unsigned int height;
} framebuffer_t;
```

### 🔧 Prototypes Day13
```c
framebuffer_t* framebuffer_create(unsigned int width, unsigned int height);
void put_pixel(framebuffer_t* fb, unsigned int x, unsigned int y, sfColor color);
void draw_square(framebuffer_t* fb, sfVector2u pos, unsigned int size, sfColor color);
```

**Défis Day13 :**
- ✅ Fenêtre **800x600**
- ✅ Pixels rouges : (10,10), (100,100), (250,400) 🔴
- ✅ Carré bleu 10x10 à (100,100) 🔵
- ✅ Image **BMP** chargée ! 🖼️

---

## 🔧 MAKEFILE AVANCÉ (CSFML)

```makefile
# Piscine classique
make

# Mode CSFML Day13+
make csfml

# Flags CSFML
CFLAGS += -lcsfml-graphics -lcsfml-window -lcsfml-system
```

---

## 🧪 COMPILATION COMPLÈTE

```bash
# Libmy classique
make && make clean

# Day13 CSFML
gcc -Wall -Wextra -Werror day13/*.c lib/my/*.c -lcsfml-graphics -lcsfml-window -lcsfml-system -o day13

# Norminette partout !
norminette **/*.c **/*.h
```

---

## 🎨 NORME EPITECH + CSFML

```c
// ✅ PARFAIT pour Day13
void    put_pixel(framebuffer_t *framebuffer, unsigned int x, 
                  unsigned int y, sfColor color)
{
    if (x >= framebuffer->width || y >= framebuffer->height)
        return;
    framebuffer->pixels[y * framebuffer->width + x] = 
        sfColor_toInteger(color);
}
```

---

## 🏆 ROADMAP COMPLÈTE

```
Week1: Bases C → Day01-05 ✅
Week2: Malloc/Listes → Day06-09 ✅
Week3: BistroMatic → Day09 🏆
Week4: Avancé + Prep GFX → Day10-12 ✅
Week5: CSFML Graphismes → Day13 🎮
```

---

## 🚀 CONSEILS ULTIME

1. **📱 Norminette = ami**
2. **🧪 Testez les bordures** (x=0, y=0, x=max)  
3. **🎨 CSFML : Texture → Sprite → RenderWindow**
4. **💾 Git push régulier** (ramassage-tek !)
5. **😴 6h sommeil minimum**

---

## 🥇 RÉSULTAT FINAL

```
✅ Piscine CPool 100% Grade A
✅ Libmy complète & optimisée
✅ CSFML Day13: Pixels + Carré + BMP
✅ Norme 100% conforme
✅ Prêt pour C++/Projets réels ! 🎉
```

**🏊‍♂️ → 🦸‍♂️ Aquaman C + Graphiste CSFML certifié !**

---

**Piscine 2026 Conquise !** 🔥 | **Epitech Legend** 🌟
```
