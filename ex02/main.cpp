#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main() 
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Top: " << mstack.top() << std::endl;

    mstack.pop();
    std::cout << "Size: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    // Test itérateurs
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    std::cout << "Stack contents:" << std::endl;
    while (it != ite) 
    {
        std::cout << *it << std::endl;
        ++it;
    }

    // Comparaison avec std::list
    std::list<int> lstack;
    lstack.push_back(5);
    lstack.push_back(17);
    lstack.pop_back();
    lstack.push_back(3);
    lstack.push_back(5);
    lstack.push_back(737);
    lstack.push_back(0);

    std::cout << "List contents:" << std::endl;
    for (std::list<int>::iterator lit = lstack.begin(); lit != lstack.end(); ++lit)
        std::cout << *lit << std::endl;

    return 0;
}
