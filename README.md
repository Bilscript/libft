# 📚 Libft

**Libft** est un projet de l'école 42 visant à recréer certaines fonctions essentielles de la bibliothèque standard en C et à développer une compréhension approfondie des bases du langage C, de la gestion de la mémoire, et des bonnes pratiques en programmation.

## 📑 Sommaire
- [📘 Description](#description)
- [⚙️ Fonctionnalités](#fonctionnalités)
- [📂 Structure du projet](#structure-du-projet)
- [💻 Compilation et Utilisation](#compilation-et-utilisation)
- [📋 Aperçu des Fonctions](#aperçu-des-fonctions)
- [📝 Exemples](#exemples)
- [🔗 Ressources](#ressources)

---

## 📘 Description

Le projet **Libft** consiste à implémenter plusieurs fonctions de la bibliothèque standard du C, ainsi que des fonctions utilitaires supplémentaires pour manipuler des chaînes, des listes, et des mémoires. Une fois complétée, cette bibliothèque pourra être utilisée dans de nombreux autres projets.

## ⚙️ Fonctionnalités

- 🔧 Recréation de fonctions classiques de la bibliothèque C (`memset`, `strlen`, `strcpy`, etc.)
- 🧵 Fonctions de manipulation de chaînes et de mémoire
- 📜 Fonctions utilitaires pour faciliter la gestion de listes chaînées
- 📚 Utilisation de la bibliothèque dans des projets futurs de l'école 42

## 📂 Structure du projet

Le projet est structuré en plusieurs parties :

1. **Partie 1** - Recréation de fonctions classiques de la bibliothèque C.
2. **Partie 2** - Fonctions supplémentaires pour la manipulation de chaînes et de mémoire.
3. **Partie Bonus** - Fonctions pour manipuler des listes chaînées.

## 💻 Compilation et Utilisation

Pour compiler la bibliothèque, utilisez la commande suivante dans le répertoire du projet :

```bash
make
```
## 📋 Aperçu des Fonctions

Voici un aperçu des fonctions implémentées dans **Libft** :

### 🔹 Fonctions de la bibliothèque standard

- `ft_memset` - Remplit une zone mémoire avec une valeur spécifiée.
- `ft_strlen` - Calcule la longueur d'une chaîne de caractères.
- `ft_strcpy` - Copie une chaîne de caractères.
- `ft_strdup` - Duplique une chaîne de caractères.
- (Ajoutez les autres fonctions que vous avez implémentées...)

### 🔹 Fonctions supplémentaires

- `ft_substr` - Extrait une sous-chaîne à partir d'une chaîne de caractères.
- `ft_strjoin` - Concatène deux chaînes.
- `ft_split` - Sépare une chaîne en sous-chaînes suivant un délimiteur donné.
- (Ajoutez les autres fonctions que vous avez implémentées...)

### 🔹 Fonctions bonus (si réalisées)

- `ft_lstnew` - Crée un nouvel élément de liste.
- `ft_lstadd_front` - Ajoute un nouvel élément au début de la liste.
- `ft_lstiter` - Applique une fonction à chaque élément de la liste.
- (Ajoutez les autres fonctions de listes que vous avez implémentées...)

## 📝 Exemples

Voici un exemple simple d’utilisation de **Libft** :

```c
#include "libft.h"

int main(void)
{
    char *str = "Hello, 42!";
    char *duplicate = ft_strdup(str);

    printf("Original : %s\n", str);
    printf("Dupliqué : %s\n", duplicate);

    free(duplicate);
    return 0;
}
```
## 🔗 Ressources

Voici quelques ressources utiles pour approfondir vos connaissances :

- [📘 Manuel C standard](https://man7.org/linux/man-pages/dir_section_3.html) - Documentation complète des fonctions standard du langage C
- [📚 Documentation officielle de l'école 42](https://projects.intra.42.fr) - Guide et ressources pour les projets de l'école 42 (accès restreint aux étudiants)
- [📖 Tutoriels C de Learn-C.org](https://www.learn-c.org/) - Tutoriels interactifs pour renforcer vos bases en C
- [📜 Stack Overflow - C Programming](https://stackoverflow.com/questions/tagged/c) - Forum pour poser des questions et trouver des solutions à vos problèmes en C

