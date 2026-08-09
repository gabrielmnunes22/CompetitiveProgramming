#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    vector<char> list;

    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] != '+'){
            list.push_back(s[i]);
        }
    }

    sort(list.begin(), list.end());
    
    for(int i = 0; i < list.size(); i++){
        cout << list[i];
        if(i != list.size() - 1){
            cout << "+";
        }
    }

    cout << endl;

    return 0;
}