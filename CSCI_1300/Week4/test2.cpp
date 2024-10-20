#include <iostream>
#include <cassert>

using namespace std;


bool isEven(int num) {
return num % 2 == 0;
}

int main() {

    assert(isEven(4) == true);

    cout << "yes true" << endl;

return 0;
}
