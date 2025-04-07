#include <iostream>
using namespace std;

void printNumber(int* numPtr){
    cout << *numPtr << endl;
}

void printLetter(char* charPtr){
    cout << *charPtr << endl;
}

void print(void* ptr, char type){
    switch(type){
        case 'i': 
            cout << *((int*)ptr) << endl;
            cout << "-- dtype: int" << endl; 
            break;
        case 'c': 
            cout << *((char*)ptr) << endl; 
            cout << "-- dtype: char" << endl;
            break;
    }
}

int main()
{
    int number = 5;
    char letter = 'A';

    printNumber(&number);
    printLetter(&letter);

    print(&number, 'i');
    print(&letter, 'c');

    system("pause>0");
    return 0;
}