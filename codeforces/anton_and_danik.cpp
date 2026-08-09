#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;

    cin >> n;
    cin >> s;

    int v_anton = 0;
    int v_danik = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A'){
            v_anton++;
        }else{
            v_danik++;
        }
    }

    if(v_anton > v_danik){
        cout << "Anton" << endl;
    }else if(v_anton < v_danik){
        cout << "Danik" << endl;
    }else{
        cout << "Friendship" << endl;
    }

    return 0;
}