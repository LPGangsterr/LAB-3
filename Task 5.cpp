#include <iostream>
using namespace std;
main(){
float Current;
float Charge;
float Time;
cout << "Enter charge:";
cin >> Charge;
cout << "Enter Time:";
cin >> Time;
Current=Charge/Time;
cout << "Current passing through wire is:" << Current;
}