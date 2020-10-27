/**
 * Esercizio – “equazione di 2° grado”
 *
 * Scrivere un programma che calcola le radici di un'equazione di 2° grado a x^2 + b x + c = 0.
 * I coefficienti dell'equazione sono letti da std input.
 * Se il discriminante è negativo il programma stampa un opportuno messaggio e quindi termina.
 * Controllare e distinguere anche il caso di discriminante = 0 (soluzioni coincidenti).
 *
 * @author Joseph M.
 * @version 1.0
 */

//include for I/O data.
#include <iostream>

//include for pow and sqrt functions.
#include <cmath>

using namespace std;

/**
 * Calculate delta of equation
 *
 * @param a
 * @param b
 * @param c
 * @return delta resul.
 */
double delta(double a, double b, double c) {
    return pow(b, 2) - (4 * a * c);
}

/**
 * Calculate x with squared delta value
 *
 * @param a
 * @param b
 * @param c
 * @return delta resul.
 */
double delta(double a, double b, double c, double squaredDelta) {
    return (-b + squaredDelta) / (2 * a);
}

int main() {

    //equation coefficients.
    double a, b, c = 0;

    cout << "Risoluzione dell'equazione di II grado" << endl;
    cout << "\t a x^2 + b x + c = 0" << endl << endl;

    cout << "Inserisci i coefficienti dell'equazione:" << endl;
    cout << "\t a = ";
    cin >> a;

    cout << "\t b = ";
    cin >> b;

    cout << "\t c = ";
    cin >> c;

    //check the delta value.
    double deltaResult = delta(a, b, c);
    cout << "Soluzioni:" << endl;

    if (deltaResult > 0) {
        double x1 = delta(a, b, c, sqrt(deltaResult) * 1);
        double x2 = delta(a, b, c, sqrt(deltaResult) * -1);

        cout << "x_1 = " << x1 << endl;
        cout << "x_2 = " << x2 << endl;
    } else if (deltaResult == 0) {
        double x = delta(a, b, c, sqrt(deltaResult) * 1);
        cout << "x_1 = x_2 = " << x << endl;
    } else {
        cout << " Discriminante negativo! " << endl;
    }

    return 0;
}

