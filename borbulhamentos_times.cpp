#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Time{
    private: 
        string nome;
        int gols, pontos;
        
    public:
        Time(){
        }
        ~Time(){
        }
        void set_dados(){
            cout << "\nDigite o nome do time: ";
            getline(cin >> ws,nome);
            cout << "\nDigite a quantidade de pontos: ";
            cin >> pontos;
            cout << "\nDigite a quantidade de gols: ";
            cin >> gols;
        }
        void print_dados(){
            cout << nome << "  " << altura;
        }
        string ret_nome(){
            return nome;
        }
        int ret_altura(){
            return altura;
        }
        
};

int main()
{
    Aluno temp;
    vector <Aluno> data;
    string r;
    do{
        temp.set_dados();
        data.push_back(temp);
        cout << "\nDeseja inserir outro numero (sim/nao)? ";
        cin >> r;
    }while(r=="sim");
    
    cout << "\nEntrei no borbulhamento (ordem de altura) ";
    for(int i=0; i<data.size()-1; i++)
        for(int j=data.size()-1; j>i; j--)
            if(data[j].ret_altura() < data[j-1].ret_altura()){
                temp=data[j];
                data[j]=data[j-1];
                data[j-1]=temp;
            }
    cout << "\nPronto ta feito!!! ";
    for (int a=0; a<data.size(); a++)
        data[a].print_dados();

    return 0;
}
