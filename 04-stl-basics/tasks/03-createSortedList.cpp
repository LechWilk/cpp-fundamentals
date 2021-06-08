#include <iostream>
#include <vector>
#include <list>

// Implement createSortedList
// add proper include :)

std::list<int> createSortedList(std::vector<int>);
int main() {
    std::vector<int> vec{2, 3, 4, 1, 6, 5, 8, 7, 9, 0};
    auto list = createSortedList(vec);

    for (const auto& el : list)
        std::cout << el << " ";

    return 0;
}

std::list<int> createSortedList(std::vector<int> v) 
{
    std::list<int> l;

    for (const auto el:v)   {
        l.push_back(el);
    }
    l.sort();
    
    return l;
}