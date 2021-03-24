#include <iostream>
#include <vector>
#include <map>
#include <cstdlib>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

int numberClauses = 0, numberVariables = 0, numberValuations = 0;
vector<map<int,int>> valuations;
vector<map<int,int>> clauses;
int actualIteration = 0;

/*
maximo de variaveis = 2**20
maximo de clausulas = 2**27
maximo de literais em uma clausula eh o maximo de variaveis da formula
possibilidades = 2**n (n = numero de variaveis)
minimo de 1 variavel
*/

// Comparator function to sort pairs 
// according to second value 
bool cmp(pair<int, int>& a, pair<int, int>& b) { 
    return a.second != b.second?  a.second > b.second : abs(a.first) > abs(b.first);
} 
  
// Function to sort the map according 
// to value in a (key-value) pairs 
void sortAndPrintLits(map<int, int>& lits) { 
  
    // Declare vector of pairs 
    vector<pair<int, int> > sortedPair; 
  
    // Copy key-value pair from Map 
    // to vector of pairs 
    for (auto& it : lits) { 
        sortedPair.push_back(it); 
    } 
  
    // Sort using comparator function 
    sort(sortedPair.begin(), sortedPair.end(), cmp); 

    // Print the sorted value 
    cout << "[lits]";
    for (auto& it : sortedPair) { 
        cout << " " << it.first;
    }
    cout << endl;
} 

void verifyClauses() {
    int numberNotSatisfiedClauses = 0;
    map<int,int> lits;
    vector<int> indexesOfClausesNotSatisfied;
    for (int i = 0; i < numberClauses; i++) {
        bool satisfied = false;
        vector<int> litsTemp;
        for (auto it = clauses[i].begin(); it != clauses[i].end(); it++) {
            if (valuations[actualIteration][it->first] == clauses[i][it->first]) {
                satisfied = true;
                break;
            } else {
                litsTemp.push_back(clauses[i][it->first]);
            }
        }
        if (!satisfied) {
            numberNotSatisfiedClauses++;
            indexesOfClausesNotSatisfied.push_back(i);
            for (int l : litsTemp) {
                lits[l]++;
            }
        }
    }
    if (numberNotSatisfiedClauses == 0) {
        cout << "SAT" << endl;
    } else {
        cout << "[" << numberNotSatisfiedClauses <<" clausulas falsas]";
        for (int index : indexesOfClausesNotSatisfied) {
            cout << " " << index;
        }
        cout << endl;
        sortAndPrintLits(lits);
    }
    actualIteration++;
}

void verifyCases() {
    for (int i = 0; i < numberValuations; i++) {
        verifyClauses();
    }
}

int main() {
    // cout << "Hello World!" << endl << "SAT - Satisfabilidade Booleana" << endl;

    // Quantas variaveis eu tenho?
    // Quantas clausulas eu tenho? (o 0 representa o fim de uma clausula)
    // os numerais representam os literais das variaveis, quando positivo representa o literal positivo e quando negativo o literal negado

    // ex input: 2 (variaveis) 3 (clausulas)
    // 1 2 0
    // -1 2 0
    // -1 -2 0
    // valoracao ex: 1 2 (1 verdadeiro e 2 verdadeiro)

    // output:
    // quantas clausulas nao foram satisfeitas
    // uma clausula eh satisfeita quando pelo menos um literal tiver valoracao verdadeira

    
    // v[0] = 1 2 -3
    
    // cout << "Number of variables:" << endl;
    cin >> numberVariables;
    // cout << "Number of clauses:" << endl;
    cin >> numberClauses;

    // cout << "Clauses:" << endl;

    for (int i = 0; i < numberClauses; i++) {
        map<int, int> auxMap;
        while (true) {
            int temp;
            cin >> temp;
            if (temp == 0) {
                break;
            }
            auxMap[abs(temp)] = temp;
        }
        clauses.push_back(auxMap);
    }

    // cout << "clauses:" << endl;
    // for (int i = 0; i < numberClauses; i++) {
    //     for (auto it = clauses[i].begin(); it != clauses[i].end(); it++) {
    //         cout << it->first << ':' << it->second << " ";
    //     }
    //     cout << endl;
    // }

    // cout << "Valuation:" << endl;
    string reader;
    while (!cin.eof() && cin >> reader) {
        if (reader.compare("full") == 0) {
            map<int, int> temporaryMap;
            for (int i = 0; i < numberVariables; i++) {
                int temp;
                cin >> temp;
                temporaryMap[abs(temp)] = temp; // captura o valor absoluto para o map e mapeando para o valor real
            }
            valuations.push_back(temporaryMap);
        } else if (reader.compare("flip") == 0) {
            int temp;
            cin >> temp;
            map<int, int> temporaryMap;
            temporaryMap.insert(valuations[numberValuations - 1].begin(), valuations[numberValuations - 1].end()); // copiou o anterior
            temporaryMap[temp] = -temporaryMap[temp];
            valuations.push_back(temporaryMap);
        }
        numberValuations++;
    }
    // cout << "valuations: " << numberValuations << endl;

    verifyCases();

    return 0;
}


// ler ate o 0 que eh o final da clausula
// v[0] = 1 2 3
// v[1] = 1 -2 -3
// v[2] = -1 -2 -3







// ---------------------------------------------
// input
/*
2 3 -> 2 variaveis (variaveis iniciam em 1) e 3 perguntas (indices das perguntas comecam em 0)

1 2 0 -> perguntas encerrando com 0
1 -2 0
-1 -2 0

full -1 -2 -> valoração: valores para as variaveis (valor verdadeiro)
flip 2 -> trocar valor da variavel 2 (*(-1)) na valoração
flip 1
flip 2
*/

// ---------------------------------------------
// output -> um para cada full/flip
/*
[6 clausulas falsas] 7 44 47 64 73 88 -> indices das perguntas iniciando com 0
[lits] -19 10 17 9 -16 15 -14 13 -6 5 -4 1 -> literais ordenados pelo numero de vezes em que aparece nas clausulas falsas

ou 

SAT
*/