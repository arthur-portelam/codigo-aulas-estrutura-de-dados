#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    queue <int> q1,q2,q3;
    string r;
    int temp;
    
    do{
        cout << "\nDigite um numero para a fila q1:  " << endl;
        cin >> temp;
        q1.push(temp);
        cout << "\nDeseja colocar mais algum numero? (sim/nao)";
        getline (cin >> ws,r);
    }while(r == "sim" ||r == "s" ||r == "Sim" ||r == "SIM" );
    
    
    do{
        cout << "\nDigite um numero para a fila q2: " << endl;
        cin >> temp;
        q2.push(temp);
        cout << "\nDeseja colocar mais algum numero? (sim/nao)";
        getline (cin >> ws,r);
    }while(r == "sim" ||r == "s" ||r == "Sim" ||r == "SIM" );
    
    while (!q1.empty() && !q2.empty()){
                q3.push(q1.front());
                q1.pop();
                
                q3.push(q2.front());
                q2.pop();
    }
    while (!q1.empty()){
        q3.push(q1.front());
        q1.pop();
    }
    while (!q2.empty()){
        q3.push(q2.front());
        q2.pop();
    }
    
    while(!q3.empty()){
        cout << "Imprimindo q3: " << endl;
        cout << q3.front() << " -- ";
        q3.pop();
    }

    cout << endl;
    
    return 0;
}