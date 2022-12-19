#include <iostream>
using namespace std;
main(){

int Bits;
int Bytes;
int KiloBytes;
int MegaBytes;
int Amount;

Bytes=8;
KiloBytes=1024;
MegaBytes=1024;
cout << "Enter Megabytes:";
cin >> Amount;
Bits=Amount*MegaBytes*KiloBytes;
cout << "Data in Bits is : " << Bits;
}