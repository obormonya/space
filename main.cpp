#include <iostream>
#include <vector>
#include "timsort_git.h"

int main() 
{
    setlocale(LC_ALL, "RUS");
    std::vector<int> arr = { 5, 21, 7, 23, 19, 4, 12, 9, 1, 3 };

    std::cout << "Исходный массив: ";
    for (int x : arr) std::cout << x << " ";
    std::cout << "\n";

    timsort(arr);

    std::cout << "Отсортированный массив: ";
    for (int x : arr) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}
