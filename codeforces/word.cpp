#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;

    cin >> s;

    int n_upper = 0;
    int n_lower = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == toupper(s[i])){
            n_upper++;
        }else{
            n_lower++;
        }
    }  

    if(n_upper > n_lower){
        for(int i = 0; i < s.size(); i++){
            s[i] = toupper(s[i]);
        }
    }else{
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }
    }


    cout << s << endl;

    return 0;
}