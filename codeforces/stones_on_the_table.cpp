#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;

    cin >> n;
    cin >> s;

    int neighbour = 0;
    for(int i = 0; i < s.size() - 1; i++){
        //cout << "s[i]: "<< s[i] << endl;
        //cout << "s[i + 1] "<< s[i + 1] << endl; 
        if(s[i] == s[i + 1]){
            neighbour++;
        }
    }

    cout << neighbour << endl;

    return 0;
}