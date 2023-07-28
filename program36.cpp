//accpet two numer from user and swap numbers 
#include<iostream>

using namespace std;

void swap(int &no1, int &no2)
{
    int temp;
    temp = no1;
    no1 = no2;
    no2 = temp;
}

int main()
{
    int A = 10, B  =11;
    swap(A,B);

    cout<<"Data after swapping : "<<"\n";

    cout<<"Data of A : "<<A<<"\n";
    cout<<"Data of B : "<<B<<"\n";

    return 0;
}