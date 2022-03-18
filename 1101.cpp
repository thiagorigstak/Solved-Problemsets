#include <bits/stdc++.h>

using namespace std;

int main() {

    int i;
    int soma = 0;
    int M, N;

    do {
        scanf("%d %d", & M, & N);
        if (M <= 0 || N <= 0) break;
        if (N < M) {
            for (i = N; i <= M; i++) {
                printf("%d ", i);
                soma += i;
            }
            printf("Sum=%d\n", soma);
        } else {
            for (i = M; i <= N; i++) {
                printf("%d ", i);
                soma += i;
            }
            printf("Sum=%d\n", soma);;
        }
        soma = 0;
    } while (N > 0 && M > 0);

    return 0;
}