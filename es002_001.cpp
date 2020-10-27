/**
 * Esercizio – “conversione pollici – centimetri ripetuta"
 *
 * Scrivere un programma che esegue ripetutamente la conversione
 * da pollici a cm e viceversa (n.b.: 1 pollice = 2.54 cm).
 * Controllare la validità della scelta fatta e ripetere
 * in caso di scelta non valida.
 *
 * @author Joseph M.
 * @version 1.0
 */

#include <iostream>

//used for I/O data.
using namespace std;

const int INCHES_TO_CM = 1;
const int CM_TO_INCHES = 2;
const int SHUTDOWN = 3;

const double CM_IN_INCHES = 2.54;

int main() {
    cout << "Programma di conversione pollici <---> cm" << endl;

    int option = 0;
    double valueToConvert = 0;
    do {
        cout << "Scegli un'operazione: " << endl;
        cout << "\t 1. conversione pollici --> cm" << endl;
        cout << "\t 2. conversione cm --> pollici" << endl;
        cout << "\t 3. smetti" << endl;
        cout << "Scelta: ";
        cin >> option;

        switch (option) {
            case INCHES_TO_CM:
                cout << "Fornire il numero in pollici: ";
                cin >> valueToConvert;
                cout << valueToConvert << " pollici equivalgono a " << valueToConvert * CM_IN_INCHES << " cm" << endl
                     << endl;
                break;

            case CM_TO_INCHES:
                cout << "Fornire il numero in cm: ";
                cin >> valueToConvert;

                if (valueToConvert <= 0) {
                    cin >> valueToConvert;
                    cout << "";
                } else {
                    cout << valueToConvert << " cm equivalgono a " << valueToConvert / CM_IN_INCHES << " pollici"
                         << endl
                         << endl;
                }
                break;

            case SHUTDOWN:
                break;

            default:
                cout << "Scelta non valida – ripeti" << endl << endl;
                break;
        }

    } while (option != SHUTDOWN);

    cout << endl << "Arrivederci!!" << endl;
    return 0;
}