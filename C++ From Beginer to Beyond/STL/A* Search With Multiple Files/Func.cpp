//
// Created by Niloy Farhan on 3/2/24.
//

#include "Func.h"

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
    ifstream myfile (path);
    vector<vector<State>> board{};
    if (myfile) {
        string line;
        while (getline(myfile, line)) {
            vector<State> row = ParseLine(line);
            board.push_back(row);
        }
    }
    return board;
}

void PrintBoard(const vector<vector<State>> board) {
    for ( int i = 0; i < board.size(); i++ ) {
        for ( int j = 0; j < board[i].size(); j++) {
            cout<< CellString(board[i][j]);
        }
        cout<<"\n";
    }
}

string CellString(State cell) {
    switch(cell) {
        case State::kObstacle: return "⛰   ";
        default: return "0   ";
    }
}

int Heuristic(int x1, int y1, int x2, int y2) {
    return abs(x2-x1) + (y2-y1);
}

bool Compare(const vector<int> a, const vector<int> b){
    int f1 = a[2] + a[3];
    int f2 = b[2] + b[3];
    return f1 > f2;
}

void CellSort(vector<vector<int>> *v) {
    sort(v->begin(), v->end(), Compare);
}

void AddToOpen(int x, int y, int g, int h, vector<vector<int>> &openlist, vector<vector<State>> &grid){

}




vector<vector<State>> Search(vector<vector<State>> grid, int init[2], int goal[2]) {
    vector<vector<int>> open {};
    int x = init[0];
    int y = init[1];
    int g = 0;
    int h = Heuristic(x, y, goal[0], goal[1]);
    AddToOpen(x, y, g, h, open, grid);

    while (open.size() > 0) {
        cellSort (&open);
    }

}

bool CheckValidCell(int x, int y, vector<vector<State>> &grid){

}


