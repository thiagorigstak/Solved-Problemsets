#include <bits/stdc++.h>

using namespace std;

int main(){
    int I=1,J;
    while(I<=9){
        for(J=7;J>=5;J--){
            printf("I=%d J=%d\n",I,J);
        }
        I +=2;
    }
    return 0;
}