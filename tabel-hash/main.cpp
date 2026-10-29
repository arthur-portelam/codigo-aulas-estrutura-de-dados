#include <iostream>
#include "Hashtable.h"

int main(){
    HashTable tb;

    if (tb.isEmpty()){
        cout << "\nEsta vazio" << endl;
    } else {
        cout << "\nNao esta vazio";
    }

    tb.insertItem(104, "Ben");
    tb.insertItem(982, "Ross");
    tb.insertItem(124, "Rachel");
    tb.insertItem(337, "Monica");
    tb.insertItem(233, "Phoebe");
    tb.insertItem(220, "Joey");
    tb.insertItem(110, "Chandler");
    tb.insertItem(100, "Saul");
    tb.insertItem(321, "Max");
    tb.insertItem(108, "Jim");

    tb.printTable();
    tb.searchTable(550);
    tb.searchTable(233);
    tb.removeItem(108);
    tb.printTable();

    
    return 0;
}