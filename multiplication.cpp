

#include <iostream>
int main()
{
    int a = 0, b = 0, s = 0, i = 1;
    std::cout << "Entrez les valeurs que vous voulez multiplier de manière successive" <<std::endl;
    std::cin >> a >> b;
    std::cin.ignore();
    
    // on s'occupe rapidement du cas a = 0
    if (a == 0)
    {
        std::cout << 0 << std::endl;
        std::cin.ignore();
        return 0;
    }
    // ici on verifie si a est négatif
    bool neg = false;
    if(a<0)
    {
        a = -a;
        neg = true;
    }

    //on va maintenant ajouter s à lui-même jusqu'à avoir un nombre de b égale à la puissance de 2 inférieure à a
    s = b;
    // ici i est le compteur de b qu'on a déjà ajouté, et donc le condition de la boucle vérifie qu'à la prochaine itération on ne dépasse pas a
    while(a-i-i>=0)
    {
        i = i + i;
        s = s + s;
    }

    // on ajoute enfin le nombre d'itération qu'il manque pour arriver à a
    for( int k = 0; k < a-i; ++i)
    {
        s = s + b;
    }


    //et on finit par afficher le résultat de la multiplication en faisant attention au cas où a est négatif
    if(neg)
    {
        std::cout << -s <<std::endl;

    }
    else
    {
        std::cout << s << std::endl;
    }
    std::cin.ignore();
    return 0;
}