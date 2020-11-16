/**
 * Esercizio – “rotazioni”
 *
 * Scrivere un programma che letta una sequenza di caratteri (max. 100), stampi tutte le
 * rotazioni della sequenza.
 * Ogni rotazione è ottenuta stampando tutti i caratteri della sequenza a partire da uno
 * qualsiasi dei suoi carattere interni (diverso per ogni rotazione) e ricominciando da capo
 * al termine della sequenza.
 * SUGG. Si consideri come carattere iniziale prima il primo carattere della sequenza
 * originale, poi il secondo, e così via fino all'ultimo. Memorizzare la sequenza letta in un
 * array di caratteri.
 *
 * @version 1.0
 */

#include <iostream>

//used for I/O data.
using namespace std;

const int MAX_CHARACTERS = 100;

int main() {
    char chars[MAX_CHARACTERS];
    cout << "Inserisci la sequenza di caratteri terminata da 'a capo'" << endl;
    cin >> chars;

    int length = 0;
    while (chars[length] != '\0') {
        //cout << chars[length];
        length++;
    }

    cout << "Rotazioni:" << endl;
    for (int i = 0; i < length; i++) {
        int k = i;
        for (int j = 0; j < length; j++) {
            if (chars[k] == '\0') {
                k = 0;
            }

            if (k > length) {
                break;
            }

            cout << chars[k];
            k += 1;
        }
        cout << endl;
    }


    return 0;
}