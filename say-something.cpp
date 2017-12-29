#include <iostream>
#include <string>

using namespace std;

__declspec( dllexport ) void saySomething(string);

void saySomething(string something) {
  cout << something << endl;
}
