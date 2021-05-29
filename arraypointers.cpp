#include <iostream>
using namespace std;
int main (){
cout << "Enter numbers=";

int *p;
int array[]= {1, 2 ,3 ,5  ,4};
p=array;
for (int i=0; i<5;i++){

    cout <<"\n"<< *p;

    p++;}
cout << "\nYou entered:";
 int *q;

 q=array;

for (int i=0; i<5;i++){

    cout <<"\n"<< *q;

    q++;}
}
