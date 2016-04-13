//potêgowanie z uwzglêdnieniem wyk³adników ujemnych
//Micha³ Witaszek
//dla algorytm.org

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  float a,b, wynik = 1;  
  cin >> a >> b;
  
  // jeœli wyk³adnik wiêkszy od 0
  // u¿yj standardowego algorytmu
  if (b>0)
  {
    while(b>0)
    {
        wynik *= a;
        b--;
    }
    
  }else if (b<0)
  //Jeœli wyk³adnik mniejszy od 0
  //u¿yj zmodyfikowanej funkcji
    {
      while(b<0)
      {
          wynik *= a;
          b++;
      }
      //a^-b = 1/(a^b)
      wynik = 1/wynik;        
    }     
    
    cout << wynik << endl;                            
  
  return 0;
}
