//
// Created by Niloy Farhan on 3/2/24.
//

#ifndef A__SEARCH_WITH_MULTIPLE_FILES_FUNC_H
#define A__SEARCH_WITH_MULTIPLE_FILES_FUNC_H
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

enum class State {kEmpty, kObstacle, kClosed, kPath, kStart, kFinish};
const int delta[4][2]{{-1, 0}, {0, -1}, {1, 0}, {0, 1}};


vector<vector<State>> ReadBoardFile(string path);
vector<State> ParseLine(string line);
void PrintBoard(const vector<vector<State>> board);
string CellString(State cell);
int Heuristic(int x1, int y1, int x2, int y2);
void AddToOpen(int x, int y, int g, int h, vector<vector<int>> &openlist, vector<vector<State>> &grid);
bool Compare(const vector<int> a, const vector<int> b);
void CellSort(vector<vector<int>> *v);
vector<vector<State>> Search(vector<vector<State>> grid, int init[2], int goal[2]);
bool CheckValidCell(int x, int y, vector<vector<State>> &grid);


#endif //A__SEARCH_WITH_MULTIPLE_FILES_FUNC_H
