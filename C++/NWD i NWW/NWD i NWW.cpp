// NWD i NWW.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

using namespace std;

#include <iostream>

int main()
{
    int a, b, c, NWW;//Tworzenie zmiennych: a-zmienna na I liczbę, b- II liczbę, c-Iloczyn a i b w celu niepowtarzania niepotrzebnie wyliczania NWD(poniewaz operujemy na czysto na a i b),do wyliczenia NWW i zmienna NWW-przechowujaca NWW

    cout << "Podaj Pierwszą Liczbę: ";
    cin >> a;//Podawanie I liczby

    cout << "Podaj Drugą Liczbę: ";
    cin >> b;//Podawanie II liczby

    c = a * b;//Iloczny a i b

    while (a != b)//Pętla ta,będzie się powtarzać doputy,doputy a i b nie bedą sobie równe.To pozwala,w pętli na zmiejszanie liczby a i b, żeby po przez ich różnicę,znaleśc NWD
    {
        if (a < b)//Jeżeli a jest mniejsze od b
        {
            b = b - a;//To od b odejmójemy od a
        }
        else if (b < a)//a jezeli b jest mniejsze od a
        {
            a = a - b;//To od a odejmójemy b
        }
        //Jest to po to,by zmiejszać liczby a i b tak,żeby je ze sobą porównać
    }

    NWW = c / a;//Dzielenie iloczynu a i b,przez NWD(mogłoby być też b,bo a i b,to to samo,czyli oba są NWD)

    cout << "Największy Wspólny Dzielnik: " << a << endl;//Wyswieltanie NWD
    cout << "Największa Wspólna Wielokrotność: " << NWW;//Wyświeltanie NWW
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
