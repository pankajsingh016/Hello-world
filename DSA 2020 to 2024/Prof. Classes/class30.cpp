#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int *ptr,*ptr1,i;
    ptr = arr;     //address of arr 0
    ptr1 = &arr[2];  //address of arr 2nd index
    *ptr =-1;       // 0th index assign to -1
    *(ptr+1) =0;    //
    *(ptr1+1) =1;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<< *arr;  //*arr is a constant pointer whose value cannot be changed.
    return 0;
}