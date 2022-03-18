#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,i;
    int c=0,r=0,s=0,q;
    int soma=0;
    char tipo;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %c",&q,&tipo);
        soma +=q;
        if(tipo == 'C'){
            c += q;
        }else if(tipo == 'R'){
            r +=q;
        }else{
            s +=q;
        }
    }
    printf("Total: %d cobaias\n",soma);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %%\n",(float)c/soma*100);
    printf("Percentual de ratos: %.2f %%\n",(float)r/soma*100);
    printf("Percentual de sapos: %.2f %%\n",(float)s/soma*100);

    return 0;
}