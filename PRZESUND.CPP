//Program deszyfrujacy tekst z pliku za pomoca algorytmu podstawieniowego monoalfabetycznego o wybranym przesunieciu
//Program pobrano ze strony www.algorytm.org
//Opracowal Krzysztof Mackowiak
//committed by KarolHagrid
#include<stdio.h>
#include<iostream.h>
#include <math.h>

void main()
{
FILE *we, *wy;
char znak;       //znak odczytany z pliku
//Przed uruchomieniem programu nalezy utworzyc 2 pliki - 1. z tekstem zaszyfrowanym, 2. pusty na t.odszyfrowany
char plik_jawny[20];  //nazwa pliku z tekstem jawnym
char plik_zaszyfrowany[20];  //nazwa pliku z tekstem zaszyfrownym
int przesuniecie;   //wartosc przesuniecia
cout<<"Podaj nazwe pliku zawierajacego tekst zaszyfrowany: ";
cin>>plik_zaszyfrowany;
cout<<"Podaj nazwe pliku,w ktorym zapisany ma byc tekst odszyfrowany: " ;
cin>>plik_jawny;
cout<< "Podaj warosc przesuniecia (1-25): " ;
cin>>przesuniecie;

if ((przesuniecie>=1)&&(przesuniecie<=25))
{
if((we=fopen(plik_zaszyfrowany,"rb"))!=NULL)    //otwieranie pliku 1. do odczytu
{
if((wy=fopen(plik_jawny,"wb"))!=NULL)  //otwieranie pliku 2. do zapisu
{
   while((znak=getc(we))!=EOF)   //pobieranie znaku z pliku 1. tak dlugo az nie nastapi znak konca pliku
   //Kazdy odczytywany znak wg kodow ASCII jest przydzielany do 3 grup duze litery, male litery, cyfry
	    {
		if ((znak>=65)&&(znak<=90))
                     {
			znak-=65;
			znak-=przesuniecie;
			if (znak<0)
			     znak=26-fabs(znak);
			znak+=65;
			putc(znak,wy);
                     }
		 else if ((znak>=97)&&(znak<=122))
                     {
			znak-=97;
			znak-=przesuniecie;
			if (znak<0)
			     znak=26-fabs(znak);
			znak+=97;
			putc(znak,wy);
                     }
		 else if ((znak>=48)&&(znak<=57))
                     {
			znak-=48;
                        if (przesuniecie<=10)
				 znak-=przesuniecie;
			else if (przesuniecie<=20)
				{
				    przesuniecie-=10;
				    znak-=przesuniecie;
				}
			else   {
				    przesuniecie-=20;
				    znak-=przesuniecie;
				}
			if (znak<0)
			     znak=10-fabs(znak);
			znak+=48;
                        putc(znak,wy);
                     }

	}
fclose(wy);
 }
fclose(we);
 }
cout<<"Deszyfrowanie zostalo zakonczone";
}
else cout<< "Podano bledna wartosc przesuniecia";
return;
}
