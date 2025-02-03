#include "Span.hpp"

Span::Span(unsigned int N) : _N(N) {}

// Ajouter un nombre
void Span::addNumber(int num)
{
    if (_numbers.size() >= _N)
        throw SpanFullException();
    _numbers.push_back(num);
}

// Ajouter plusieurs nombres via des itérateurs
template <typename InputIterator>
void Span::addNumbers(InputIterator begin, InputIterator end)
{
    for (InputIterator it = begin; it != end; ++it)
    {
        if (_numbers.size() >= _N)
            throw SpanFullException();
        _numbers.push_back(*it);
    }
}

// Calculer le plus petit span
int Span::shortestSpan()
{
    if (_numbers.size() < 2)
        throw NoSpanException();

    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());

    int shortest = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sorted.size(); ++i)
    {
        int span = sorted[i] - sorted[i - 1];
        if (span < shortest)
            shortest = span;
    }
    return shortest;
}

// Calculer le plus grand span
int Span::longestSpan()
{
    if (_numbers.size() < 2)
        throw NoSpanException();

    int min = *std::min_element(_numbers.begin(), _numbers.end());
    int max = *std::max_element(_numbers.begin(), _numbers.end());
    return max - min;
}

// Spécialisation explicite pour les itérateurs de vecteurs
template void Span::addNumbers<std::vector<int>::iterator>(std::vector<int>::iterator, std::vector<int>::iterator);
