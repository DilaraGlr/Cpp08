#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i);

    try 
    {
        std::cout << "Found: " << *easyfind(v, 2) << std::endl;
        std::cout << "Found: " << *easyfind(v, 10) << std::endl;
    } 
    catch (std::exception &e) 
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
