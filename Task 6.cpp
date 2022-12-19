#include <iostream>
using namespace std;
main(){
string Name;
float ECAT;
float Matric;
float Inter;
float Aggregate;

cout << "Enter Name:";
cin >> Name;
cout << "Enter Matriculation marks:";
cin >> Matric;
cout << "Enter Intermediate part 1 marks:";
cin >> Inter;
cout << "Enter ECAT marks:";
cin >> ECAT;
Aggregate=((ECAT/400)*50)+((Inter/550)*40)+((Matric/1100)*10);
cout << "Your Aggregate is : " << Aggregate;
}