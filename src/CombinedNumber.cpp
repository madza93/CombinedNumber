#include "CombinedNumber.hpp"

std::string CombinedNumber::constructGreatestNumber(std::list<unsigned int> l)
{
    if (l.empty())
        return "";
    std::string a= "";
    for(auto i: l){
        a+=std::to_string(i);

    }
    return a;
}


