#include <iostream>
#include <string>

#include "zlab12.h"

using namespace std;

int main()
{
    zlab12 z12;
   // z12.strumienTekstowy();
    //z12.zapisTekstowyDoPliku("plik.txt");
    //z12.odczytPlikuTekstowego("plik.txt");

    z12.zapisBinarnyDoPliku("plik.txt");
    z12.odczytPlikuBinarnego("plik.txt");



    return 0;
}
