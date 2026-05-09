#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"enter the id value : ";
     cin>>n;

    if(n%5==0 && n%3==0){
     cout<<" id is tagged as buzz and fuzz both ";}
     else if(n%5==0){
     cout<<"id is tagged as fuzz";}
     else if(n%3==0){
     cout<<"id is tagged as buzz";}
     else{
     cout<<"not tagged as any";}

     return 0;
}
