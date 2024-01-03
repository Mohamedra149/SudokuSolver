#ifndef SUDOKU_SUDOKUSOLVER_H
#define SUDOKU_SUDOKUSOLVER_H
#include <iostream>
#include "bits/stdc++.h"
using namespace std;

bool isValidBox(vector<vector<char>>& board ,int i ,int j);
bool isValidRow(vector<vector<char>>& board ,int i);
bool isValidCol(vector<vector<char>>& board ,int j);
void solveSudoku(vector<vector<char>>& board);
#endif //SUDOKU_SUDOKUSOLVER_H
