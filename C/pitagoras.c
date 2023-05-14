#include <stdio.h>
#include <time.h>

void minha_funcao() {
 int a, b, c, i, j, k, N;
    N = 30000;
    for (i = 1; i < N; i=i+1) {
        for (j = i+1; j < N; j=j+1) {
            for (k = j+1; k < N; k=k+1) {
             ;
            }
        }
    }
}



int main() {
    clock_t inicio, fim;
  double tempo_execucao;

  inicio = clock(); // Registra o tempo de início da execução

  minha_funcao(); // Executa a função que você deseja medir o tempo de execução

  fim = clock(); // Registra o tempo de término da execução

  tempo_execucao = ((double) (fim - inicio)) / CLOCKS_PER_SEC; // Calcula o tempo de execução em segundos

  printf("Tempo de execucao: %.2lf segundos\n", tempo_execucao);

    return 0;
}
