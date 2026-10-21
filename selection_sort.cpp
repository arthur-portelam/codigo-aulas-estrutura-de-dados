#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> lista = {1, 5, 3 ,8, 9, 4};

    for(int i=0; i < lista.size(); i++){
        int mt=i; // meu menor numero esta em i
        for (int j=i + 1 ; j < lista.size(); j++){
            if (lista[mt] > lista[j]){
                mt = j;//se j for menor do que mt eu troco, então meu novo menor numero é o que estava em j
        }
    }
    //só rode dps que encontrarmos um numero menor que mt, se estiver dentro do for ira torcar sempre
        int temp= lista[i]; // o numero que estava em i (i é maior que o novo numero encontrado) agora guardamos em temp
        lista[i]= lista[mt]; // eu substituo quem estava dentro o i, para meu menor valor encontrado que esta em lista[mt]
        lista[mt]= temp; //mt agora tem o valor antigo de i
    }
    for(int k=0; k < lista.size(); k++){
        cout << lista[k] << endl;
    }
}
