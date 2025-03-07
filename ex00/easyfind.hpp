#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>

//exception lancee si l'element n'est pas trouve
class NotFoundException : public std::exception 
{
    public:
        virtual const char* what() const throw() 
        {
            return "Element not found";
        }
};

//fonction qui cherche un element dans un container
template <typename T>
typename T::iterator easyfind(T &container, int n)
{
    typename T::iterator it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        throw NotFoundException();
    return it; 
}

#endif
