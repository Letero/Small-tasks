#include <vector>
#include <iostream>

int sum(const std::vector<int> numbers, int left, int right)
{
    int s = 0;
    for (int i = left; i <= right; ++i)
    {
        s += numbers[i];
    }
    return s;
}

int find_even_index(const std::vector<int> numbers)
{
    for (int i = 0; i < numbers.size(); ++i)
    {
        if (sum(numbers, 0, i) == sum(numbers, i, numbers.size() - 1))
        {
            return i;
        }
    }
    return -1;
}

int main() //some basic tests
{
    std::vector<int> numbers{1, 2, 3, 4, 3, 2, 1};
    if (find_even_index(numbers) == 3)
    {
        std::cout << "OK" << std::endl;
    }

    std::vector<int> numbers1{20, 10, 30, 10, 10, 15, 35};
    if (find_even_index(numbers1) == 3)
    {
        std::cout << "OK" << std::endl;
    }

    std::vector<int> numbers2{20, 10, -80, 10, 10, 15, 35};
    if (find_even_index(numbers2) == 0)
    {
        std::cout << "OK" << std::endl;
    }
}