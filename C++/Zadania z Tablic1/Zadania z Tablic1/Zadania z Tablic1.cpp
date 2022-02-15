// Zadania z Tablic1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int main()
{
    int tab1[5];
    cout << "Zadanie I:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Podaj " << i + 1 << " Liczbę:";
        cin >> tab1[i];
    }
    cout << "Parzyste liczby: ";
    for (int i = 0; i < 5; i++)
    {
        if (tab1[i] % 2 == 0)
        {
            cout << tab1[i] << ",";
        }
    }

    cout << endl << "Zadanie II:" << endl;
    
    int tab2[5];
    
    for (int i = 0; i < 5; i++)
    {
        cout << "Podaj " << i + 1 << " Liczbę:";
        cin >> tab2[i];
    }
    
    cout << "Wypisane liczby,w odwrotnej kolejności: ";
    
    for (int i = 4; i >= 0; i--)
    {
        cout << tab2[i] << ",";
    }

    cout << endl << "Zadanie III: " << endl;
    int tab3[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Podaj " << i + 1 << " Liczbę:";
        cin >> tab3[i];
    }

    cout << "Eliminacja ujemnych liczb: ";
    
    for (int i = 0; i < 5; i++)
    {
        if (tab3[i] < 0)
        {
            tab3[i] = 0;
        }
        cout << tab3[i] << ",";
    }

    cout << endl<< "Zadanie IV" << endl;;
    int tabIV[3][4];
    int suma = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            suma++;
            tabIV[i][j] = suma;
            cout << tabIV[i][j] << ",";
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
