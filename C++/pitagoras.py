
import time
def minha_funcao():
    N=3000
    for i in range(1,N):
        for j in range(i+1,N):
            for k in range (j,N):
                pass

inicio = time.perf_counter() # Registra o tempo de início da execução

minha_funcao() # Executa a função que você deseja medir o tempo de execução

fim = time.perf_counter() # Registra o tempo de término da execução

tempo_execucao = fim - inicio # Calcula o tempo de execução em segundos

print("Tempo de execução: {:.2f} segundos".format(tempo_execucao))
