# 📚 Libft

**Libft** est un projet de l'école 42 visant à recréer certaines fonctions essentielles de la bibliothèque standard en C et à développer une compréhension approfondie des bases du langage C, de la gestion de la mémoire, et des bonnes pratiques en programmation.

## 📑 Sommaire
- [📘 Description](#description)
- [⚙️ Fonctionnalités](#fonctionnalités)
- [📂 Structure du projet](#structure-du-projet)
- [💻 Compilation et Utilisation](#compilation-et-utilisation)
- [📋 Aperçu des Fonctions](#aperçu-des-fonctions)
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
- `ft_bzero` - Met à zéro les octets d’une zone mémoire.
- `ft_memcpy` - Copie une zone mémoire vers une autre.
- `ft_memmove` - Copie une zone mémoire vers une autre, même si elles se chevauchent.
- `ft_memchr` - Recherche la première occurrence d’un caractère dans une zone mémoire.
- `ft_memcmp` - Compare deux zones mémoires.
- `ft_strlen` - Calcule la longueur d'une chaîne de caractères.
- `ft_strlcpy` - Copie une chaîne avec une taille maximale spécifiée.
- `ft_strlcat` - Concatène deux chaînes avec une taille maximale spécifiée.
- `ft_strchr` - Trouve la première occurrence d'un caractère dans une chaîne.
- `ft_strrchr` - Trouve la dernière occurrence d'un caractère dans une chaîne.
- `ft_strncmp` - Compare les premiers n caractères de deux chaînes.
- `ft_strnstr` - Localise une sous-chaîne dans une chaîne, jusqu’à une longueur maximale.
- `ft_atoi` - Convertit une chaîne de caractères en un entier.
- `ft_isalpha` - Vérifie si un caractère est alphabétique.
- `ft_isdigit` - Vérifie si un caractère est un chiffre.
- `ft_isalnum` - Vérifie si un caractère est alphanumérique.
- `ft_isascii` - Vérifie si un caractère appartient au code ASCII.
- `ft_isprint` - Vérifie si un caractère est imprimable.
- `ft_toupper` - Convertit un caractère en majuscule.
- `ft_tolower` - Convertit un caractère en minuscule.

### 🔹 Fonctions supplémentaires

- `ft_substr` - Extrait une sous-chaîne d'une chaîne de caractères.
- `ft_strjoin` - Concatène deux chaînes en une nouvelle.
- `ft_strtrim` - Supprime les caractères spécifiques du début et de la fin d'une chaîne.
- `ft_split` - Sépare une chaîne en sous-chaînes selon un délimiteur donné.
- `ft_itoa` - Convertit un entier en une chaîne de caractères.
- `ft_strmapi` - Applique une fonction à chaque caractère d’une chaîne, en créant une nouvelle chaîne.
- `ft_striteri` - Applique une fonction à chaque caractère d’une chaîne, directement sur la chaîne d’origine.
- `ft_putchar_fd` - Écrit un caractère dans un descripteur de fichier donné.
- `ft_putstr_fd` - Écrit une chaîne de caractères dans un descripteur de fichier donné.
- `ft_putendl_fd` - Écrit une chaîne suivie d'un saut de ligne dans un descripteur de fichier donné.
- `ft_putnbr_fd` - Écrit un nombre dans un descripteur de fichier donné.

### 🔹 Fonctions bonus

- `ft_lstnew` - Crée un nouvel élément de liste chaînée.
- `ft_lstadd_front` - Ajoute un nouvel élément au début de la liste.
- `ft_lstsize` - Calcule le nombre d'éléments dans une liste chaînée.
- `ft_lstlast` - Renvoie le dernier élément de la liste.
- `ft_lstadd_back` - Ajoute un nouvel élément à la fin de la liste.
- `ft_lstdelone` - Libère un élément de la liste.
- `ft_lstclear` - Libère tous les éléments de la liste.
- `ft_lstiter` - Applique une fonction à chaque élément de la liste.
- `ft_lstmap` - Crée une nouvelle liste en appliquant une fonction à chaque élément de la liste.


## 🔗 Ressources

Voici quelques ressources utiles pour approfondir vos connaissances :

- [📘 Manuel C standard](https://man7.org/linux/man-pages/dir_section_3.html) - Documentation complète des fonctions standard du langage C
- [📚 Documentation officielle de l'école 42](https://projects.intra.42.fr) - Guide et ressources pour les projets de l'école 42 (accès restreint aux étudiants)
- [📖 Tutoriels C de Learn-C.org](https://www.learn-c.org/) - Tutoriels interactifs pour renforcer vos bases en C
- [📜 Stack Overflow - C Programming](https://stackoverflow.com/questions/tagged/c) - Forum pour poser des questions et trouver des solutions à vos problèmes en C

