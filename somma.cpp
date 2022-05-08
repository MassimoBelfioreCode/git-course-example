#include <iostream>
using namespace std;

int sum(int& , int& );

int main(){
    
    int b = 2;
    int c = 3;
    cout << "la somma di due variabili: "<< sum(b, c) << endl;

    return 0;
}

template <typename T>
T mult(T& a, t& b){
    return a * b;
}

int sum(int& var1, int& var2){
    int somma = var1 + var2;
    return somma;
}