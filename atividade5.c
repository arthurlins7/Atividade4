#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define M 10000
#define N 10000

int tam, a[M][N], s[M];

void* matriz_arm(void* p);

int main() {
    int *p, verify;
    int sum = 0;

    pthread_t thread[N+1];
    printf("Insira o número de linhas e colunas da matriz quadrada = ");
    scanf("%d", &tam);

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i=0; i < tam; i++) {
        p = malloc(sizeof(int));
        *p = i;
        verify = pthread_create(&thread[i], NULL, matriz_arm, p);
        if (verify != 0) {
            printf("Thread %d not created", i);
            exit(-1);
        }
    }

    for (int i=0; i < tam; i++) {
        pthread_join(thread[i], NULL);
    }

    for (int i=0; i < tam; i++) {
        sum += s[i];
    }
    printf("%d\n", sum);

    return 0;
    }

void* matriz_arm(void* p) {
   int k = *((int*) p);
   int i;
   for (i = 0; i < tam; i++) {
      s[k] += a[k][i];
   }
   return NULL;
}
