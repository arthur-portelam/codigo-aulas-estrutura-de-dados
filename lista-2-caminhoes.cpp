/*
Você é o supervisor de um centro de distribuição que utiliza robôs para organizar encomendas.
Você tem dois caminhões parados nas docas: o Caminhão A (que deve levar as cargas mais 
pesadas primeiro) e o Caminhão B (que está atualmente vazio, servindo de reserva). 
Seu objetivo é organizar as caixas por peso e garantir que o caminhão correto saia para a 
entrega. As tarefas que você precisa realizar são:

a) Carregamento Inicial: Peça ao usuário para digitar o peso de 8 caixas que acabaram
de chegar. Armazene esses valores na lista chamada Caminhão_A.

b) Organização por Peso: Para facilitar o empilhamento, organize os pesos no Caminhão_A
em ordem crescente (do mais leve para o mais pesado).

c) Estratégia de Descarregamento: O motorista informou que, para manter a estabilidade 
do caminhão, ele precisa descarregar as caixas na ordem inversa (das mais pesadas para 
as mais leves). na lista Caminhão_A.

d) Troca de Veículo (O Imprevisto): O Caminhão_A apresentou uma falha mecânica antes de 
sair! Você precisa transferir toda a carga organizada para o Caminhão_B (que está vazio) 
de forma instantânea. Trocar o conteúdo entre as duas listas.

e) Manifesto de Carga: Imprima na tela a lista final de pesos que estão agora no 
Caminhão_B, confirmando que a organização (ordem decrescente de peso) foi mantida.
*/

#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    list <int> q1,cA,cB;
    int temp;
    
    while(q1.size() < 8){
        cout << "Digite o peso da caixa: " << endl;
        cin >> temp;
        q1.push_front(temp);
    }
    q1.sort();
    q1.swap (cA);
    cA.reverse();
    cA.swap (cB);
    cout << "Imprimindo o caminhao B: " << endl;
    while(!cB.empty()){
        cout << cB.front() << "  --  ";
        cB.pop_front();
    }

    cout << endl;
    
    return 0;
}