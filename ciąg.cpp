#include <iostream>

using namespace std;

int odlicz(int q){
    int jeden[8]= {0, 0, 1, 2, 3, 4, 6, 8};
    int dwa[8]= {4, 2, 2, 1, 2, 6, 5, 5};
    int x=q;
    int d=0;

    for(int j=0; j<8; j++){     //pętla dla powtarzających się par
        if(jeden[j]==x){
            d=x;
            x=dwa[j];
            cout<<jeden[j]<<", "<<dwa[j]<<endl;
        }
    }
    
    if(d!=q){   //sprawdza czy pary się powtarzają, jeśli tak nie wywołuje funkcji ponownie i ją koćzy
        odlicz(x);
    }else{
        for(int j=0; j<8; j++){
            if(jeden[j]==x){
                d=x;
                x=dwa[j];
                cout<<jeden[j]<<", "<<dwa[j]<<endl;
                break;
            }
        }
    }
    return x;
}



int main()
{
    int x=0;
    int jeden[8]= {0, 0, 1, 2, 3, 4, 6, 8};
    int dwa[8]= {4, 2, 2, 1, 2, 6, 5, 5};
    
    

    for(int i=0; i<8; i++){     //główna pętla dla 8 par liczb, wykonuj się 8 razy
        if(jeden[i]==3){        //if dla pary zaczynającej się od [3,2][2,1][1,2]
            for(int j=0; j<8; j++){
                x=3;
                if(jeden[j]==x){
                    cout<<jeden[i]<<", "<<dwa[i]<<endl;
                    x=dwa[i];
                    odlicz(x);
                }
            }
            cout<<endl;
        }else if(jeden[i]==8){      //if dla pary zaczynającej się od [8,5]   
            for(int h=0; h<8; h++){
                x=8;
                if(jeden[h]==x){
                    cout<<jeden[i]<<", "<<dwa[i]<<endl;
                    x=dwa[i];
                }
            }
            cout<<endl;
        }else if(jeden[i]==0 && dwa[i]==2){     //if dla pary zaczynającej się od [0,2][2,1][1,2]
            for(int z=0; z<8; z++){
                x=1;
                if(jeden[z]==x){
                    cout<<jeden[i]<<", "<<dwa[i]<<endl;
                    x=dwa[i];
                    odlicz(x);
                }
            }
            cout<<endl;
        }else if(jeden[i]==1 && dwa[i]==2){     //niedopuszcza pary zaczynającej sie od [1,2]
        }else if(jeden[i]==2 && dwa[i]==1){     //niedopuszcza pary zaczynającej sie od [2,1]
        }else if(jeden[i]==0 && dwa[i]==4){     //wyświetla reszte par, czyli [0,4][4,6][6,5]
            for(int k=0; k<8; k++){
                if(jeden[k]==x){
                    x=dwa[k];
                    cout<<jeden[k]<<", "<<dwa[k]<<endl;
                }
            }
            cout<<endl;
        }
    }
    
    return 0;
}