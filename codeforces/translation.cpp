#include <bits/stdc++.h>
using namespace std;

int main(){

    string s, t;

    cin >> s;
    cin >> t;

    bool dif = false;
    int j = 0;

    if(s.size() != t.size()){
        dif = true;
    }else{
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] != t[j]){
                dif = true;
                break;
            }
            j++;
        }
    }
    

    if(dif){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }


    return 0;
}