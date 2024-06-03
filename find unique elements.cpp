
*******************************************************************************/

#include <iostream>
using namespace std;

void uniqueelements(int arr1[], int size1, int uniquenumber[]){
   int unique =0;
    for(int i=0; i<size1; i++){
        bool isduplicate = false;
        
        for(int j=0; j<unique; j++){
            if(uniquenumber[j] == arr1[i]){
                isduplicate = true;
            }
        }
        if(!isduplicate){
            uniquenumber[unique] = arr1[i];
            unique++;
        }
    }
    cout<<"unique elements:"<<unique<<" "<<endl;
   for(int i =0; i<unique; i++){
       cout<<" "<<uniquenumber[i]<<" ";
    }
}

int main()
{
    int arr1[] = {1,2,24,5,9,3,83,7,44,21,21,24,2,1}; 
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int uniquenumber[size1];
    uniqueelements(arr1, size1, uniquenumber);
    return 0;
}

