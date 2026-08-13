#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, r;
    int i, quocient, remainder;
    
    cin >> k >> r;

    i = 1;

    do{
        quocient = (k * i) / 10; 
        remainder = (k * i) % 10;
        
        if(remainder != 0 && remainder != r){
            i++;
        }

    }while(remainder != 0 && remainder != r);


    cout << i << endl;

    return 0;
}