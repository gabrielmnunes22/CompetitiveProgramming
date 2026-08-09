#include <bits/stdc++.h>
using namespace std;

#define NROWS 5
#define NCOLS 5
#define PERFECT_ROW 2
#define PERFECT_COL 2

int main(){
    int mat[NROWS][NCOLS];
    int i_idx, j_idx;
    int min_moves = 0;

    for(int i = 0; i < NROWS; i++){
        for(int j = 0; j < NCOLS; j++){
            cin >> mat[i][j];
            if(mat[i][j] == 1){
                i_idx = i;
                j_idx = j;
            }
        }
    }

    min_moves = abs(PERFECT_ROW - i_idx) + abs(PERFECT_COL - j_idx);

    cout << min_moves << endl;

    return 0;
}