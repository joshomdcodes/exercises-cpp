/**
 * Esercizio – controllo data
 *
 * Scrivere un programma che legge due sequenze A e B rispettivamente di n ed m numeri interi ≥ 0 (n
 * ed m dati di input) e ne determina e stampa la differenza insiemistica (si ricorda che, dati due insiemi
 * A e B, la differenza tra A e B è uguale all'insieme degli elementi di A che non appartengono anche a B,
 * ovvero, A - B = { x | x ∈ A e x ∉ B }. Stampare un opportuno messaggio se la differenza
 * risulta l’insieme vuoto. N.B. Si assuma per semplicità che i numeri immessi siano tutti diversi tra
 * loro. Controllare la correttezza dei valori di n ed m immessi.
 * Esempi d'uso (dati di input sottolineati)
 *

 * @version 1.0
 */

#include <iostream>

//used for I/O data.
using namespace std;

int main() {
    int sizeA, sizeB = 0;
    cout << "Dammi il numero di elementi della prima sequenza: ";
    cin >> sizeA;
    int groupA[sizeA][2];
    for (int i = 0; i < sizeA; i++) {
        cout << "Dammi un numero:";
        cin >> groupA[i][0];
    }


    cout << "Dammi il numero di elementi della seconda sequenza: ";
    cin >> sizeB;
    int groupB[sizeB];
    for (int i = 0; i < sizeB; i++) {
        cout << "Dammi un numero:";
        cin >> groupB[i];
    }

    for (int i = 0; i < sizeA; i++) {
        for (int j = 0; j < sizeB; j++) {
            if (groupB[j] == groupA[i][0]) {
                groupA[i][1] = 0;
                break;
            } else {
                groupA[i][1] = 1;
            }
        }
    }

    bool isPrinted = false;
    for (int i = 0; i < sizeA; i++) {
        if (groupA[i][1] == 1) {
            cout << groupA[i][0] << " ";
            isPrinted = true;
        }
    }

    if (!isPrinted) {
        cout << "La differenza insiemistica tra le due sequenze date e' l’insieme vuoto" << endl;
    }

    return 0;
}