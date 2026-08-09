#include <bits/stdc++.h>
using namespace std;

bool isNewLetter(vector<char> letters, char c){
    bool newLetter = true;
    for(int i = 0; i < letters.size(); i++){
        if(c == letters[i]){
            newLetter = false;
            break;
        }
    }
    return newLetter;
}   

int main(){
    string s;

    cin >> s;

    int difLetters = 0;
    bool newLetter = false;
    vector<char> letters;

    for(int i = 0; i < s.size(); i++){
        newLetter = isNewLetter(letters, s[i]);
        if(newLetter){
            difLetters++;
            letters.push_back(s[i]);
        }    
    }

    if(difLetters % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}