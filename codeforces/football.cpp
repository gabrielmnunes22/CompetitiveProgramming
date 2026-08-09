#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int seq;
    bool isDangerous = false;
    char curr, next;

    cin >> s;

    seq = 1;
    for(int i = 1; i < s.size(); i++){
        curr = s[i - 1];
        next = s[i];
        
        //cout << "curr: " << curr << endl;
        //cout << "next: " << next << endl;

        if(curr == next){
            seq++;
            //cout << "seq: " << seq << endl;
            if(seq == 7){
                isDangerous = true;
            }
        }else{
            seq = 1;
        }
    }

    if(isDangerous){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}