
#include <iostream>
using namespace std;

void commonelements(int arr1[], int arr2[], int size1, int size2, int commonvalue[]){
   int common = 0;
    for(int i =0; i<size1; i++){
        for(int j =0; j<size2; j++){
            if(arr1[i] == arr2[j]){
                commonvalue[common] = arr1[i];
                common++;
            }
        }
    }
    
    cout<<"common values:";
    for(int i =0; i<common; i++){
        cout<< commonvalue[i]<<" ";
    }
}

int main()
{
    int arr1[] = {1,2,24,5,9,3,83,7,44,21}; 
    int arr2[] = {11,21,2,44,45,24,49,83,90,88};
    
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
     
    int commonvalue[min(size1, size2)];
    commonelements(arr1, arr2, size1, size2, commonvalue);
    return 0;
}