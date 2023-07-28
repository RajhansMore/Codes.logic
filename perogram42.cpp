#include<iostream>
using namespace std;

template <class T>


class ArrayX
{
    public:
        T *Arr;
        int Size;

        ArrayX(int length);
        void Accept();
        void Display(); 
        T Maximum();
};

template <class T>

ArrayX<T>::ArrayX(int length)
{
    Size = length;
    Arr = new T[Size];
}

template <class T>
void ArrayX<T>:: Accept()
{
    cout<<"Enter the elements of array\n";
    int icnt = 0;
    for(icnt = 0; icnt < Size; icnt++)
    {
        cin>>Arr[icnt];
    }
}

template <class T>

void ArrayX<T>:: Display()
{
    cout<<"Enter the elements of array\n";
    int icnt = 0;
    for(icnt = 0; icnt < Size; icnt++)
    {
        cout<<Arr[icnt]<<"\n";
    }
}

template <class T>
T ArrayX<T>::Maximum()
{
    int icnt = 0;
    T max = Arr[0];
    for(icnt = 0; icnt < Size; icnt++)
    {
        if(Arr[icnt] > max)
        {
            max = Arr[icnt];
        }
    }
    return  max;
}

int main()
{

    ArrayX<int> obj1(5);

    obj1.Accept();
    obj1.Display();
    obj1.Display();

    ArrayX<double> obj2(5);

    obj2.Accept();
    obj2.Display();
    obj2.Maximum();

    return 0;

}