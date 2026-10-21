/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> data;
    int temp, n;
    string r;
    
    do{
        cout << "\nDigite um numero inteiro: ";
        cin >> n;
        data.push_back(n);
        cout << "\nDeseja inserir outro numero (sim/nao)? ";
        cin >> r;
    }while(r=="sim");
    
    cout << "\nEntrei no borbulhamento ";
    for(int i=0; i<data.size()-1; i++)
        for(int j=data.size()-1; j>i; j--)
            if(data[j] < data[j-1]){
                temp=data[j];
                data[j]=data[j-1];
                data[j-1]=temp;
            }
    cout << "\nPronto ta feito!!! ";
    for (int a=0; a<data.size(); a++)
        cout << data[a] << " ";
        

    return 0;
}
