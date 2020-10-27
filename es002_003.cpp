/**
 * Esercizio – “menù operazioni su interi"
 *
 * Scrivere un programma che permetta di eseguire le seguenti semplici operazioni su un numero intero
 *  n (n dato di input):
 *  1. calcolo del valore assoluto di n
 *  2. quadrato di n
 *  3. sommatoria da 1 a n
 *  4. fattoriale di n
 *  5. smetti
 *
 *Il programma presenta all'utente il menù delle possibili operazioni, esegue l'operazione scelta e quindi
 *ripete dall'inizio, finché non viene scelta l'operazione 5.
 *N.B. Utilizzare (obbligatoriamente) il costrutto switch per effettuare la scelta dell'operazione da
 *eseguire. Controllare la correttezza di tutti i dati immessi (obbligatorio il controllo del valore,
 *facoltativo il controllo del tipo) e ripetere in caso di input non valido.
 *
 * @author Joseph M.
 * @version 1.0
 */

#include <iostream>
#include <cstdlib>
#include <math.h>

//used for I/O data.
using namespace std;

const int ABSOLUTE = 1;
const int SQUARE = 2;
const int SUM = 3;
const int FACT = 4;
const int SHUTDOWN = 5;

int factorial(int n) {
    // single line to find factorial
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

int sum(int n) {
    // single line to find factorial
    return (n == 1 || n == 0) ? 1 : factorial(1 + n - 1);
}

int main() {
    int option = 0;
    int value = 0;

    do {
        cout << "Scegli una delle operazioni seguenti: " << endl;
        cout << "\t 1. valore assoluto" << endl;
        cout << "\t 2. quadrato" << endl;
        cout << "\t 3. sommatoria" << endl;
        cout << "\t 4. fattoriale" << endl;
        cout << "\t 5. esci" << endl;
        cout << "Operazione scelta? ";
        cin >> option;

        switch (option) {

            case ABSOLUTE:
                cout << "Inserire un numero intero: ";
                cin >> value;
                cout << " Il valore assoluto di " << value << " e' " << abs(value) << endl;
                break;

            case SQUARE:
                cout << "Inserire un numero intero (>= 0):";
                cin >> value;
                cout << "Il quadrato di " << value << " e' " << pow(value,2) << endl;
                break;

            case SUM:
                cout << "Inserire un numero intero (>= 0):";
                cin >> value;

                if (value <= 0) {
                    cout << "Dato non valido" << endl;
                }

                cout << "Il somma di " << value << " e' " << sum(value) << endl;
                break;

            case FACT:
                do {
                    cout << "Inserire un numero intero (>= 0):";
                    cin >> value;

                    if (value <= 0) {
                        cout << "Dato non valido" << endl;
                    }
                } while (value <= 0);

                cout << "Il fattoriale di " << value << " e' " << factorial(value) << endl;
                break;

            case SHUTDOWN:
                break;

            default:
                cout << "Scelta non valida" << endl << endl;
                break;
        }

    } while (option != SHUTDOWN);

    cout << endl << "Arrivederci!!" << endl;
    return 0;
}

