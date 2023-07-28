//accpet two numer from user and swap numbers 
#include<iostream>

using namespace std;

template<class T>

T swap(T *no1, T *no2)
{
    T temp;
    temp = no1;
    no1 = no2;
    no2 = temp;
}


int main()
{
    int A = 10, B  =11;
    swap(&A,&B);

    cout<<"Data after swapping : "<<"\n";

    cout<<"Data of A : "<<A<<"\n";
    cout<<"Data of B : "<<B<<"\n";

    return 0;
}