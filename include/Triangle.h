#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Utility.h"

class Triangle
{
    public:
        Triangle(std::string input);
        static std::vector<std::vector<int>> build_triangle(std::string input);
        int maximum_path();
        void display();

    private:
        std::vector<std::vector<int>> data;
};

#endif
