// Lekcja4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int main()
{
    /*
    int worek[10];

    cin >> worek[0];
    cin >> worek[1];
    cin >> worek[2];
    cin >> worek[3];
    cin >> worek[4];
    cin >> worek[5];
    cin >> worek[6];
    cin >> worek[7];
    cin >> worek[8];
    cin >> worek[9];
    
    int worek[10];
    int licznik = 0;

    cout << "Podaj Liczby: ";
    do
    {
        cin >> worek[licznik];
        licznik++;
    } while (licznik < 10);

    cout << "Podałeś nastepujące liczby: ";
    licznik = 0;

    do
    {
        cout << worek[licznik] << ",";
        licznik++;
    } while (licznik < 10);
    */

    int tab[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> tab[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
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
