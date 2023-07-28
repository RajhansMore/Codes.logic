//take input from user and resturn the largerst number
#include<iostream>
using namespace std;

int Maximum(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }

}

int main()
{
    int iValue1= 0;
    int iVAlue2= 0;

    int iRet = 0;

    cout<<"Enter the first number"<<"\n";
    cin>>iValue1;
    
    cout<<"Enter the first number"<<"\n";
    cin>>iVAlue2;

    iRet = Maximum(iValue1,iVAlue2);

    cout<<"Maximum number is :"<<iRet<<"\n";


    return 0;
}
