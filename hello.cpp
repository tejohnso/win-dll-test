#include <string>

using namespace std;

__declspec( dllimport ) void saySomething(string);

void main() {
  saySomething("Hello");
}
