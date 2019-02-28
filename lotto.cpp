#include <iostream>
#include <set>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(nullptr));
    std::set<int> zbior;
    while (zbior.size() != 6){
        zbior.insert(rand()%49+1);
    }

    for(auto &it: zbior)
        std::cout << it << " ";

    cout << "Koniec programu\n";

    cout << "Ale czy na pewno?\n\n";
    cout << "Ale czy na pewno, na pewno, na pewno?\n";

    return 0;
}
