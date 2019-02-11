#include "CombinedNumber.hpp"

std::string CombinedNumber::constructGreatestNumber(std::list<unsigned int> l)
{
    if (l.empty())
        return "";

    std::list<unsigned int>::iterator it = std::find_if (l.begin(), l.end(), [=](auto e){return e != l.front();});
    if (it != l.end());
    std::string a= "";
    for(auto i: l){

        a+=std::to_string(i);

    }
    return a;
}


