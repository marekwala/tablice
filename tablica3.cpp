//
//  main.cpp
//  git3
//
//  Created by Marek Wala on 11/11/2018.
//  Copyright © 2018 Marek Wala. All rights reserved.
//

/*
 
 
 Program, który generuje 90 losowych wartości "temperatury powietrza" z przedziału <20,30>, zapisuąc je do tablicy.
 Program oblicza, ile spośród temperatur znajduje się w przedziałach: <20,22), <22,24), <24,26), <26,28), <28,30>.
 Program wypisuje procentowy udział temperatur oraz "wykres histogramu".
 
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, const char * argv[]) {
    //ustawienie losowania
    srand(time(NULL));
    const int n = 90;
    double tab1[n];
    //funkcja wpisujaca do tablicy wartosci temperatur
    for(int i = 0; i<n; i++){
        double k = (rand() % 20/2.f ) + 20;
        tab1[i] = k;
    }
    //funkcja wypisujaca zawartosc tablicy
    for(int i = 0; i<n ; i++){
        cout<<"Liczba o indeksie "<<i<<" w tablicy to: "<<tab1[i]<<endl;
    }
    //funckja zliczajaca wykona sie o jeden raz wiecej niz jest elementow zeby wykonala sie instrukcja else
    static int l,k,d,f,g = 0;
    for(int i = 0; i<=n; i++){
        
        if(i<n){
            if((tab1[i]>=20) && (tab1[i]<22)){
                l = l+1;
            }
            if((tab1[i]>=22) && (tab1[i]<24)){
                k = k+1;
            }
            if((tab1[i]>=24) && (tab1[i]<26)){
                d = d+1;
            }
            if((tab1[i]>=26) && (tab1[i]<28)){
                f = f+1;
            }
            if((tab1[i]>=28) && (tab1[i]<=30)){
                g = g+1;
            }
        }
        else{
            cout<<"temperatur w przedziale <20,22): "<<endl;
            cout<<l<<endl;
            cout<<"temperatur w przedziale <22,24): "<<endl;
            cout<<k<<endl;
            cout<<"temperatur w przedziale <24,26): "<<endl;
            cout<<d<<endl;
            cout<<"temperatur w przedziale <26,28): "<<endl;
            cout<<f<<endl;
            cout<<"temperatur w przedziale <28,30>: "<<endl;
            cout<<g<<endl;
            }
        
    }
    //funkcja rysujaca histogram ilosciowy
    cout<<"Histogram temepratur w przdziałach: "<<endl;
    cout<<"temperatur w przedziale <20,22): ";
    for(int i = l; i != 0; i--){
        cout<<"*";
        }
    cout<<"\ntemperatur w przedziale <22,24): ";
    for(int i = k; i != 0; i--){
        cout<<"*";
    }
    cout<<"\ntemperatur w przedziale <24,26): ";
    for(int i = d; i != 0; i--){
        cout<<"*";
    }
    cout<<"\ntemperatur w przedziale <26,28): ";
    for(int i = f; i != 0; i--){
        cout<<"*";
    }
    cout<<"\ntemperatur w przedziale <28,30>: ";
    for(int i = g; i != 0; i--){
        cout<<"*";
    }
    cout<<endl;
    //funkcja obliczajaca prcent udzialu temperatur
    int a,b,c,e,h;
    a = l/0.9;
    b = k/0.9;
    c = d/0.9;
    e = f/0.9;
    h = g/0.9;
    //histogram procentowy
    cout<<"Histogram procentowy temepratur w przdziałach: "<<endl;
    cout<<"temperatur w przedziale <20,22): ";
    for(int i = a; i != 0; i--){
        cout<<"*";
    }
    cout<<"\ntemperatur w przedziale <22,24): ";
    for(int i = b; i != 0; i--){
        cout<<"*";
    }
    cout<<"\ntemperatur w przedziale <24,26): ";
    for(int i = c; i != 0; i--){
        cout<<"*";
    }
    cout<<"\ntemperatur w przedziale <26,28): ";
    for(int i = e; i != 0; i--){
        cout<<"*";
    }
    cout<<"\ntemperatur w przedziale <28,30>: ";
    for(int i = h; i != 0; i--){
        cout<<"*";
    }
    //roznica przy gwiazdkach jest widoczna bo jest ich wiecej!
    return 0;
}
