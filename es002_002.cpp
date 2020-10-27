/**
 * Esercizio – controllo data
 *
 * Scrivere un programma che stampi un triangolo rettangolo isoscele utilizzando come carattere di
 * riempimento il carattere ‘*’. La lunghezza l dei cateti del triangolo e' immessa dall'utente (l > 0). In
 * caso di dato di input errato (valore ≤ 0 o tipo del dato non corretto), viene stampato un opportuno
 * messaggio di errore e l’operazione di lettura viene ripetuta. Per la stampa del triangolo utilizzare
 * (obbligatoriamente) stmt for
 *
 * @author Joseph M.
 * @version 1.0
 */

#include <iostream>

//used for I/O data.
using namespace std;


int main() {

    string strCateti = "";
    int cateti = 0;

    cout << "Inserisci la lunghezza dei cateti: ";
    cin >> cateti;

    do {
        if (cateti <= 0 || cin.fail()) {
            cin.clear();

            //clean memory..
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input errato – ripetere immissione dato: ";
            cin >> cateti;
        }
    } while (cateti <= 0);


    //triangle print.
    for (int i = 0; i < cateti; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
