#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <exception>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <limits>

class Span
{
    private:
        unsigned int _N;
        std::vector<int> _numbers;

    public:
        Span(unsigned int N);

        void addNumber(int num);

        // Ajouter plusieurs nombres à partir d'un range d'itérateurs
        template <typename InputIterator>
        void addNumbers(InputIterator begin, InputIterator end);

        int shortestSpan();
        int longestSpan();

        // Exceptions
        class SpanFullException : public std::exception {
            const char* what() const throw() {
                return "Span is full";
            }
        };

        class NoSpanException : public std::exception {
            const char* what() const throw() {
                return "Not enough elements to find a span";
            }
        };
};

#endif 
