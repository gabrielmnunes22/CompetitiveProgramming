#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1, s2;

    cin >> s1;
    cin >> s2;

    for(int i = 0 ; i < s1.size(); i++){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);

    }

    //cout << s1 << endl;
    //cout << s2 << endl;

    int equals = true;
    for(int i = 0; i < s1.size(); i++){
        if(s1[i] != s2[i]){
            equals = false;
            if(s1[i] > s2[i]){
                cout << "1" << endl;
            }else{
                cout << "-1" << endl;
            }
            break;
        }
    }

    if(equals){
        cout << "0" << endl;
    }

    return 0;
}