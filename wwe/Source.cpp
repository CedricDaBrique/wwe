#include <iostream>
#include <fstream>
#include <map>

int main()
{
    //On place le fichier texte  dans une map
    std::ifstream ifs("message.txt");
    char s;
    std::map<char, int> map;

    //Tant que le fichier n'est pas entièrement lu on ajoute une string a la map
    while (ifs >> s)
        ++map[s];

    typedef std::map<char, int>::const_iterator iter; //On associe la liste sur une itération
    for (iter it = map.begin(); it != map.end(); ++it) 
        //on affiche les occurences 
        std::cout << "le nombre d'occurence du mot " << it->first << " est " << it->second << std::endl;

    return 0;
}