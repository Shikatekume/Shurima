// Zapis do pliku struktury tablicowej
#include <iostream>
#include <conio.h>

using namespace std;

struct wymiary
{
        int wysokosc;
        int szerokosc;
        int dlugosc;
};
struct monitory
{
        char marka[25];
        char typ[25];
        int cena;
        struct wymiary wymiar;
};
main()
{
        FILE *fp;
        struct monitory monitor[5];
        int ilosc,i,s=0;
        cout << "\n Podaj ilosc telewizorow do dodania do pliku: ";
        cin >> ilosc;
        fp=fopen("monitory.dat","a+b");
        for(i=0;i<ilosc;i++)
        {
                cout<<" Podaj marke monitora: \t ";
                cin>>monitor[i].marka;
                fflush(stdin);
                cout<<" Podaj typ monitora: \t ";
                cin>>monitor[i].typ;
                fflush(stdin);
                cout<<" Podaj cene: \t ";
                cin>>monitor[i].cena;
                fflush(stdin);
                cout<<" Podaj wysokosc monitora: \t ";
                cin>>monitor[i].wymiar.wysokosc;
                fflush(stdin);
                cout<<" Podaj szerokosc monitora: \t ";
                cin>>monitor[i].wymiar.szerokosc;
                fflush(stdin);
                cout<<" Podaj typ dlugosc: \t ";
                cin>>monitor[i].wymiar.dlugosc;
                fflush(stdin);
                fwrite(&monitor[i],sizeof(struct monitory),1,fp);
        }
        ilosc=ftell(fp)/sizeof(struct monitory);
        fseek(fp,0,SEEK_SET);
        for(i=0;i<ilosc;i++)
        {
                fread(&monitor[0],sizeof(struct monitory),1,fp);
                cout<<"\n marka: \t "<<monitor[0].marka;
                cout<<"\n typ: \t\t "<<monitor[0].typ;
                cout<<"\n cena: \t\t "<<monitor[0].cena;
                cout<<"\n wysokosc: \t "<<monitor[0].wymiar.wysokosc;
                cout<<"\n szerokosc: \t "<<monitor[0].wymiar.szerokosc;
                cout<<"\n dlugosc: \t "<<monitor[0].wymiar.dlugosc;
                s=s+monitor[0].cena;
        }
        cout<<"\n\n Srednia cena monitora: "<<s/ilosc;
        fclose(fp);
        getch();
}
