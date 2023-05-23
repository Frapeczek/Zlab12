//
// Created by Pawel Bojarczuk on 23/05/2023.
//

#ifndef LAB10PDF_ZLAB12_H
#define LAB10PDF_ZLAB12_H

#include <iostream>
#include <string>

using namespace std;

class zlab12 {
public:
    void strumienTekstowy();
    void zapisTekstowyDoPliku(string nazwaPliku);
    void odczytPlikuTekstowego(string nazwaPliku);
    void zapisBinarnyDoPliku(string nazwaPliku);
    void odczytPlikuBinarnego(string nazwaPliku);
};


#endif //LAB10PDF_ZLAB12_H
