def login():
    username = input("Inserisci il tuo nome utente: ")
    password = input("Inserisci la tua password: ")

    if username == "admin" and password == "segreto":
        print("Accesso consentito.")
    else:
        print("Nome utente o password errati. Accesso negato.")

login()