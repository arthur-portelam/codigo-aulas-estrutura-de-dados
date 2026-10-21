#include <iostream>
#include <queue>
#include <string>

using namespace std;


void simularAtendimento(queue<int>& prioritario, queue<int>& comuns){
    while( prioritario.size() >=2 && !comuns.empty()){
        cout << prioritario.front() << endl;
        prioritario.pop();
        cout << prioritario.front() << endl;
        prioritario.pop();
        
        cout << comuns.front() << endl;
        comuns.pop();
    }
    
    while (!prioritario.empty()){
        cout << prioritario.front() << endl;
        prioritario.pop();
    }
    while (!comuns.empty()){
        cout << comuns.front() << endl;
        comuns.pop();
    }
}

int main()
{
    queue <int> prioritario, comuns;
    string r,pac;
    int temp;
    
    do{
        cout << "\nDigite o ID do paciente: ";
        cin >> temp;
        cout << "\nO paciente de e de prioridade?";
        getline (cin >> ws,pac);
        if(pac == "sim"){
            prioritario.push(temp);
        }else if (r == "nao"){
            comuns.push(temp);
        }
        cout << "\nDeseja cadastrar outro paciente? (sim/nao)";
        getline(cin >> ws,r);
    }while(r == "sim");
    
    simularAtendimento (prioritario, comuns);
    
    cout << endl;
    
    return 0;
}