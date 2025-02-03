#include "Span.hpp"
#include <iostream>
#include <vector>

int main()
{
    try
    {
        // Test de base avec ajout d'un seul nombre
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

        // Test avec ajout de plusieurs nombres via des itérateurs
        std::vector<int> vec;
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(4);
        vec.push_back(5);
        vec.push_back(6);
        
        sp.addNumbers(vec.begin(), vec.end());
        std::cout << "Shortest Span (after adding more numbers): " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span (after adding more numbers): " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
