#include <iostream>
#include <stdio.h> 
#include <string.h> 
#include <cstdlib> 
int main(int argc, char** argv){

using namespace std;
int rez[0];
int tas[0];
int x,y,i;
int points = 0;
for (i=0; i<10; i++){
x = rand() %5;
y = rand() %5;
if (x>y){	
points+=3;}
if (x<y){
points+=0;}
if (x==y){
points+=1;}
cout<<"["<<x<<":"<<y<<"]"<<endl;
}
cout<<points<<"points"<<endl;
return 0;
}

