#include <algorithm>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using std::cout;
using std::ifstream;
using std::istringstream;
using std::sort;
using std::string;
using std::vector;
using std::abs;

// TODO: Add kStart and KFinish enumerators to the State enum.
enum class State {kEmpty, kObstacle, kClosed, kPath, kStart, kFinish};

// directional deltas
const int delta[4][2]{{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

vector<vector<State> ParseLine(string line){
    istringstream sline(line);
    int n;
    char c;
    vector<State> row;
    while(sline >>n >>c && c == ','){
        if (n == 0){
            row.push_back(State::kEmpty);
        }else{
            row.push_back(State::kObstacle);
        }
    }
}

int main() {

    return 0;
}
