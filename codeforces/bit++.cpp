#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int x = 0;

    cin >> n;

    string exp;
    for(int i = 0; i < n; i++){
        cin >> exp;
        for(int i = 0; i < exp.size(); i++){
            if(exp[i] == '+'){
                x++;
                break;
            }else if(exp[i] == '-'){
                x--;
                break;
            }
        }
    }

    cout << x << endl;

    return 0;
}