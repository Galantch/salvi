#include <iostream>
#include <string>
using namespace std;
int main()
{
    string risposta;
    cout << "Salvi e' amante delle melanzane?" << endl;
    cin >> risposta;

    while (risposta != "si" && risposta != "no") {
        cout << "ERRORE! Inserire solamente si o no." << endl;
        cin >> risposta;
    }
    if (risposta == "si") {
        cout << "Salvi sei diversamente etero" << endl;
    } else {
        cout << "Fabio e' diversamente etero" << endl;
    }
    return 0;
}

