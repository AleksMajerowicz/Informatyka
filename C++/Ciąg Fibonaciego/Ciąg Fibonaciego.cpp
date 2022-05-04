// Ciąg Fibonaciego.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <chrono>

using namespace std;

int main()
{
    long long f0 = 0;
    long long f1 = 1;
    long long f;
    int l;

    chrono::system_clock::time_point timeStart;
    chrono::system_clock::time_point timeStop;

    cout << "Ile wyrazów Ciągu Wpisać: ";
    cin >> l;

    for(int i = 0; i <= l; i++)
    {
        timeStart = chrono::system_clock::now();
        if (i > 1)
        {
            f = f0 + f1;
            f0 = f1;
            f1 = f;
            cout << f << " ";
        }
        else
        {
            f = i;
            cout << f << " ";
        }

        timeStop = chrono::system_clock::now();

        cout << "Obliczono w czasie: " << chrono::duration_cast<chrono::nanoseconds>(timeStop - timeStart).count() << " nanosekund" << endl;
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
