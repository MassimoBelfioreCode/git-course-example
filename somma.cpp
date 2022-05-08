#include <iostream>
using namespace std;

int sum(int& , int& );

int main(){
    
    int b = 2;
    int c = 3;
    cout << "la somma di due variabili: "<< somma(b, c) << endl;

    return 0;
}


int sum(int& var1, int& var2){
    int somma = var1 + var2;
    return somma;
}