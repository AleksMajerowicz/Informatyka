// Szyfrowanie kodem ASCII.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>

using namespace std;

void SzyfrowanieIDeszyfrowanie(char slowo[], int k)
{
    if (!(k >= -26 && k <= 26))
    {
        return;
    }

        int d = strlen(slowo);

        if (k >= 0)
        {
            for (int i = 0; i < d; i++)
            {
                if (slowo[i] + k <= 'z')
                {
                    slowo[i] += k;
                }
                else
                {
                    slowo[i] = slowo[i] + k - 26;
                }
            }
        }
        else if (k < 0)
        {
            for (int i = 0; i < d; i++)
            {
                if (slowo[i] + k >= 'a')
                {
                    slowo[i] += k;
                }
                else
                {
                    slowo[i] = slowo[i] + k + 26;
                }
            }
        }
    cout << slowo;
}

int main()
{
    char tab[1000];
    int klucz;

    cout << "Podaj słowo z małych Liter!: ";
    cin >> tab;

    cout << "Podaj klucz: ";
    cin >> klucz;

    cout << "Po Zaszyfrowaniu: ";  SzyfrowanieIDeszyfrowanie(tab, klucz);
    cout << endl;
    cout << "Po Rozszyfrowaniu:  ";  SzyfrowanieIDeszyfrowanie(tab, -klucz);

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
