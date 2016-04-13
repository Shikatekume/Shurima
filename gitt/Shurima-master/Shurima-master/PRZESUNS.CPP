//Program szyfrujacy tekst z pliku za pomoca algorytmu podstawieniowego monoalfabetycznego o wybranym przesunieciu
//Program pobrano ze strony www.algorytm.org
//Opracowal Krzysztof Mackowiak

#include<stdio.h>
#include<iostream.h>
#include <math.h>

void main()
{
FILE *we, *wy;
char znak;       //znak odczytany z pliku
//Przed uruchomieniem programu nalezy utworzyc 2 pliki - 1. z tekstem jawnym, 2. pusty na t.zaszyfrowany
char plik_jawny[20];  //nazwa pliku z tekstem jawnym
char plik_zaszyfrowany[20];  //nazwa pliku z tekstem zaszyfrownym
int przesuniecie;     //wartosc przesuniecia np. dla 3 bedzie to szyfr odpowiad. szyfrowi Cezara
cout<<"Podaj nazwe pliku, ktorego tresc ma zostac zaszyfrowana: " ;
cin>>plik_jawny;
cout<<"Podaj nazwe pliku wynikowego: ";
cin>>plik_zaszyfrowany;
cout<< "Podaj warosc przesuniecia (1-25): ";
cin>>przesuniecie;
if ((przesuniecie>=1)&&(przesuniecie<=25))
{
if((we=fopen(plik_jawny,"rb"))!=NULL)    //otwieranie pliku 1. do odczytu
{
if((wy=fopen(plik_zaszyfrowany,"wb"))!=NULL)  //otwieranie pliku 2. do zapisu
{
   while((znak=getc(we))!=EOF)   //pobieranie znaku z pliku 1. tak dlugo az nie nastapi znak konca pliku
   //Kazdy odczytywany znak wg kodow ASCII jest przydzielany do 3 grup duze litery, male litery, cyfry
           {
                if ((znak>=65)&&(znak<=90))
                     {
                        znak-=65;
                        znak+=przesuniecie;
			znak=fmod(znak,26);  //operacja ta potrzebna jest aby przykladowo litera z szyfrowana byla jako c a nie jako znaczek o nr o 3 wiekszym w tablicy ASCII
                        znak+=65;
			putc(znak,wy);
                     }
                 else if ((znak>=97)&&(znak<=122))
                     {
                        znak-=97;
                        znak+=przesuniecie;
                        znak=fmod(znak,26);   
                        znak+=97;
                        putc(znak,wy);
                     }
                 else if ((znak>=48)&&(znak<=57))
                     {
                        znak-=48;
                        znak+=przesuniecie;
                        znak=fmod(znak,10);
                        znak+=48;
                        putc(znak,wy);
		     }
//Wszystkie inne znaki sa pomijane. Jezeli zalezy Ci aby nie pomijac niektorych znakow powinienes
//dodac w tym miejscu nastepujace linijki kodu:
//else if(znak==nr)   gdzie przez nr rozumiemy nr kodu ASCII danego znaku
//{znak+=przesuniecie;
//putc(znak,wy);}
//W funkcji deszyfrujacej nalezy umiescic to samo zmieniajac + na -.
      }
fclose(wy);
 }
fclose(we);
 }
cout<< "Szyfrowanie zostalo zakonczone";
}
else cout<< "Podano bledna wartosc przesuniecia";
return;
}
