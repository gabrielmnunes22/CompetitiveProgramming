#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;

    cin >> n >> m;

    bool s = true;
    for(int i = 0; i < n; i++){
        //cout << "s" << s << endl;
        for(int j = 0; j < m; j++){
            if(i % 2 == 0){
                cout << "#";
            }else if(i % 2 != 0 && s == true && j == m - 1){
                cout << "#";
            }else if(i % 2 != 0 && s == false && j == 0){
                cout << "#";
            }else{
                cout << ".";
            }
        }

        if(i % 2 != 0){
            s = !s;
        }

        cout << endl;
    }

    return 0;
}