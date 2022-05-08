#include <iostream>
using namespace std;

int sum(int& , int& );
void stampaMess();

int main(){
    
    int b = 2;
    int c = 3;
    cout << "la somma di due variabili: "<< sum(b, c) << endl;
    cout << "il prodotto di due variabili: "<< mult(b, c) << endl;
    stampaMess();

    return 0;
}

template <typename T>
T mult(T& a, T& b){
    return a * b;
}

int sum(int& var1, int& var2){
    return var1 + var2;
}

void stampaMess(){
    cout << "Questo sembra un messaggio" << endl;
}