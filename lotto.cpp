#include <iostream>
#include <set>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(nullptr));
    std::set<int> zbior;
    while (zbior.size() != 6) {
        zbior.insert(rand()%49+1);
    }
    for(auto &it: zbior) {
        std::cout << it << " ";
    }
    return 0;
}
