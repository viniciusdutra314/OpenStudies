#include <iostream>

unsigned long long int fatorial(int n){
    if (n<=1){return 1;}
    else{
        return n*fatorial(n-1);

    }

}

int main(){
    for (int i=0; i<64;i++){
    std::cout <<"fatorial de " << i << " é igual:" << fatorial(i)<<std::endl ;};}