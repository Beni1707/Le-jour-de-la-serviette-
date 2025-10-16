// Jeux de la serviette  
#include <iostream> 
#include <string> 
#include <vector>
#include<map> 
using namespace std ;

// fonction qui transforme le resultat en string et qui verifie les caraceteres 
// Cette version courte et concise de la focntion verifierCaractere m'a ete fourni par ChatGPT
bool verifierCarctere(int x) 
{
    string chaine = to_string(x);
    bool contient2 = false; 
    bool contient4 = false;

    for (char c : chaine) // on parcourt chaque carcatere de la chaine 
     {
        if (c == '2')
            contient2 = true;// on met contient a true si on trouve 2 
        else if (c == '4')
            contient4 = true; // on met contient a true si on trouve 4
        else
            return false; // contient un autre chiffre → invalide
    }

    // Doit contenir au moins un '2' et un '4'
    return (contient2 && contient4);
}

// Entree dans la fonction main 
int main ()
{
    // declaration de la map 
     map<int, pair<int,int>> maMap;// ce dans cette map qu'on va stocker toutes les valeurs vraies 
    int somme =0;
    int produit=1;

    // boucle qui parcourt de 0 a 990
    for ( int i=1; i <100; i++)
        {
            //Dans la boucle on a pour le cas 1 par exemple , doit verifier avec chaque nombre aussi 
            for ( int j=1; j<100; j++)
            {
                // il va verifier l'addition et la soustracion dans tous les cas de pour j 
                for ( int h = 1; h<100; h++)
                {
                    // il va faire la verification pour chaque cas 
                    
                    somme= i+j+h; // on fait l'addition 
                    produit= i*j*h; // on fait la multiplication 

                    verifierCarctere(somme);
                    verifierCarctere(produit);

                    if (verifierCarctere(somme)== true && verifierCarctere(produit)==true) // On va verifier si le nombre contiennent que 2 et 4 
                    {
                        maMap[i]=make_pair(j,h); //  on stocke les valeurs vraies 
                    }

                    

                }
            }
        }

        //Affichage des nombres 
        for (auto it = maMap.begin(); it != maMap.end(); it++)
        {
            cout<< it->first<<" "<< it->second.first<<" "<<it->second.second<<endl;
        }

}