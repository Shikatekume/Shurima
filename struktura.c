#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
        struct instytuty
        {
                char nazwa[30];
                char adres[50];
                long int numer_telefonu;
        }instytut1,instytut2,instytut3,instytut4;
        strcpy(instytut1.nazwa,"ekonomiczny");
        strcpy(instytut1.adres,"02-300 Warszawa, ul. Malborska 137");
        instytut1.numer_telefonu=852368840;
        strcpy(instytut2.nazwa,"informatyki stosowanej");
        strcpy(instytut2.adres,"50-300 Krakow, ul. Krakowska 1");
        instytut2.numer_telefonu=652398810;
        strcpy(instytut3.nazwa,"pedagogiczno-jezykowy");
        strcpy(instytut3.adres,"32-456 Poznań, ul. Warszawska 137");
        instytut3.numer_telefonu=452398820;
        strcpy(instytut4.nazwa,"politechniczny");
        strcpy(instytut4.adres,"15-234 Wroclaw, ul. Piekna 137");
        instytut4.numer_telefonu=352398830;
        printf("\n Instytut %s",instytut1.nazwa);
        printf("\n adres: %s",instytut1.adres);
        printf("\n numer telefonu: %d",instytut1.numer_telefonu);
        printf("\n Instytut %s",instytut2.nazwa);
        printf("\n adres: %s",instytut2.adres);
        printf("\n numer telefonu: %d",instytut2.numer_telefonu);
        printf("\n Instytut %s",instytut3.nazwa);
        printf("\n adres: %s",instytut3.adres);
        printf("\n numer telefonu: %d",instytut3.numer_telefonu);
        printf("\n Instytut %s",instytut4.nazwa);
        printf("\n numer telefonu: %d",instytut4.numer_telefonu);
        printf("\n adres: %s",instytut4.adres);
        getch();
        return 0;
}
