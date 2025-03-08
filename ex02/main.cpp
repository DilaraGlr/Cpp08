#include "MutantStack.hpp"
#include <iostream>
#include <list>

int	main(void)
{
	std::cout << "Subject’s tests" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "--------List tests-----------" << std::endl;
	std::list<int> mstack2;
	mstack2.push_back(5);
	mstack2.push_back(17);
	std::cout << mstack2.back() << std::endl;
	mstack2.pop_back();
	std::cout << mstack2.size() << std::endl;
	mstack2.push_back(3);
	mstack2.push_back(5);
	mstack2.push_back(737);
	mstack2.push_back(0);
	std::list<int>::iterator it2 = mstack2.begin();
	std::list<int>::iterator ite2 = mstack2.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}

	std::cout << "-------- Empty stack tests --------" << std::endl;
	MutantStack<int> emptyStack;

	// Vérification si la pile est vide avant d'appeler `top()`
	if (!emptyStack.empty()) 
	{
		std::cout << emptyStack.top() << std::endl;
	} 
	else 
	{
		std::cout << "Stack is empty, cannot access top." << std::endl;
	}

	// Vérification si la pile est vide avant d'appeler `pop()`
	if (!emptyStack.empty()) 
	{
		emptyStack.pop();
		std::cout << "Pop operation successful." << std::endl;
	} 
	else 
	{
		std::cout << "Stack is empty, cannot pop." << std::endl;
	}

	return (0);
}




/*// Affiche un titre pour indiquer que ce sont les tests du sujet
std::cout << "Subject’s tests" << std::endl;

// Crée un objet MutantStack d'entiers
MutantStack<int> mstack;

// Ajoute l'élément 5 à la pile
mstack.push(5);

// Ajoute l'élément 17 à la pile
mstack.push(17);

// Affiche l'élément au sommet de la pile (ici 17)
std::cout << mstack.top() << std::endl;

// Retire l'élément du sommet de la pile (ici 17)
mstack.pop();

// Affiche la taille de la pile après le retrait (il ne reste plus que 1 élément, 5)
std::cout << mstack.size() << std::endl;

// Ajoute plusieurs éléments à la pile
mstack.push(3);   // Pile : [5, 3]
mstack.push(5);   // Pile : [5, 3, 5]
mstack.push(737); // Pile : [5, 3, 5, 737]
mstack.push(0);   // Pile : [5, 3, 5, 737, 0]

// Crée un itérateur pointant sur le début de la pile (sur l'élément 5)
MutantStack<int>::iterator it = mstack.begin();

// Crée un itérateur pointant après le dernier élément de la pile (juste après 0)
MutantStack<int>::iterator ite = mstack.end();

// Avance l'itérateur `it` d'un élément (it pointe maintenant sur 3)
++it;

// Recule l'itérateur `it` d'un élément (it pointe de nouveau sur 5)
--it;

// Parcours la pile avec l'itérateur `it` jusqu'à ce qu'il atteigne `ite`
// Affiche chaque élément de la pile dans l'ordre
while (it != ite)
{
    // Affiche l'élément pointé par l'itérateur
    std::cout << *it << std::endl;
    
    // Avance l'itérateur pour pointer sur l'élément suivant
    ++it;
}
*/

/*int main(void)
{
    std::cout << "Subject’s tests" << std::endl;
    
    // Création d'une liste d'entiers
    std::list<int> mstack;
    mstack.push_back(5);
    mstack.push_back(17);
    
    // Affiche l'élément du "sommet" de la liste (le dernier élément ajouté)
    std::cout << mstack.back() << std::endl;

    // Retire l'élément du "sommet" de la liste
    mstack.pop_back();
    
    // Affiche la taille de la liste après le retrait
    std::cout << mstack.size() << std::endl;

    // Ajout de nouveaux éléments à la liste
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    mstack.push_back(0);

    // Utilisation des itérateurs pour parcourir la liste
    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();
    ++it;
    --it;

    // Parcours de la liste et affichage des éléments
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    
    std::cout << "--------List tests-----------" << std::endl;
    
    // Création d'une nouvelle liste pour tester
    std::list<int> mstack2;
    mstack2.push_back(5);
    mstack2.push_back(17);
    
    // Affiche l'élément du "sommet" de la liste
    std::cout << mstack2.back() << std::endl;
    
    // Retire l'élément du "sommet" de la liste
    mstack2.pop_back();
    
    // Affiche la taille de la liste après le retrait
    std::cout << mstack2.size() << std::endl;
    
    // Ajout de nouveaux éléments à la liste
    mstack2.push_back(3);
    mstack2.push_back(5);
    mstack2.push_back(737);
    mstack2.push_back(0);

    // Utilisation des itérateurs pour parcourir la liste
    std::list<int>::iterator it2 = mstack2.begin();
    std::list<int>::iterator ite2 = mstack2.end();
    ++it2;
    --it2;

    // Parcours de la liste et affichage des éléments
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }

    std::cout << "-------- Empty list tests --------" << std::endl;

    // Création d'une liste vide pour tester les opérations
    std::list<int> emptyList;

    // Vérification si la liste est vide avant d'appeler `back()`
    if (!emptyList.empty()) 
    {
        std::cout << emptyList.back() << std::endl;
    } 
    else 
    {
        std::cout << "List is empty, cannot access back." << std::endl;
    }

    // Vérification si la liste est vide avant d'appeler `pop_back()`
    if (!emptyList.empty()) 
    {
        emptyList.pop_back();
        std::cout << "Pop operation successful." << std::endl;
    } 
    else 
    {
        std::cout << "List is empty, cannot pop." << std::endl;
    }

    return (0);
}*/