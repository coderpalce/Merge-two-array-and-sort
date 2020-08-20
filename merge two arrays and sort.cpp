#include<iostream>
#include <algorithm>
using namespace std;
class merge1{
    public:
    void mergetwoarray(){
    int arr1[]={0,3,9,8};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={1,4,9,7,3};
    int size2=sizeof(arr2)/sizeof(arr2[0]);
     int total;
    total=size1+size2;
    int arr3[total];


        for(int i=0;i<size1;i++){
                arr3[i]=arr1[i];
        }
        for(int i=size1, j=0;i<total;i++,j++){
            arr3[i]=arr2[j];
        }

    int key;

    int sum;
    int j;
    for(int i=1;i<total;i++){

            key=arr3[i];
            j=i-1;
            while(j>=0  && arr3[j]>key){
                arr3[j+1]=arr3[j];
                j=j-1;

            }
        arr3[j+1]=key;

    }
        for(int i=0;i<total;i++){
            cout<<arr3[i]<<" ";
        }

    }
};
int main(){
    merge1 m1;
    m1.mergetwoarray();
    return 0;
}
