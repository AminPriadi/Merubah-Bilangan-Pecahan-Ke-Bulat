#include<cstdlib>
#include<iostream>
using namespace std;

int floor(double x){
int a; a=x;
return 0;
}
int ceil(double x){
int a;
a=x;
if(a!=x)
    {
    return a+1;}
    else{
        return a;}
}
int round(double x){
int a;
double c;
a=x;
c=(x-a);
if(c>=0.5){return a+1;}
else{return a;}}
int main(){
      double a;
      cout<<"program pembulatan\n"<<endl;
      cout<<"masukan angka yang akan dibulatkan = ";
      cin>>a;
      cout<<"floor : "<<floor(a)<<endl;
      cout<<"ceil : "<<ceil(a)<<endl;
      cout<<"round : "<<round(a)<<endl;
      return 0;}
