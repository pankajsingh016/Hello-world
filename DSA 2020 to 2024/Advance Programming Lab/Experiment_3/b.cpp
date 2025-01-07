//rotate an array to its left 

#include<bits/stdc++.h>

using namespace std;

std::vector<int> left_rotation(std::vector<int> & arr,int rotations)
{
    std::vector<int>rotated_array;

    int t = 0;
    if(rotations < arr.size())
    {
        t = rotations;        
    }

    else{

        t = rotations%arr.size(); 
    }

    for(int i=t;i<arr.size();i++)
    {
        rotated_array.push_back(arr[i]);
    }

    for(int i=0;i<t;i++)
    {
        rotated_array.push_back(arr[i]);
    }

    return rotated_array;

}


int main()
{
    int num_elements, num_left_rotations;

    cout<<"Enter Number of Element :";
    std::cin>>num_elements;

    cout<<"Enter Number of Left Rotation to do ?";
    std::cin>>num_left_rotations;

    std::vector<int> input_arrary(num_elements);

    for(int i=0;i<num_elements;i++)
    {
        cout<<"Enter "<<i<<" th element of the array :";
        cin>>input_arrary[i];
    }

    vector<int> result = left_rotation(input_arrary,num_left_rotations);


    cout<<"The Resultant Left Roatated array is : ";
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }

    cout<<endl;

    return 0;
}