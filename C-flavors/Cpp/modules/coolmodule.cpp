module;
#include <iostream>
export module coolmodule;

export class CoolClasse{
    int value_1;
    public:
    void coolfunction(){
        std::cout<<"Hey, I'm a cool function"<<"\n";
    }
    ;
};