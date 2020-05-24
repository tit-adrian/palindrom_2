#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
fstream odczyt;
int c, x, w;
int k=0;
string a;

bool sprawdzpalindrom (string s1) //funkcja sprawdzaj¹ca czy to jest palingram.
{
    int dl=s1.size();
    for (int i=0; i<dl/2; i++)
        if (s1[i]!=s1[dl-i-1])
            return false;
    return true;
}

void sprawdzb()
{
    odczyt.open("dane.txt",ios::in);

    while(odczyt.good())
    {
        odczyt >> a;
        if(sprawdzpalindrom(a)==true && a[0]=='A')
        {

            c++;
            k++;
            cout <<k<<"."<< a << endl;
        }
    }
    cout <<"Liczba ich wynosi:"<<c;
    odczyt.close();
}

void sprawdzparzyste()
{
    odczyt.open("dane.txt",ios::in);

    while(odczyt.good())
    {
        odczyt >> a;
        if(sprawdzpalindrom(a)==true)
        {
            int dlugosc=a.length();
            if(dlugosc%2==0)
            {
                k++;
                cout <<k<<"."<< a << endl;
                c++;

            }
        }
    }
    cout <<"Liczba ich wynosi:"<<c;
    odczyt.close();
}

void sprawdznieparzyste()
{
    odczyt.open("dane.txt",ios::in);

    while(odczyt.good())
    {
        odczyt >> a;
        if(sprawdzpalindrom(a)==true)
        {
            int dlugosc=a.length();
            if(dlugosc%2!=0)
            {
                k++;
                cout <<k<<"."<< a << endl;
                c++;

            }
        }
    }
    cout <<"Liczba ich wynosi:"<<c;
    odczyt.close();
}

void sprawdztrzya()
{
    odczyt.open("dane.txt",ios::in);

    while(odczyt.good())
    {
        odczyt >> a;
        if(sprawdzpalindrom(a)==true)
        {
            if(count(a.begin(), a.end(), 'A')>=3)
            {
                k++;
                cout <<k<<"."<< a << endl;
                c++;

            }
        }
    }
    cout<<"Liczba ich wynosi:"<<c;
    odczyt.close();
}


int main()
{
    cout << "Wpisz 1 zeby zobaczyc palindromy na litere A jak Adrian i ich liczbe " << endl;
    cout << "Wprowadz 2 zeby zobaczyc palindromy z parzysta liczba liter i ich liczbe" << endl;
    cout << "Wprowadz 3 zeby zobaczyc palindromy z nieparzysta liczba liter i ich liczbe" << endl;
    cout << "wprowadz 4 zeby zobaczyc palondromy z trzema lub wiecej literami A i ich liczbe" << endl;
    cout << "Wprowadz liczbe z menu:";
    cin >> w;
    switch(w)
    {
    case 1:
        sprawdzb();
        break;
    case 2:
        sprawdzparzyste();
        break;
    case 3:
        sprawdznieparzyste();
        break;
    case 4:
        sprawdztrzya();
        break;
    default:
        cout << "Wybrales zly numer!!!";
        break;
    }
    return 0;
}
