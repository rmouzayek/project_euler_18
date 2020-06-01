#include "Triangle.h"

using namespace std;

Triangle::Triangle(string input)
{
    data = build_triangle(input);
}

int Triangle::maximum_path()
{
    for (int current_line(data.size() - 2); current_line >= 0; current_line--){
        for (int i(0); i < data[current_line].size(); i++){
            int nbr = data[current_line][i];
            nbr += max(data[current_line + 1][i], data[current_line + 1][i + 1]);
            data[current_line][i] = nbr;
        }
    }
    return data[0][0];
}

vector<vector<int>> Triangle::build_triangle(string input){
        vector<int> split_nbrs = util_functions::split(input, " ");
        vector<vector<int>> triangle;
        int size_line = 1;
        int current_index = 0;
        vector<int> new_line;
        for (auto nbr: split_nbrs){
            current_index ++;
            new_line.push_back(nbr);
            if (current_index == size_line){
                triangle.push_back(new_line);
                current_index = 0;
                new_line = {};
                size_line ++;
            }
        }
        return triangle;
    }

void Triangle::display(){
    for (auto line: data){
        for (int nbr: line){
            cout << nbr << " ";
        }
        cout << endl;
    }
}
