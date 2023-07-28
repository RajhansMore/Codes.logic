//Sorting

#include<iostream>
using namespace std;

template <class T>

class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int);
        ~ArrayX();

        void Accept();
        void Display();
        bool CheckSorted();
};

template <class T>
ArrayX<T>::ArrayX(int iNo)
{
    this->iSize = iNo;
    this->Arr = new T[iSize];
}

template <class T>
ArrayX<T>::~ArrayX()
{
    delete []Arr;
}

template <class T>
void ArrayX<T>::Accept()
{
    cout<<"Enter the elements\n";
    for(int iCnt = 0; iCnt<iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

template <class T>
void ArrayX<T>::Display()
{
    cout<<"Elements of array\n";
    for(int iCnt = 0; iCnt<iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

template <class T>
bool ArrayX<T>::CheckSorted()
{
    int iCnt = 0;
    bool flag = false;

    for(iCnt = 0; iCnt < iSize - 1; iCnt++)
    {
        if(Arr[iCnt] <= Arr[iCnt +1])
        {
            countinue;
        }
        else
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the size of Array\n";
    cin>>iValue;
    //ArrayX <int>obj(iValue); for static
    ArrayX<int>*obj = new ArrayX<int>(iValue);

    obj->Accept();
    obj->Display();

    bRet = obj->CheckSorted();

    if(bRet == true)
    {
        cout<<iValue<<"Array is soretd\n";
    }
    else
    {
        cout<<iValue<<"array is not sorted\n";
    }

    delete obj;

    return 0;
}