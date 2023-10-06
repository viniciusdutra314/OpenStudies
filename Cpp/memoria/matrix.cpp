
#include <iostream>
using namespace std;

int main(){
    int rows,cols;
    cout <<"Números de linhas:"<<endl ;
    cin >> rows;
    cout <<"Números de colunas:"<<endl ;
    cin >> cols;
    float** matrix=(float **)malloc(sizeof(float *)*rows);
    for (int i=0;i<cols;i++){
        matrix[i]=(float *)malloc(sizeof(float)*cols);}
    for (int j=0;j<rows;j++){
        cout << "Digite a linha " <<j+1<<endl;
        for (int i=0;i<cols;i++){
            cin >> matrix[i][j];}}

     for (int j=0;j<rows;j++){
        cout << "|";
        for (int i=0;i<cols;i++){
            cout << "  "<< matrix[i][j];}
        cout << " |" << endl;}


    for (int i=0;i<rows;i++){
        free(matrix[i]);}
;}