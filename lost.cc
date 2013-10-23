#include <iostream>
#include <cstdlib>
 
int main() {
  using namespace std;
  int lostNumbers[6] = {4,8,15,16,23,42};

  for (int i = 0; i < 6; i++) {
    int x;
    cout << "Enter the required number: ";
    cin >> x;
    if ( x != lostNumbers[i] ) {
      exit(1);  
    } else if (i == 5) {
      main();
    }
  }
}
