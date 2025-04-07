#include <iostream>
using namespace std;

int main()
{
    // int lNums[5] = { 2,3,4,5,6 };

    // cout << lNums << endl;
    // cout << &lNums[0] << endl;
    // cout << lNums[2] << endl;
    // cout << *(lNums+2) << endl;

    // int lNums[5];

    // for(int i=0; i<5; i++){
    //     cout << "Num: ";
    //     cin >> lNums[i];
    // }

    int lNums[5] = { 3,5,7,10,2};

    for(int i=0; i<5; i++){
        cout << *(lNums + i) << " ";
    }

    cout << "\n" << endl;
    
    for(int i=0; i<5; i++){
        cout << &lNums[i] << " -- " << *(lNums + i) << endl;
    }

    cout << "\n" << endl;

    cout << lNums << endl;
    cout << &lNums[0] << endl;
    cout << lNums[3] << endl;
    cout << *(lNums + 3) << endl;

    system("pause>0");
    return 0;
}