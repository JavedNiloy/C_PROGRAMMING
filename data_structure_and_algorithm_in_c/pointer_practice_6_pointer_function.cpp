/*Return multiple values 
from a function using pointers*/

#include <iostream>
using namespace std;

int getMin(int numbers[]){
    int min = numbers[0];
    int aLength = sizeof(numbers) / sizeof(numbers[0]);
    for(int i=0; i<aLength; i++){
        if(numbers[i] < min){
            min = numbers[i];
        }
    }
    return min;
}

int main()
{
    int nums[5] = { 2, -5, 6, 10, 44 }; 

    cout << "smallest num: " << getMin(nums) << endl;
    

    system("pause>0");
    return 0;
}