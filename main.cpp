#include <iostream>

using namespace std;

int main()
{

    string imie;
    string nazwisko;
    cout<<"Podaj imie"<<endl;
    cin>>imie;
    cout<<"Podaj nazwisko"<<endl;
    cin>>nazwisko;

    int rok_urodzenia;
    cout<<"Podaj rok swoj rok urodzenia"<<endl;
    cin>>rok_urodzenia;
    int aktualny_rok;
    cout<<"Podaj aktualny rok"<<endl;
    cin>>aktualny_rok;

    cout<< "Witam, nazywam sie " <<imie<<" " <<nazwisko << " i mam " <<aktualny_rok-rok_urodzenia <<" lat.";

    return 0;
}
