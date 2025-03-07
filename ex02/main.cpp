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