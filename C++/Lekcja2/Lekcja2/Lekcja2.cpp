// Lekcja2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int main()
{
    int casse, carCase;
    float suma = 0;
    do
    {
        cout << "Samochody Tesli" << endl;
        cout << "0. Wyjście" << endl;
        cout << "1. Model S" << endl;
        cout << "2. Model X" << endl;
        cout << "3. Model 3" << endl;
        cin >> casse;

        switch (casse)
        {
        case 1:
            cout << "Zasięg to 637km,do setki rozpędza się w 2,1s,a jego maksymalna prędkość to 322km/h.Jego moc szczytowa to 1020hp. Kosztuje 475,990 tyś zł" << endl;
            cout << "Chcesz go kupić?" << endl << "1. Tak" << endl << "2. Nie(Kliknij cokowliek po za 1)" << endl;
            cin >> carCase;

            if (carCase == 1)
            {
                suma += 475.990;
                break;
            }
            else
            {
                break;
            }
        case 2:
            cout << "Zasięg to 536km,do setki rozpędza się w 2,6s,a jego maksymalna prędkość to 322km/h.Jego moc szczytowa to 1020hp. Kosztuje 514,990 tyś zł" << endl;
            cout << "Chcesz go kupić?" << endl << "1. Tak" << endl << "2. Nie(Kliknij cokowliek po za 1)" << endl;
            cin >> carCase;

            if (carCase == 1)
            {
                suma += 514.990;
                break;
            }
            else
            {
                break;
            }
        case 3:
            cout << "Zasięg to 614km,do setki rozpędza się w 3,3s,a jego maksymalna prędkość to 261km/h.Jego moc szczytowa to 1020hp. Kosztuje 209,990 tyś zł" << endl;
            cout << "Chcesz go kupić?" << endl << "1. Tak" << endl << "2. Nie(Kliknij cokowliek po za 1)" << endl;
            cin >> carCase;

            if (carCase == 1)
            {
                suma += 209.990;
                break;
            }
            else
            {
                break;
            }
        }
    } while (casse != 0);

    cout << "Twoje zamówienie wynosi: " << suma << "tyś zł" << endl;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
