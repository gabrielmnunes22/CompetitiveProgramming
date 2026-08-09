#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;

    int nWays = 0;
    int half = n / 2;
    int j = half - 1;

    for(int i = 1; i < half; i++){
        if(2 * i + 2 * j == n && i != j){
            //cout << "i: " << i << endl;
            //cout << "j: " << j << endl;
            nWays++;
        }
        j--;
    }

    nWays /= 2;
    cout << nWays << endl;
}