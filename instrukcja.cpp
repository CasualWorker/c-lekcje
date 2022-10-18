#include <fstream>
#include <cstring>
#include <iostream>

using namespace std;

char odp[5]={};
int r=0;
int p=0;
int q=0;
char v =' ';

int przesun(char znak, int r){
    odp[1]-=odp[1];
    odp[1]+=v;
    for(int i=0; i<r+1; i++){
        cout<<odp[i];
    }
    return 0;
}

int zmien(char znak, int r){
    odp[r-q]-=odp[r-q];
    odp[r-q]+=znak;
    for(int i=0; i<r+1; i++){
        cout<<odp[i];
    }
    return 0;
}

int odejmij(char znak, int r){
    odp[r-1]-=odp[r-1];
    cout<<odp;
    return 0;
}

int dodaj(char znak, int r){
    odp[r]+=znak;
    for(int i=0; i<r+1; i++){
        if(r>=2){
            cout<<odp[i];
        }
    }
    return 0;
}

int odczyt(string wartosc){
    int dlug=wartosc.length();
    char zrob[dlug]={};
    strcpy(zrob, wartosc.c_str());
    int x=dlug-1;
    char z=' ';
    p++;
    
    for(int j=0; j<8; j++){
        if(zrob[0]=='D'){
            z=zrob[x];
            dodaj(z, r);
            r++;
            if(r==3){
                v=z;
            }
            break;
        }else if(zrob[0]=='U'){
            z=zrob[x];
            odejmij(z, r);
            q++;
            break; 
        }else if(zrob[0]=='Z'){
            z=zrob[x];
            zmien(z, r);
            break;
        }else if(zrob[0]=='P'){
            z=zrob[x];
            przesun(z, r);
            break;
        }
    }
    return 0;
}

int main()
{
    /*ifstream to_do("make.txt", ios::in);
    if(!to_do){
		cout<<"Nie ma pliku";
	}else{
		char ch;
		while(1){
			to_do>>ch;
			if(to_do.eof())
				break;
			cout<<ch;
		}
	}
	to_do.close();*/
	
    odczyt("Dopisz A");
    odczyt("Dopisz B");
    odczyt("Dopisz C");
    cout<<endl;
    odczyt("Usun 1");
    cout<<endl;
    odczyt("Dopisz D");
    cout<<endl;
    odczyt("Zmien B");
    cout<<endl;
    odczyt("Dopisz E");
    cout<<endl;
    odczyt("Przesun B");
    cout<<endl;
    return 0;
}