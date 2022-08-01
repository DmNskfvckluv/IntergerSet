#include <iostream>
#include <stdio.h>
using namespace std;

class IntegerSet{
private:
    int i;//posicao onde ira inserir um elemento
    int n;//tamanho do vetor
    int vet[];//vetor

public:
    IntegerSet(int i_arg, int n);
    ~IntegerSet(void);
    void mostrarDados();
    void InserirDados(int i);
    void ExcluirDados(int i);

};
IntegerSet::IntegerSet(int i_arg, int n_arg){
    int c;
    //verificando se i pertence ao conjunto
    if(i_arg < 0 | i_arg > n_arg){
        cout << "Erro! i n pertence ao conjunto"<<endl;
    }
    else{
        i = i_arg;
        n = n_arg;
        vet[n];
        for(c=0;c<n;c++){
            vet[c] = 0;
        }
        if(i == 0)
            cout << "posicao 0 n existe no conjunto"<<endl;
        else
            vet[i-1] = 1;
    }
}
IntegerSet::~IntegerSet(void){};
void IntegerSet::mostrarDados(){
    int i;
    for(i=0;i<n;i++){
        cout << vet[i]<<" ";
    }
    cout << endl;
    cout << endl;

}
void IntegerSet::InserirDados(int i){
    if(i < 0 | i > n){
        cout << "Erro!" <<i <<" nao pertence ao conjunto"<<endl;
    }else{
        if(i==0)
            cout << "posicao 0 n existe no conjunto"<<endl;
        else
            vet[i-1] = 1;
    }
}
void IntegerSet::ExcluirDados(int i){
    if(vet[i-1] == 0)
        cout << "esse elemento ja esta vazio."<<endl;
    else
        vet[i-1] = 0;
}



main(){
    int n, i;
    cout << "tamanho do vet: ";
    cin >> n;
    cout << "posicao onde quer alocar um elemento: ";
    cin >> i;

    IntegerSet I(i, n);//exemplo se n = 10 e i = 3
    I.mostrarDados();//0 0 1 0 0 0 0 0 0 0

    I.InserirDados(7);//inserindo um elemento na posicao 7
    I.mostrarDados();// 0 0 1 0 0 0 1 0 0 0

    I.ExcluirDados(3); //excluindo elemento na posicao 3
    I.mostrarDados();// 0 0 0 0 0 0 1 0 0 0

}
