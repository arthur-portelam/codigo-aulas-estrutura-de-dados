#include <iostream>
#include <vector>
#include <string>

using namespace std;



int main()
{
    vector<string> vetor;
    string novo,nome,r;
    int p;
    
    do{
        cout << "\nNome: ";
        getline(cin >>ws,nome);
        vetor.push_back(nome);
        cout << "\nDeseja inserir outro nome: ";
        getline(cin >> ws,r);
    }while(r == "sim");
    
    cout << "\nTodo mundo...\n";
    for (int i = 0; i < vetor.size(); i++ ){
        cout << "\nPos: " << i+1 << "\nNome: " << vetor.at(i);
    }
    cout << "\n\nQual posição voce deseja apagar: ";
    cin >> p;
    vetor.erase(vetor.begin()+ (p-1));
    
    cout << "\n\nNova lista...\n";
    for (int i= 0 ; i < vetor.size(); i++ ){
        cout << "\nPos: " << i+1 << "\nNome: " << vetor.at(i);
    }
    
    cout << "\nDigite em que posição vc deseja inserir um nome: ";
    cin >> p;
    cout << "\nDigite o nome a inserir: ";
    getline(cin >> ws,novo);
    vetor.insert(vetor.begin()+ (p-1),novo);
     cout << "\n\nNova lista...\n";
    for (int i= 0 ; i < vetor.size(); i++ ){
        cout << "\nPos: " << i+1 << "\nNome: " << vetor.at(i);
    }
    
    
    
    return 0;
}
