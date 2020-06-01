#include "Utility.h"

using namespace std;

int util_functions::string_to_int(string s){
    int i;
    istringstream(s) >> i;
    return i;
}

vector<int> util_functions::split(string s, string delim){
    vector<int> vector_returned;
    auto start = 0U;
    auto end = s.find(delim);
    while (end != std::string::npos)
    {
        vector_returned.push_back(string_to_int(s.substr(start, end - start)));
        start = end + delim.length();
        end = s.find(delim, start);
    }
    vector_returned.push_back(string_to_int(s.substr(start, end)));
    return vector_returned;
}
