//
//  main.cpp
//  git1
//
//  Created by Marek Wala on 11/11/2018.
//  Copyright © 2018 Marek Wala. All rights reserved.
//

/*
 
 Wczytać od użytkownika N wartości całkowitych (gdzie N to stała deklarowana w programie) i zapisać do tablicy tab1.
 Przepisać elementy do drugiej tablicy (tab2), ale w odwróconej kolejności.
 Zapisać do tablicy tab3 elementy tablicy tab1:
 -przesunięte cyklicznie o jedną pozycję.
 -przesunięte cyklicznie o k pozycji (gdzie k jest podawane przez użytkownika) (*)
 
*/

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    const int n = 10;
    int p;
    int tab1[n], tab2[n], tab3[n];
    //funkcja wpisujaca wartosci podane od uzytkownika do tab1
    
    /*
    for(int i = 0; i<n; i++){
        cout<<"Podaj warość elementu o "<<i<<" indeksie: "<<endl;
        cin>>tab1[i];
    }
    */
    //funkcja automatycznie wpisujaca do tablicy dla prostszego testowania
    for(int i = 0; i<n; i++){
        cout<<"Podaj warość elementu o "<<i<<" indeksie: "<<endl;
        cout<<i+1<<endl;
        tab1[i] = i+1;
    }
    //funkcja wypisujaca tab1 w konsoli
    cout<<"Wartości w tab1: "<<endl;
    for(int i = 0; i <n; i++){
        cout<<"wartość w elemencie o indeksie "<<i<<" tablcy"<<endl;
        cout<<tab1[i]<<endl;
    }
    //funkcja przepisujaca z tab1 do tab2 w odwoconej kolejnosci
    for(int i = 0; i<n; i++){
        tab2[i] = tab1[((n-1)-i)];
    }
    //funkcja wypisujaca tab2 w konsoli
    cout<<"Wartości w tab2: "<<endl;
    for(int i = 0; i <n; i++){
        cout<<"wartość w elemencie o indeksie "<<i<<" tablcy"<<endl;
        cout<<tab2[i]<<endl;
    }
    //wyzerowanie tab3
    for(int i = 0; i<n; i++){
        tab3[i] = 0;
    }
    //przesuniecie cykliczne tab1 o jedna pozycje
    for(int i = 0; i<(n-1); i++){
        tab3[i+1] = tab1[i];
    }
    //funkcja wypisujaca tab3 w konsoli
    cout<<"Wartości w tab3: "<<endl;
    for(int i = 0; i <n; i++){
        cout<<"wartość w elemencie o indeksie "<<i<<" tablcy"<<endl;
        cout<<tab3[i]<<endl;
    }
    //wyzerowanie tab3
    for(int i = 0; i<n; i++){
        tab3[i] = 0;
    }
    //przesuniecie cykliczne tab1 o podana ilosc pozycji
    cout<<"Podaj ilość pozycji: "<<endl;
    cin>>p;
    cout<<"\n";
    for(int i = 0; i<(n-p); i++){
        tab3[i+p] = tab1[i];
    }
    //funkcja wypisujaca tab3 w konsoli
    cout<<"Wartości w tab3: "<<endl;
    for(int i = 0; i <n; i++){
        cout<<"wartość w elemencie o indeksie "<<i<<" tablcy"<<endl;
        cout<<tab3[i]<<endl;
    }
    //uwaga na przekroczenie rozmiaru tablicy i przesuniecia tablicy 
    return 0;
}
