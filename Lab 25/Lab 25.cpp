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