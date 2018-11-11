//
//  main.cpp
//  git2
//
//  Created by Marek Wala on 11/11/2018.
//  Copyright © 2018 Marek Wala. All rights reserved.
//

/*
 
 Zadeklarować 10-elementową tablicę elementów typu unsigned int i wypełnić ją zerami.
 Wczytywać od użytkownika liczby do kolejnych początkowych elementów tablicy tak długo, aż osiągniety zostanie koniec tablicy lub podana zostanie wartość ujemna.
 Wyznaczyć i wypisać sumę elementów tablicy.
 
*/

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    const int n = 10;
    unsigned int tab1[n];
    //funkcja wypelniajaca tab1 zerami
    for(int i = 0; i<n; i++){
        tab1[i] = 0;
    }
    //funkcja wpisujaca wartosci do tablicy i sprawdzanie czy liczba nie jest ujemna
    for(int i = 0; i<n; i++){
        int k;
        cout<<"Podaj liczbe o indeksie w tablicy "<<i<<endl;
        cin>>k;
        if(k>=0){
            tab1[i] = k;
        }
        else{
            cout<<"Podana zostal liczba ujemna";
            i = n; //koniec petli
        }
    }
    //funkcja wypisujaca tab1
    cout<<"Wypisuje zawartosc tablicy: \n";
    for(int i = 0; i<n; i++){
        cout<<"Liczba o indeksie "<<i<<" jest równa \n"<<tab1[i]<<endl;
    }
    //funkcja sumujaca
    for(int i = 0; i<n; i++){
        static int k = 0;
        k = k + tab1[i];
        if(i == (n-1))
            cout<<"Suma jest równa: \n"<<k<<endl;
    }
    
    return 0;
}
