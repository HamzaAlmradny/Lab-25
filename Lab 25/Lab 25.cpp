// Documentation section

/*
File Name : Lab 25
Author : Hamza Alsayed Almradny
Version : V.1
Purpose : display the cube of the number up to given an integer.
Date :24/7/2025
*/





#include <iostream> 
using namespace std;

int main() {

    int num, i = 1, cube;

    cout << "Enter a num: ";

    cin >> num;

    while (i<=num) {
        cube = i * i * i;
        cout << cube << endl;
        i++;
    }
  
    return 0;
}










//for (i; i <= num; ++i) {

//    cube = i * i * i;

  //  cout << cube << endl;
//}