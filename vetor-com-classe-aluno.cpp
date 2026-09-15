#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Aluno
{
    private:
        string ra,nome;
        int idade;
    public:
        Aluno(){
            idade=0;
        }
        ~Aluno(){}
        void set_dados(){
            cout << "\nR.A: ";
            getline(cin >> ws,nome);
            cout << "\nNome: ";
            getline(cin >> ws,ra);
            cout << "\nIdade: ";
            cin >> idade;
        }
        void print_dados(){
            cout << ra << "\t" << nome << "\t" << idade << "\n";
        }
        string ret_ra(){
            return ra;
        }
    
};



int main()
{
    Aluno temp;
    vector <Aluno> Escola;
    string r,rac;
    
    do {
        temp.set_dados();
        Escola.push_back(temp);
        cout << "\nCadastrar outro? ";
        getline(cin >> ws,r);
    }while(r=="sim");
    for (int a=0;a<Escola.size();a++){
        Escola.at(a).print_dados();
        cout << "\n\n";
    }
    
    cout << "\nDigite o R.A do aluno que deseje apagar: ";
    getline(cin >> ws,rac);
     for (int a=0;a<Escola.size();a++){
        if (rac == Escola.at(a).ret_ra())
            Escola.erase(Escola.begin()+a);
    }
    
    
    
    return 0;
}
