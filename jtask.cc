// Author: Nikola Vl.
// Created on: June 7th
// Discription: Automotive service program to register cars.
// Classes available[1]: Automobil.
// Methods & Constructors available[4]:postaviPodatke("str1", "str2", "int1", "str3", "int2"), ispisiPodatke(), promjeniBrojRegistracije("str1"), provjeriRegistraciju()
// License: MIT license 2022
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

class Automobil {
    private:
        string marka;
        string model;
        int godinaProizvodnje;
        string brojRegistracije;
        int kubikaza;

    public:
        void postaviPodatke(string mark, string models, int yearofProduction, string licensePlate, int cubes) {
            // Constructor
            marka = mark;
            model = models;
            godinaProizvodnje = yearofProduction;
            brojRegistracije = licensePlate;
            kubikaza = cubes;

        }

        void ispisiPodatke() {
            // Method
            cout << "Marka vozila: " << marka <<endl << ", model vozila: " <<  model <<endl<< ", godina proizvodnje: " << godinaProizvodnje <<endl <<  ", registarske tablice: " + brojRegistracije <<endl << ", kubikaza: " << kubikaza <<endl ;

        }
        void promjeniBrojRegistracije(string newLicensePlate) {
            // Method
            brojRegistracije = newLicensePlate;
        }
        void provjeriRegistraciju(){
            // Method
            int n = brojRegistracije.length();
            char s[n+1];
            strcpy(s,brojRegistracije.c_str());
            char brojTablice[3];
            for(int i = 0; i <= 2; i++) {
                brojTablice[i] = s[i+3];
            }
            if (isalpha(s[0]) && isalpha(s[1]) && isalpha(s[7]) && isalpha(s[8]) && isdigit(brojTablice[0]) && isdigit(brojTablice[1]) && isdigit(brojTablice[2]) && isupper(s[0]) && isupper(s[1]) && isupper(s[7]) && isupper(s[8])){
                cout << "Oznaka registarskih tablica je tacna." << endl;
            } else {
                cout << "Oznaka registarskih tablica nije tacna." << endl;
            }

        }
};

int main()
{
Automobil car1;
// QA
car1.postaviPodatke("bmw", "modelv", 2021, "AA-202-BB", 110);
car1.ispisiPodatke();
car1.provjeriRegistraciju(); // Passed result: True
car1.promjeniBrojRegistracije("AA-222-Bb");
car1.ispisiPodatke();
car1.provjeriRegistraciju(); // Passed result: False
car1.promjeniBrojRegistracije("");
car1.ispisiPodatke();
car1.provjeriRegistraciju(); // Passed result: False
car1.promjeniBrojRegistracije("AA 202 BB");
car1.ispisiPodatke();
car1.provjeriRegistraciju(); // Passed result: True
return 0;
}
/* Begin License text
Copyright 2022 Nikola Vlacic
Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
End license text */
