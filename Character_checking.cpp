# include <iostream>
using namespace std;

int main(){
// char myword[] ="Hello";
// cout<< myword[2];
int myvar=25;
int *foo =&myvar;
int *baz=foo;
int baZ=*foo;
cout<< baz;
cout<< baZ;
}