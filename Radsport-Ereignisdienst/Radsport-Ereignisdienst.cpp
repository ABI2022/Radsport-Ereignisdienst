// Radsport-Ereignisdienst.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

int main()
{
        // Programmausschnitte zu 1.1.3:
    List<Fahrer*> ermittleRennergebnis() {
        List<Fahrer*> rg;
        for (int i = teilnehmer.size(); i > 1; i--) {
            Fahrer* tn = teilnehmer.get(i - 1);
            if (rg.size == 0)
                rg.add(tn);
            else
                if (rg.size == 1)
                    if (rg.get(0)->getFahrzeit() > tn->getFahrzeit)
                        rg.add(tn);
                    else
                        rg.add(tn, 1);
                else
                    rgSize = rg.size();
            Time tnTime = tn->getFahrzeit();
            while (rgSize > 0) {
                rgSize--;
                if (rg.get(rgSize)->getFahrzeit < tnTime)
                    rg.add(tn, rgSize + 1);
            }
        }
    }
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
