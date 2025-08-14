//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;
void increment_r(float &sal){
    sal = sal + sal*0.2;
}
void increment_v(float sal){
    sal = sal + sal*0.2;
}
int main() {
    float Sal;
    cout << "Enter Your Current Salary: ";
    cin >> Sal;
    int Proj;
    int Pub;
    int Profit;
    int NewP;
    cout << "How many Research Project you had done? ";
    cin >> Proj;
    cout << "How many Research Publication you had done? ";
    cin >> Pub;
    cout << "How much Profit you had earned for company? ";
    cin >> Profit;
    cout << "How many New Projects you had earned? ";
    cin >> NewP;
    if(Proj&&Pub&&Profit>100000||Pub&&Profit>100000&&NewP||Proj&&Profit>100000&&NewP||Proj&&Pub&&NewP){
        increment_r(Sal);
        cout << "Congrats..! Your New Salary is: "<< Sal << endl;
    }
    else{
        increment_v(Sal);
        cout << "Sorry! You did not meet necessary condition for increment." << endl;
        cout << "Your Salary is: "<< Sal << endl;
    }
    return 0;
}
/*
Output:
Case 1:
Enter Your Current Salary: 50000
How many Research Project you had done? 2
How many Research Publication you had done? 3
How much Profit you had earned for company? 150000
How many New Projects you had earned? 1
Congrats..! Your New Salary is: 60000

Case 2:
Enter Your Current Salary: 50000
How many Research Project you had done? 0
How many Research Publication you had done? 0
How much Profit you had earned for company? 150000
How many New Projects you had earned? 12
Sorry! You did not meet necessary condition for increment.
Your Salary is: 50000

*/
