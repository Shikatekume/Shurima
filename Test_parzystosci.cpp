//Test parzysto�ci.
//Micha� Witaszek
//dla algortym.org

#include <iostream>
#include <stdlib.h>

using namespace std;

int n;
bool parzysta;

int main()
{
  //Pobierz od u�ytkownika liczb� do sprawdzenia	
  cout << "Podaj liczbe by sprawdzic czy jest parzysta: ";
  cin >> n;
  
  //Sprawd� czy liczba jest parzysta i zapisz wynik do zmiennej logicznej
  parzysta = (n % 2)==0;
  
  //Wypisz odpowied� w zale�no�ci od wyniku testu
  if (parzysta) 
  {cout << "Liczba " << n << " jest parzysta.";} else 
  {cout << "Liczba " << n << " nie jest parzysta.";}; 
  cout << endl;
  
  //Czekaj na ANYKEY i zako�cz dzia�anie programu.
  system("PAUSE");	
  return 0;
}