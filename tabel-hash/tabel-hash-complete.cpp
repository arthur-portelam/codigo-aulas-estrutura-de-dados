#include <iostream>
#include <list>
#include <cstring>
using namespace std;

class HashTable{
    private:
        static const int hashGroups = 10;
        list<pair<int, string>> table [hashGroups]; //List 1, Index 0, List 2, Index 1...
    
    public:
        bool isEmpty() const;
        int hashFunction(int key);
        void insertItem(int key, string value);
        void removeItem(int key);
        string searchTable(int key);
        void printTable();

};

bool HashTable::isEmpty() const{
    int sum{};
    //somar tudo dentro que tem dentro da tabela
    for(int i{}; i < hashGroups; i++){
        sum+= table[i].size();
    }
    if (!sum) return true; // verifica se é igual a 0, se for 0 a condição é válida e é executado

    return false;
}

int HashTable::hashFunction(int key){
    return key % hashGroups; // key = 905, in returnr, this function will spit out 5.
}

void HashTable::insertItem(int key, string value){
    int hashValue = hashFunction(key);
    auto& cell = table[hashValue]; //copy of the location where the key will kept
    auto bItr = begin(cell); // interator to the beginnig of the list (cell) 
    bool keyExists = false;
    for (; bItr != end(cell); bItr++){
        if (bItr -> first == key){
            keyExists = true;
            bItr -> second == value;
            cout << "[WARING] key exists. Value repleced " << endl;
            break;
        }
    }
    if(!keyExists){
        cell.emplace_back(key, value);
    }
    return;
}

void HashTable::removeItem(int key){
    int hashValue = hashFunction(key);
    auto& cell = table[hashValue]; //copy of the location where the key will kept
    auto bItr = begin(cell); // interator to the beginnig of the list (cell) 
    bool keyExists = false;
    for (; bItr != end(cell); bItr++){
        if (bItr -> first == key){
            keyExists = true;
            bItr= cell.erase(bItr);
            cout << "[INFO] key found, Pair removed " << endl;
            break;
        }
    }
    if(!keyExists){
        cout << "[WARING] key not found, Pair not removed " << endl;
    }
    return;
}

string HashTable::searchTable(int key){
    int hashValue = hashFunction(key);
    auto& cell = table[hashValue];
    
    for (auto bItr = begin(cell); bItr != cell.end(); bItr++){
        if (bItr -> first == key){
            cout << "[INFO] key: " << bItr -> first <<  "Value:" << bItr -> second << endl;
            return bItr -> second; //value associate with the key
        }
    }
    cout << "[WARING] key not found" << endl;
    return "";

}

void HashTable::printTable(){
    for (int i=0; i < hashGroups; i++){
        if (table[i].size() == 0) continue;

        for(auto bItr = table[i].begin(); bItr != table[i].end(); bItr++){
            cout << "[INFO] key: " << bItr -> first << "Value: " << bItr -> second << endl; 
        }
    }
    return;
}