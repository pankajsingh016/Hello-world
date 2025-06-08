#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void merge(vector<int>&arr, int left, int mid, int right){

    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L1(n1),L2(n2);

    for(int i=0;i<n1;i++)
    {
        L1[i] = arr[i+left];
    }
    for(int j=0;j<n2;j++){
        L2[j] = arr[j+mid+1];
    }

    int i=0,j=0;
    int k= left;

    while (i<n1 && j<n2){
        if(L1[i]<= L2[j]){
            arr[k] = L1[i];
            i++;
        }
        else{
            arr[k] = L2[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = L1[i];
        k++;
        i++;
    }
    while(j < n2){
        arr[k] = L2[j];
        k++;
        j++;
    }

}

void mergeSort(vector<int>&arr,int left, int right){

    if(left >= right){
        return;
    }

    int mid = left + (right - left)/2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);
 
}

int main(){

    vector<int> arr = {20,22,24,1,2,10,11,12,14,16};
    int l = 0;
    int h = arr.size();
    
    mergeSort(arr,l,h-1);


    for(int i=0;i<h;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


