#include <iostream>
#include <string>
#include <deque>

using namespace std;


class Paciente {
    private:
        string nome;
        int idade, prioridade;
    public:
        Paciente(){
            idade = 0;
        }
        ~Paciente(){}
        void set_dados(){
            cout << "\nDigite o nome do paciente: ";
            getline (cin >> ws, nome);
            cout << "\nDigite a idade do paciente: ";
            cin >> idade;
            cout << "\nDigite a prioridade do paciente: ";
            cin >> prioridade;
        }
        void mostrar_dados(){
            cout << "\nNome: " << nome;
            cout << "\nIdade: " << idade;
            cout << "\nPrioridade: " << prioridade;
        }
        int ret_prioridade(){
            if ( prioridade == 1){
                return 1;
            } else if ( prioridade == 2){
                return 2; 
            }
        }
};
        
int main (){
    deque <Paciente> fila;
    Paciente temp;
    string r;

    do{
        cout << "\nDigite os dados do paciente: ";
        temp.set_dados();
        if( temp.ret_prioridade() == 1){
            fila.push_front(temp);
        } else {
            fila.push_back(temp);
        }
        cout << "\nDeseja cadastrar mais alguma paciente: (s/n)";
        getline (cin >> ws,r);
    }while (r== "s" || r== "S");

    while (!fila.empty()){
        temp = fila.front();
        temp.mostrar_dados();
        fila.pop_front();
    }

    return 0;
}

    
