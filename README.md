<img src="utils/1.png" width= 100%>

---

## Exercice 00 - Polymorphisme

L'exercice 00 consiste à introduire les concepts de base du polymorphisme en C++ à travers une hiérarchie de classes d'animaux, y compris une mise en œuvre délibérément erronée pour illustrer les effets du polymorphisme incorrect.

### Mon implémentation

[Lien ici](https://github.com/aceyzz/CPP04/tree/main/ex00)

#### Classe de base `Animal`
- **Attribut protégé** : `std::string type;` permettant de définir le type d'animal.
- **Méthode** : `makeSound()` affiche un son non spécifique, illustrant le comportement par défaut.

#### Classes dérivées `Dog` et `Cat`
- Héritent de `Animal` et initialisent `type` à "Dog" et "Cat" respectivement.
- **Méthode** : `makeSound()` surchargée pour afficher des sons spécifiques à chaque animal.

#### Classes `WrongAnimal` et `WrongCat`
- Servent à illustrer une mauvaise pratique du polymorphisme.
- `WrongCat` affiche par erreur le son de `WrongAnimal` lorsque le polymorphisme est mal utilisé.

#### Utilisation
- Le fichier `main.cpp` démontre la différence entre les comportements attendus des classes correctement implémentées (`Animal`, `Dog`, `Cat`) et ceux résultant de l'implémentation erronée (`WrongAnimal`, `WrongCat`).
- Les constructeurs et les destructeurs de chaque classe affichent des messages uniques, permettant de suivre le cycle de vie des objets.

### Conclusion

Cet exercice illustre l'importance du polymorphisme en C++ et montre comment une conception soignée des classes et de l'héritage permet d'obtenir des comportements dynamiques attendus. Il met également en évidence les pièges potentiels du polymorphisme lorsqu'il est mal utilisé.

<br>

## Exercice 01 - Je ne veux pas brûler le monde

L'exercice 01 continue sur le thème du polymorphisme, introduisant la composition avec la classe `Brain` représentant l'intelligence des animaux.

### Mon implémentation

[Lien ici](https://github.com/aceyzz/CPP04/tree/main/ex01)

#### Classe `Brain`
- Contient un tableau de 100 `std::string` pour représenter les idées d'un cerveau.
- Fournit des méthodes pour accéder et modifier ces idées, permettant une gestion détaillée de l'état interne du cerveau.

#### Modifications dans `Dog` et `Cat`
- Chaque `Dog` et `Cat` possède maintenant un pointeur vers un `Brain`, initialisé lors de la construction et détruit lors de la destruction.
- La copie d'un `Dog` ou d'un `Cat` entraîne une copie profonde du `Brain`, assurant l'indépendance des états mentaux entre les instances.

#### Fonctionnement
- Le `main.cpp` démontre la création, la manipulation, et la destruction d'objets `Animal`, `Dog`, et `Cat`, avec une attention particulière à la gestion de la mémoire et au polymorphisme.
- Les tests incluent la vérification du comportement de copie profonde pour les classes `Dog` et `Cat`, s'assurant que les cerveaux sont correctement clonés.

### Conclusion

Cet exercice approfondit la compréhension du polymorphisme et de la composition en C++, mettant en évidence les défis liés à la gestion de la mémoire et à l'indépendance des états entre les instances. La mise en œuvre de la copie profonde est essentielle pour maintenir l'intégrité de l'état interne lors de la copie d'objets complexes.

<br>

## Exercice 02 - Classe abstraite

L'exercice 02 transforme la classe `Animal` en une classe abstraite pour éviter son instanciation directe, renforçant le concept de polymorphisme en C++.

### Mon implémentation

[Lien ici](https://github.com/aceyzz/CPP04/tree/main/ex02)

#### Modifications clés
- La fonction `makeSound()` dans la classe `Animal` est désormais purement virtuelle (`= 0`), ce qui rend `Animal` abstraite et non instanciable directement.
- Les classes `Dog` et `Cat` implémentent leur propre version de `makeSound()`, permettant de conserver un comportement spécifique à chaque animal.

#### Classe `Brain`
- La gestion du cerveau (`Brain`) reste inchangée, chaque `Dog` et `Cat` possédant son propre `Brain` pour stocker ses idées.

#### Tests
- Le fichier `main.cpp` démontre la création et la manipulation d'objets `Dog` et `Cat` à travers des pointeurs de type `Animal`, suivant le principe du polymorphisme.
- Des tests supplémentaires vérifient la copie profonde des objets `Dog` et `Cat`, s'assurant que le clonage est effectué correctement pour `Brain`.

### Conclusion

Cet exercice illustre l'importance des classes abstraites dans la conception de hiérarchies d'objets et renforce le concept de polymorphisme. En empêchant l'instanciation directe de `Animal`, on garantit que seuls les objets bien définis avec un comportement spécifique peuvent être créés, évitant ainsi les erreurs potentielles et renforçant la robustesse du code.

<br>

## Exercice 03 - Interface & Récap (Bonus)

L'exercice 03 du module C++ sur le polymorphisme par sous-typage, les classes abstraites, et les interfaces demande d'implémenter un système de gestion de materias inspiré de jeux comme Final Fantasy. Voici un résumé des exigences et concepts clés à maîtriser pour cet exercice.

#### Objectifs Principaux:

1. **AMateria Classe de Base Purement Abstraite:**
   - `AMateria` sert de classe de base pour les types de materias spécifiques comme `Ice` et `Cure`.
   - Elle doit contenir au moins une méthode purement virtuelle `clone()` qui force les classes dérivées à implémenter un mécanisme de clonage.

2. **Implémentation des Materias Spécifiques:**
   - Les classes `Ice` et `Cure` doivent être concrètes et hériter de `AMateria`.
   - Elles implémentent la méthode `clone()` retournant une nouvelle instance du même type.
   - La méthode `use()` doit afficher un message spécifique à chaque type de materia en agissant sur un personnage cible.

3. **La Classe Character:**
   - Implémente l'interface `ICharacter`.
   - Gère un inventaire de jusqu'à 4 `AMateria` objets.
   - Fournit des mécanismes pour équiper, déséquiper (sans supprimer), et utiliser les materias sur des cibles.
   - La copie d'un `Character` est profonde, incluant des copies profondes de toutes les materias équipées.

4. **Gestion de MateriaSource:**
   - La classe `MateriaSource` implémente l'interface `IMateriaSource`.
   - Peut apprendre jusqu'à 4 types de materias, permettant de créer de nouvelles instances de ces materias par le nom.
   
5. **Principes de Conception:**
   - Utilisation du polymorphisme pour gérer divers types de materias à travers un type de base commun.
   - Démonstration du concept d'interface en C++ via des classes purement abstraites.
   - Gestion appropriée de la mémoire, notamment lors de la copie profonde et de la suppression d'objets pour éviter les fuites de mémoire.

#### Exemple d'Exécution:

Le code principal montre comment créer des sources de materias, apprendre de nouvelles materias, les créer par nom, les équiper sur des personnages, et les utiliser. Il illustre l'interaction entre différents composants du système de materias et met en évidence l'utilisation du polymorphisme et des interfaces pour construire un cadre extensible pour les objets de jeu.

#### Conclusion:

Cet exercice avancé combine plusieurs concepts clés de la programmation orientée objet en C++ pour construire un système complexe mais flexible de gestion des materias, en mettant l'accent sur la conception d'interface, le polymorphisme, et la gestion correcte de la mémoire.

### REMARQUE
> Mon implémentation pour cet exercice avec des leaks de mémoires dans certains tests spécifiques. Je revendrais très certainement dessus prochainement. Le code est disponible sur l'un des commits pour les plus curieux.

