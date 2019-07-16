#include <iostream>
#include <string>

using namespace std;

char ch;
int i;
int* p;
void sizes(char ch, int i, int* p);

void sizes(char ch, int i, int* p){
    cout << "the size of char is " << sizeof(char) << (char) 0 <<sizeof(ch)<<'\n';
    cout << "the size of int is " << sizeof(int) << (char) 0 <<sizeof(i)<<'\n';
    cout << "the size of int* is " << sizeof(int*) << (char) 0 <<sizeof(p)<< '\n';
}

int main (){
    sizes(ch, i, p);
}
