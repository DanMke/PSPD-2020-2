#include <iostream>
#include <vector>
#include <cstdlib>
// #include <bits/stdc++.h>

using namespace std;

/*
maximo de variaveis = 2**20
maximo de clausulas = 2**27
maximo de literais em uma clausula eh o maximo de variaveis da formula
possibilidades = 2**n (n = numero de variaveis)
minimo de 1 variavel
*/

int main() {
    cout << "Hello World!" << endl << "SAT - Satisfabilidade Booleana" << endl;

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

    int numberClauses = 0, numberVariables = 0, numberNotSatisfiedClauses = 0;
    vector<vector<int>> clauses;
    vector<int> valuation;
    // v[0] = 1 2 -3

    cout << "Number of variables:" << endl;
    cin >> numberVariables;
    cout << "Number of clauses:" << endl;
    cin >> numberClauses;

    cout << "Clauses:" << endl;

    for (int i = 0; i < numberClauses; i++) {
        vector<int> auxVector;
        while (true) {
            int temp;
            cin >> temp;
            if (temp == 0) {
                break;
            }
            auxVector.push_back(temp);
        }
        clauses.push_back(auxVector);
    }

    for (vector<int> clause : clauses) {
        cout << "clause:" << endl;
        for (int variable : clause) {
            cout << variable << " ";
        }
        cout << endl;
    }

    cout << "Valuation:" << endl;
    for (int i = 0; i < numberVariables; i++) {
        int temp;
        cin >> temp;
        valuation.push_back(temp);
    }

    // percorrer o vetor de clausulas, pegando cada variavel de uma clausula e verificando com o valuation
    int counter = 0;
    for (vector<int> clause : clauses) {
        int clauseSize = clause.size();
        for (int variable : clause) {
            // variavel 1 = valuation[0]
            int variableValuation = abs(variable); // -1 >> 1
            if (variable == valuation[variableValuation - 1]) { // valuation[1 - 1]
                break;
            } 
            // se variable == -1 (negado) e valuation[1 - 1] == 1 (positivo) ... valuation[2 - 1] == -2 (negado)
            clauseSize--;
        }
        if (clauseSize == 0) {
            numberNotSatisfiedClauses++;
            cout << "Clausula " << counter + 1 << " Não Satisfeita" << endl;
        } else {
            cout << "Clausula " << counter + 1 << " Satisfeita" << endl;
        }
        counter++;
    }

    cout << "Number of Not Satisfied Clauses: " << numberNotSatisfiedClauses << endl;

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