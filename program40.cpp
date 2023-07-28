//maximum an=mong numbers
#include<iostream>
using namespace std;

template<class T>

T Maximum(T Arr[], int Size)
{
    int icnt = 0;
    T Max = Arr[0];

    for(icnt = 0; icnt < Size; icnt++)
    {
        if(Arr[icnt]> Max)
        {
            Max = Arr[icnt];
        }
    }
    return Max;

}

int main()
{
    int A[] = {10,20,30,40,50};
    int ret = 0;
    ret  =Maximum(A,5);
    cout<<"Max is : "<<ret<<"\n";

    double B[] = {10.78,20.65,30.34,40.56,50.67};
    int dret = 0.0;
    dret  =Maximum(B,5);
    cout<<"Max is : "<<dret<<"\n";

    return 0;
}