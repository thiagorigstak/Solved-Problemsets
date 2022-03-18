#include <bits/stdc++.h>

using namespace std;

int main(){
    int J=7,I,j=7;
    for(I=1;I<=9;I += 2){
        for(J=j;J>=j-2;J--){
            printf("I=%d J=%d\n",I,J);
        }
        j += 2;
    }
    return 0;
}