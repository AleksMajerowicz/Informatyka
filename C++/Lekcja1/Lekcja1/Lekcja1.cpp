// Lekcja1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int main()
{
    /*for (int i = 0; i <= 10; i++)
    {
        cout << i;
    }

    int a = 0;
    while (a < 5)
    {
        cout << a;
        a += 1;//=a++;
    }

    int b = 0;
    do
    {
        cout << b;
        b = b + 1;//= b +=1 = b++
    } while (b <= 7);

    int c = 0;
    do
    {
        c = c + 1;//= b +=1 = b++
        cout << c;
    } while (c <= 7);
    */

    /*for (int i = 1; i <= 15; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    int a = 3;
    while (a <= 9)
    {
        cout << a << " ";
        a += 2;
    }
    cout << endl;

    int b = 10;
    do
    {
        cout << b << " ";
        b += 3;
    } while ( b <= 16);
    */

    //Żeby sprawdzić,czy nasza liczba jest parzysta,trzeba zrobić modulo(resztę z dzielenia) przez 2
    int x = 6;
    if (x % 2 == 0)
    {
        cout << "Parzysta :D";
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
