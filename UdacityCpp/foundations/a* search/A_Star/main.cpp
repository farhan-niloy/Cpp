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

vector<State> ParseLine(string line) {
    istringstream sline(line);
    int n;
    char c;
    vector<State> row;
    while (sline >> n >> c && c == ',') {
        if (n == 0) {
            row.push_back(State::kEmpty);
        } else {
            row.push_back(State::kObstacle);
        }
    }
    return row;
}

vector<vector<State>> ReadBoardFile(string path) {
    ifstream file (path);
    vector<vector<State>> board{};
    if (file) {
        string line;
        while (getline(file, line)) {
            vector<State> row = ParseLine(line);
            board.push_back(row);
        }
    }
    return board;
}

/**
 * Compare the F values of two cells.
 */
bool Compare(const vector<int> a, const vector<int> b) {
    // Calculate the sum of the third and fourth elements for vector 'a'
    int f1 = a[2] + a[3]; // f1 = g1 + h1

    // Calculate the sum of the third and fourth elements for vector 'b'
    int f2 = b[2] + b[3]; // f2 = g2 + h2

    // Compare the calculated values and return the result
    return f1 > f2;
}


/**
 * Sort the two-dimensional vector of ints in descending order.
 */
 void CellSort(vector<vector<int>> *v) {
     sort(v->begin(), v->end(), Compare);
 }

 //Calculate the manhattan distance



int main() {

    return 0;
}
