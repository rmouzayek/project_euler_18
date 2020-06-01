#ifndef UTILITY_H
#define UTILITY_H

#include <string>
#include<vector>
#include<sstream>

namespace util_functions
{
    int string_to_int(std::string s);
    std::vector<int> split(std::string s, std::string delim);
}

#endif
