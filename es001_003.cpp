/**
 * Esercizio - “media pesata”
 *
 * Scrivere un programma che legge da std input una sequenza di voti (in trentesimi), ciascuno
 * con i propri CFU, e quindi calcola e stampa la media pesata rispetto ai CFU. Il programma
 * accetta soltanto voti compresi tra 18 e 30. L'immissione termina quando si inserisce un voto
 * negativo.
 *
 * n.b. si ricorda che la media pesata si calcola dividendo la somma dei numeri ottenuti dalla
 * moltiplicazione di ciascun voto per i suoi CFU con la somma di tutti i CFU; ad es., (27*6 +
 *  22*12 + 18*9) / (6+12+9) = 21.7777).
 *
 * @author Joseph M.
 * @version 1.0
 */

//include for I/O data.
#include <iostream>

using namespace std;


int main() {
    //limiti dei voti.
    const int MAX_VOTO = 30;
    const int MIN_VOTO = 18;

    //variabili per raccogliere gli input del utente.
    double voto = 0;
    double cfu = 0;

    //contatore per voti immessi.
    int counter = 1;

    //a runtime contiene il voto per il cfu.
    double votoPerCfu = 0;

    //a runtime contiene la somma dei cfu.
    double sommaCfu = 0;

    while (voto >= 0) {
        cout << "Immettere un voto (negativo per smettere): ";
        cin >> voto;
        if (voto <= MAX_VOTO && voto >= MIN_VOTO) {
            cout << "Immettere i CFU del corso:";
            cin >> cfu;

            votoPerCfu = votoPerCfu + (voto * cfu);
            sommaCfu = sommaCfu + cfu;

            counter++;
        } else {
            cout << "Il voto deve essere compreso tra "
                 << MIN_VOTO << " e " << MAX_VOTO << endl;
        }
    }

    cout << "Hai immesso " << counter << " voti" << endl;
    cout << "La media pesata dei tuoi voti e': " << votoPerCfu / sommaCfu << endl;

    return 0;
}

