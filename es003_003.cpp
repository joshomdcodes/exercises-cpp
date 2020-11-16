/**
 * Esercizio – “concorrenti”
 *
 * Scrivere un programma che legge i punteggi ( = numeri reali da 1 a 10) di due prove
 * effettuate da n concorrenti (n dato di input, max. 20) e determina il vincitore sapendo
 * che il punteggio totale di ogni concorrente è dato dalla media aritmetica delle due
 * prove. N.B. Si assuma per semplicità che non ci siano parimerito. Controllare
 * obbligatoriamente la correttezza dei valori di tutti i dati immessi e ripetere in caso di
 * input non corretto.
 * SUGG. Memorizzare i punteggi in due array, uno per la prima prova l'altro per la
 * seconda prova, in modo tale che l'elemento di indice i-1 di ciascun array contenga il
 * punteggio del concorrente i ...

 * @version 1.0
 */

#include <iostream>

//used for I/O data.
using namespace std;

const int MAX_TEST = 2;

int main() {

    int maxCandidates;
    cout << "Quanti concorrenti? ";
    cin >> maxCandidates;

    double candidates[MAX_TEST][maxCandidates];

    for (int k = 0; k < MAX_TEST; k++) {
        switch (k + 1) {
            case 1:
                cout << "Prima prova:" << endl;
                break;

            case 2:
                cout << "Seconda prova:" << endl;
                break;
        }

        for (int i = 0; i < maxCandidates; i++) {
            cout << "Votazione concorrente numero " << i + 1 << ":";
            cin >> candidates[k][i];

            if (candidates[k][i] < 0) {
                do {
                    cout << "Resinserire votazione concorrente numero " << i + 1 << ":";
                    cin >> candidates[k][i];
                } while (candidates[k][i] < 0);
            }
        }
    }

    double maxMedia = 0;
    int winter = 0;
    for (int j = 0; j < maxCandidates; ++j) {
        double temp = 0;
        for (int i = 0; i < MAX_TEST; ++i) {
            temp = temp + candidates[i][j];
        }

        // cout << "concorrente " << j << " media: " << temp / 2 << " max: " << maxMedia << endl;
        if (temp / 2 > maxMedia) {
            maxMedia = temp / MAX_TEST;
            winter = j;
        }
    }

    cout << "Il vincitore e' il concorrente numero " << winter + 1 << endl;
    cout << "Media del vincitore:" << maxMedia;
    return 0;
}