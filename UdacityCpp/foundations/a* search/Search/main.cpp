#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;
using std::abs;

enum class State {kEmpty, kObstacle};

vector<State> ParseLine(string line){
    istringstream sline(line);
    int n;
    char c;
    vector<State> row;
    while(sline >>n >>c && c == ','){
        if(n==0){
            row.push_back(State::kEmpty);
        }else {
            row.push_back(State::kObstacle);
        }
    }
    return row;
}
