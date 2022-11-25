#include <iostream>
#include <cstring>
#include <fstream>
#include <algorithm>

using namespace std;

string line,odwrot,odp1,odp3,odp4;
int a,b,f,ff,e,li,ct,ss,m,t,w,x,y,z,d,d2,dd,hw,hm,fe,xd,uwu,wuw,rr,r2,r3;
int spr[100]={};
int simple[]={};

int change(){
    x=line.length();
    odwrot=line;
    reverse(odwrot.begin(), odwrot.end());
	x=stoi(line);
	y=stoi(odwrot);
	z=y-x;
	if(y%17==0){
        odp1+=odwrot;
        odp1+="\n";
	}
    if(z>d){
        d=z;
        d2=y;
        dd=d2-d;
    }
    return 0;
}

int first(){
    w=stoi(line);
    odwrot=line;
    reverse(odwrot.begin(), odwrot.end());
    m=stoi(odwrot);
    for(int g=2; g<101; g++){
        if(w%g==0){hw++;}
        if(m%g==0){hm++;}
    }
    if(w%11==0){hw++;}
    if(m%11==0){hm++;}
    if((hw==1 && hm==1) && (m<101 && w<101)){
        hm=0;
        hw=0;
    }
    if(hw==0){t++;}
    if(hm==0){t++;}
    if(t==2){
        odp3+=line;
        odp3+="\n";
    }
    hw=0;
    hm=0;
    t=0;
    ss=0;
    return 0;
}

int counting(){
    xd=0;
    for(int h=e; h<100; h++){
        if(spr[ff]==spr[ff] && spr[h]==0){  //pierwsza usunieta z petli
            li--;
        }else if(spr[ff]==spr[h] && xd==1){ //powtarzające się ale z sztucznie z petli
        }else if(spr[ff]==spr[h]){  //szukane - powtarzające się
            //cout<<spr[ff]<<"-"<<spr[h]<<endl;  //podgląd na powtarzające się
            simple[uwu]=spr[ff];
            if(simple[uwu]==simple[uwu-1]){
                li--;
                rr++;
                if(rr<2){
                    r2--;
                    r3++;
                }
            }else{
                li-=2;
                r2++;
            }
            uwu++;
        }else if(spr[ff]==spr[h+1] && xd<1){ //powtarzająca się z poprzedniej kolejki
        }else{}
        if(spr[ff]==spr[h]){li++;}
        xd++;
    }
    fe++;
    e++;
    ff++;
    if(e!=99){counting();}
    return 0;
}

int main(){
    e=-1;
    xd=e;
    fstream file("C:/Users/bhols/Desktop/liczby.txt");
    while(getline(file, line)){
        x=stoi(line);
        spr[f]=x;
        f++;
        change();
        first();
    }
    counting();
    cout<<"-> odp zd.1 <- \n\n"<<odp1;
    cout<<"\n\n-> odp zd.2 <- \n\n"<<dd<<", "<<d;
    cout<<"\n\n-> odp zd.3 <- \n\n"<<odp3;
    cout<<"\n\n-> odp zd.4 <- \n\n"<<"liczby rozne: "<<li<<"\npowtarzajace sie 2 razy: "<<r2<<"\npowtarzajace sie 3 razy lub wiecej: "<<r3<<endl;
    return 0;
}
