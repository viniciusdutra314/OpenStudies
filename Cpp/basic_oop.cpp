// good video https://www.youtube.com/watch?v=wN0x9eZLix4
#include <stdio.h>


struct Medida{
    // É neceśsario declarar os atributos no
    // inicio do código, assim eles são acessiveis    
private:
    float nominal;
    float incerteza;
    // impossivel acessar e modificar diretamente
public:
    Medida(float a, float b){
            nominal = a;
            incerteza = b;}
    void show(){
            printf("Medida %f, Incerteza %f \n",nominal,incerteza)
    ;};};

int main(){
    Medida gravidade = Medida(9.8,0.1);

    gravidade.show();


}