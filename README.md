 # # Le jour de la serviette 

 origine : PyDefis.com 
 # Description 
 Ce programme C++ cherche tous les triplets d'entiers positifs inférieurs à 1000 tels que :
 la somme et le produit des trois nombres ne contiennent que les chiffres 2 et 4,
 et parmi ces triplets, on sélectionne celui dont les trois nombres comportent le plus de chiffres "4".

Exemple donné :
(18, 74, 332) → somme = 424, produit = 442224

Le problème est inspiré du Jour de la Serviette (25 mai), en hommage à Douglas Adams
Le projet est écrit en C++, avec une approche brute-force reposant sur trois boucles imbriquées pour tester tous les triplets possibles.
Une fonction verifierCaractere() (version courte et concise fournie par ChatGPT) vérifie si une valeur numérique ne contient que des chiffres 2 et 4.
# Remarques 
-Complexité : O(n³).
-Fonctionne correctement pour n < 100.
-Pour n = 1000, l’exécution devient lente, mais correcte.
-Toute optimisation algorithmique est la bienvenue ! 🚀

 # Installation 
```
git clone
```
# compiler 
```
g++ main.cpp -o main
./main
```



 
