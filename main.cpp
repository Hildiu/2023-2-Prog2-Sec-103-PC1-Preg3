#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int num[50];

  srand(time(nullptr));
  for(int i=0; i<50; i++)
    num[i] = rand()%2;
  for(int i=0; i<50; i++)
    cout << setw(2) << num[i];
  cout << "\n";

  cout << "\n";
  int indice=0;
  int contador=0;
  while(indice <50)
  {
    while(indice<50 and num[indice]==0)
      indice++;
    while(indice<50 and num[indice]==1) {
      contador++;
      indice++;
    }
    if(contador>0) {
      cout << contador;
      contador = 0;
    }
  }
  return 0;
}
