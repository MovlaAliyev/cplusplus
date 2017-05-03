/*
Rewrite the grade clustering program from § 3.3.3 (p. 104)
using iterators instead of subscripts.
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    std::vector<unsigned> scores(11, 0);
    unsigned grade;
    while (std::cin >> grade)
        ++*(scores.begin() + grade / 10);
    for (const auto & elem : scores)
        std::cout << elem << ' ';
    std::cout << std::endl;
    return 0;
}
