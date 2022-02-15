// Powtórzenie.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int main()
{
    //Liczby całkowite zapisujemy w short'cie,int'cie oraz logn'u
    short liczba1 = 5;
    int liczba2 = 7;
    long liczba3 = 3;

    //liczba zmiennoprzecinkowa
    float liczba4 = 5.6453;
    double liczba5 = 7.7353;

    cout << "Wyświetlanie danych: " << endl;
    cin >> liczba5;

    int a = 0;
    while (a <= 3)
    {
        a++;
        cout << a;
    }
    
    cout << endl;
    
    int b = 0;
    do
    {
        cout << b;
        b += 1;
    } while (b < 3);

    int c = 2;
    switch (c)
    {
    case 1:
        cout << "exe1";
        break;
    case 2:
        cout << "exe2";
        break;
    default:
        cout << "default.exe";
        break;
    }

    cout << endl;

    for (int i = 0; i <= 3; i++)
    {
        cout << i;
    }

    cout << endl;

    int g;
    do
    {
        cout << "Podaj liczbę: ";
        cin >> g;

        if (g != 6)
        {
            cout << g;
        }
        cout << endl;

    } while (g != 6);

    for (int i = 0; i <= 10; i++)
    {
        if (i >= 5 && i <= 9)
        {
            cout << "-";
        }
        else
        {
            cout << i;
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
