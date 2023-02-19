#include <string>
#include <fstream>
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

string liczba="";
int r,f,n,v,wait,suma=0;
int j,y,z,spr,four,para=0;
int power=8;
int container=0;
char chwilowa[999]={};

int eont(string liczba){
    int d=liczba.length();
    int tablica[d]={0};
    int g, q, wait, wynik=0;
    int egg=8;
    int z=d-1;

    for(int i=0; i<d; i++){
        tablica[i]=tablica[i]*10+(liczba[i]-48);
    }

    for(int i=0; i<d-1; i++){
        z--;
        g=tablica[i];
        if(g!=0){
            if(z>=2){
                wait=egg;
                for(int j=0; j<z-1; j++){
                    wait*=egg;
                }
            }else if(z==1){
                wait=egg;
            }else if(z==0){
                wait=1;
            }
            q=g*wait;
            wynik+=q;
        }
    }
    container+=wynik;
    return 0;
}

int mIn(string liczba){
    int ile, z, potega, wynik=0;
    int d=liczba.length();
    int tablica[d]={0};
    for(int i=0; i<d; i++){
        tablica[i]=tablica[i]*10+(liczba[i]-48);
        if(tablica[i]==1)ile++;
    }
    z=d-1;

    if(ile==1){
        for(int i=0; i<d-1; i++){
            cout<<tablica[i];
            z--;
            if(tablica[i]!=0){
                if(z>=2){
                    potega=2;
                    for(int j=0; j<z-1; j++){
                        potega*=2;
                    }
                }else if(z==1){
                    potega=2;
                }else if(z==0){
                    potega=1;
                }
                wynik+=potega;
            }
        }
        cout<<", "<<wynik<<endl;
    }
    return 0;
}


int main(){
    ifstream MyFile("C:/Users/bhols/Desktop/pliki/liczby.txt");
    while(getline(MyFile, liczba)){
        y=liczba.length();
        n=y-2;
        int tablica[y]={0};

        strcpy(chwilowa, liczba.c_str()); // zmiana stringa na tab char

        for(int i=0; i<y; i++){
            tablica[i]=tablica[i]*10+(liczba[i]-48); // zmiana stringa na tab int
        }


        if(chwilowa[y-1]=='8'){  //wynik do zd 6.1
            z++;
            eont(liczba);
        }

        if(chwilowa[y-1]=='4'){  //wynik do zd 6.2
                for(int j=0; j<y;j++){
                    if(chwilowa[j]!='0'){
                        spr++;
                    }
                    //cout<<chwilowa[j];
                }
                if(spr==y){
                    four++;
                }
        }
        spr=0;

        if(chwilowa[y-1]=='9'){ //zd 6.5 po�owa
            if(y>9){
                for(int i=0; i<y-1; i++){
                    v=tablica[i];
                    cout<<tablica[i];
                    if(tablica[i]!=0){
                        if(n>=2){
                            wait=9;
                            for(int j=0; j<n-1; j++){
                                wait*=9;
                            }
                        }else if(n==1){
                            wait=9;
                        }else if(n==0){
                            wait=1;
                        }
                        r=v*wait;
                        suma+=r;
                    }
                }
                cout<<" "<<suma<<endl;
            }
        }

        if(chwilowa[y-1]=='2'){  //wynik do zd 6.3
            //if(y==6)mIn(liczba); //zd 6.5 po�owa
            if(chwilowa[y-2]=='0' || chwilowa[y-2]=='2' || chwilowa[y-2]=='4' || chwilowa[y-2]=='6' || chwilowa[y-2]=='8'){
                para++;
            }
        }


    }
    //cout<<"wynik: "<<container;
    return 0;
}