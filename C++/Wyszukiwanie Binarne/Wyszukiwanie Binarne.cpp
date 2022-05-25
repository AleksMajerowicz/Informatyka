// Wyszukiwanie Binarne.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <chrono>

using namespace std;

int WyszukiwanieBinarne(short int sz)
{
	short int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };

	short int l = 0;
	short int p = 15;
	short int sr = (l + p) / 2;

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
	short int szukana;
	short int pozycja;

	chrono::system_clock::time_point timeStart;
	chrono::system_clock::time_point timeStop;

	cout << "Podaj Liczbę którą chcesz znaleść: ";
	cin >> szukana;

	timeStart = chrono::system_clock::now();

	pozycja = WyszukiwanieBinarne(szukana);

	timeStop = chrono::system_clock::now();

	cout << "Liczba " << szukana << " wystepuje w zbiorze w komórce o indeksie " << pozycja << " W czasie: " << chrono::duration_cast<chrono::nanoseconds>(timeStop - timeStart).count() << " nanosekund";
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
