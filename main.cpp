#include <iostream>
#include <vector>
#include <string>

using namespace std;



int main()
{
    vector<int> vetor;
    vetor.push_back(1);
    vetor.push_back(2);
    vetor.push_back(3);
    vetor.push_back(4);
    
    cout << "\n" << vetor.size();
    cout << "\nImprimindo elementos na ordem inserida: " << endl ;

    for (int i; i < vetor.size(); i++ ){
        cout << vetor.at(i);
    }
    
    
    
    return 0;
}