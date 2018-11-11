//
//  main.cpp
//  git4
//
//  Created by Marek Wala on 11/11/2018.
//  Copyright © 2018 Marek Wala. All rights reserved.
//

/*
 
 Utworzyć 2-wymiarową tablicę o rozmiarze 10 x 10, zawierającą "tabliczkę mnożenia" liczb w zakresie od 1 do 10, tzn.: w k-tym wierszu (k=1...10) mają znajdować się wyniki mnożenia k przez kolejne liczby z zakresu 1...10.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, const char * argv[]) {
    const int n = 10;
    //tworzenie tablicy 2d liczb calkowitych, od razu wypelniamy zerami
    int tab1[n][n] ={0};
    //przypisujemy wartosc pierwszy rzad i kolumne
    for(int i = 0; i<n; i++){
        tab1[i][0] = i + 1;
        tab1[0][i] = i + 1;
    }
    //funkcja ktora mnozy 1 kolmne razy 1 rzad
    for(int i = 1; i<n; i++){
        for(int k = 1; k<n; k++){
            tab1[i][k] = tab1[0][i] * tab1[k][0];
        }
    }
    //funkcja wypisujaca zawartosc tablicy
    cout<<"Tabliczka mnożenia: "<<endl;
    for(int i = 0; i<n; i++){
        for(int k = 0; k<n; k++){
            cout<<tab1[k][i]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
