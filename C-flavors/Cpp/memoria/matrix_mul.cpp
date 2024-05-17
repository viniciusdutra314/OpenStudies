#include <iostream>
using namespace std;

void show_matrix(float** matrix, int rows, int cols){
    for (int j=0;j<rows;j++){
        cout << "|";
        for (int i=0;i<cols;i++){
            cout << "  "<< matrix[i][j];}
        cout << " |" << endl;}
}

float** zero_matrix(int rows,int cols){
    float** matrix=(float **)malloc(sizeof(float *)*rows);
    for (int i=0;i<cols;i++){
        matrix[i]=(float *)malloc(sizeof(float)*cols);}
    return matrix;
}

void input_matrix(float** matrix,int rows,int cols){
    for (int j=0;j<rows;j++){
        cout << "Digite a linha " <<j+1<<endl;
        for (int i=0;i<cols;i++){
            cin >> matrix[i][j];}}
}
int main(){
    int rows_a,cols_a, rows_b, cols_b;
    float** matrix_a;
    cout<< "Insira a matrix A" <<endl;
    cout <<"Números de linhas:"<<endl ;
    cin >> rows_a;
    cout <<"Números de colunas:"<<endl ;
    cin >> cols_a;
    matrix_a=zero_matrix(rows_a,cols_a);
    input_matrix(matrix_a,rows_a,cols_a);
    cout<< "Essa é a matrix A (" << rows_a << "x" << cols_a << ")" <<endl;
    show_matrix(matrix_a,rows_a,cols_a);

    cout<< "Insira a matrix B" <<endl;
    float** matrix_b;
    cout <<"Números de linhas:"<<endl ;
    cin >> rows_b;
    cout <<"Números de colunas:"<<endl ;
    cin >> cols_b;;
    matrix_b=zero_matrix(rows_b,cols_b);
    input_matrix(matrix_b,rows_b,cols_b);
    cout<< "Essa é a matrix B (" << rows_b << "x" << cols_b << ")" <<endl;
    show_matrix(matrix_b,rows_b,cols_b);


    for (int i=0;i<rows_a;i++){
        free(matrix_a[i]);}
    for (int i=0;i<rows_b;i++){
        free(matrix_b[i]);}
;}