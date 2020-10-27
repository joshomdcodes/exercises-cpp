/**
 * Esercizio – controllo data
 *
 * Scrivere un programma che legge da std input una data, g m a,
 * e controlla che si tratti di una data corretta.
 * In particolare, il programma controlla che il giorno sia in
 * accordo con il mese, tenendo anche conto degli anni bisestili.
 * Si ricorda che, in un anno bisestile, febbraio ha 29 giorni e
 * che sono bisestili gli anni non secolari il cui numero è
 * divisibile per 4 o gli anni secolari il cui numero è divisibile
 * per 400; ad esempio, 2012 (non secolare divisibile per 4) e
 * 1600 (secolare divisibile per 4) sono bisestili,
 * mentre 2011 e 2100 non sono bisestili.
 *
 * @author Joseph M
 * @version 1.0
 */

#include <iostream>

//used for I/O data.
using namespace std;

/**
 * Check leap year.
 *
 * @param year
 * @return true is leap year.
 */
bool isLeapYear(int year) {
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

bool isValidYear(int year) {
    return year > 999; //..
}

bool isValidMonth(int month) {
    return month >= 1 && month <= 12;
}

bool isValidDay(int month) {
    return month >= 1 && month <= 31;
}

int main() {

    //equation coefficients.
    double g, m, a = 0;

    //ordinal calendar.
    int daysForMont[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cout << "Immetti la data: ";
    cin >> g;
    cin >> m;
    cin >> a;

    if (!(isValidYear(a) && isValidMonth(m) && isValidDay(g))) {
        cout << "Data errata";
        return 0;
    }

    int i = 1;
    while (i < (sizeof(daysForMont) / sizeof(*daysForMont))) {
        if (m == i) {
            if ((isLeapYear(a) && m == 2 && g <= daysForMont[i] + 1) || g <= daysForMont[i]) {
                cout << "Data corretta";
                break;
            } else {
                cout << "Data errata";
                break;
            }
        }
        i++;
    }

    return 0;
}

