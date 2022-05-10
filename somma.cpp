#include <iostream>
#include <fstream>
using namespace std;

template<typename T>
int mult(T& a, T& b){
    return a*b;
}

int sum(int& , int& );
void stampaMess();

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");

    int b = 2;
    int c = 3;
    cout << "la somma di due variabili: "<< sum(b, c) << endl;
    cout << "il prodotto di due variabili: "<< mult<int>(b, c) << endl;
    stampaMess();
    cout << endl;

    return 0;
}

int sum(int& var1, int& var2){
    return var1 + var2;
}

void stampaMess(){
    cout << "Questo sembra un messaggio" << endl;
}

void Pippo(string nome){
    nome = "Mi chiamo Pippo";
}

void calcola();
