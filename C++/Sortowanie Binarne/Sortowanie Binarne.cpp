// Sortowanie Binarne.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

using namespace std;

#include <iostream>

int WyszukiwanieBinarne(int sz)
{
	int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };

	int l = 0;
	int p = 15;
	int sr = (l + p) / 2;

	while (l <= p)
	{
		if (tab[sr] == sz)
		{
			return sr;
		}
		else if (tab[sr] > sz)
		{
			p = sr - 1;
		}
		else if (tab[sr] < sz)
		{
			l = sr + 1;
		}

		sr = (l + p) / 2;
	}

	return -1;
}

int main()
{
	int szukana;
	int pozycja;

	cout << "Podaj Liczbę którą chcesz znaleść: ";
	cin >> szukana;

	pozycja = WyszukiwanieBinarne(szukana);
	cout << "Liczba " << szukana << " wystepuje w zbiorze w komorce o indeksie " << pozycja;
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
