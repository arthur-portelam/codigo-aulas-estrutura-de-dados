#include <iostream>
#include <list>
#include <string>


using namespace std;


int main(){
    list <int> fila;
    string r;
    int temp, cont= 0;
    do {
        cout << "\nDigite um numero: " << endl;
        cin >> temp;
        fila.push_back(temp);
        cout << "\nDeseja cadastrar outro numero?  (s/n)" << endl;
        getline( cin >> ws, r);
    }while (r == "sim");


    while (!fila.empty()){
        if (fila.front() == 7){
            cont++;
            fila.pop_front();
            } else{
                fila.pop_front();
            }
    }
    cout << "\nA quantidade de vezes que o numero 7 foi digitado: " << cont;

    return 0;
}