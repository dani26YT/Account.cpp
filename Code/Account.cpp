#include <iostream>
#include <string>

using namespace std;

bool login() {
    string username, password;

    cout << "Inserisci il tuo nome utente: ";
    cin >> username;

    cout << "Inserisci la tua password: ";
    cin >> password;

    if (username == "Administrator" && password == "segreto") {
        cout << "Accesso consentito." << endl;
        return true;
    } else {
        cout << "Nome utente o password errati. Accesso negato." << endl;
        return false;
    }
}

int main() {
    login();

    return 0;
}