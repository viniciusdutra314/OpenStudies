#include <iostream>
int main(){
    #define PRINT(x) std::cout << x << std::endl;
    PRINT("Hey");
    PRINT("Eu sou um macro");
    PRINT(3.14159)
    //Podemos mudar um pouco a sintaxe do próprio C++
    //Extremamente não recomendando, but it is funny
    #define COMECA_O_FOR {
    #define TERMINA_O_FOR }
    for (int i=0;i<10;i++) COMECA_O_FOR
        ;
    TERMINA_O_FOR;
    #undef COMECA_O_FOR
    #define COMECA_O_FOR PRINT("Mudamos o macro")
    COMECA_O_FOR;
}
