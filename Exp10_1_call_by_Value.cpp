//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;
void swap(int x,int y){
    int temp;
    temp =x;
    x = y;
    y = temp;
}
int main() {
    int a  =5;
    int b = 10;
    swap(a,b);
    cout << a << ' ' << b;
    return 0;
}
/*
Output:
5 10
*/

