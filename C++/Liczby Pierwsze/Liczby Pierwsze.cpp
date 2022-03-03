// Liczby Pierwsze.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int main()
{
    int iloscLiczb = 0;
    int iloscLiczbPierwszych = 0;
    int liczbaNaturalna = 2;
    int dzielnik = 2;

    cout << "Ile liczb Pierwszych Chcesz Wyświetlić?: ";
    cin >> iloscLiczb;
    cout << endl << "Liczby Pierwsze: ";



    while (iloscLiczbPierwszych < iloscLiczb)
    {

        while (dzielnik < liczbaNaturalna)
        {
            if (liczbaNaturalna % dzielnik == 0)
            {
                dzielnik = 2;
                liczbaNaturalna++;
                break;
            }
            dzielnik++;
        }
        if(dzielnik >= liczbaNaturalna)
        {
            cout << liczbaNaturalna << ",";
            dzielnik = 2;
            liczbaNaturalna++;
            iloscLiczbPierwszych++;
        }
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
