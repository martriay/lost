#include <iostream>
#include <cstdlib>
 
int main() {
  using namespace std;
  int numbers[] = {4, 8, 15, 16, 23, 42}
    , in = 0
    , i = 0
    ;

  while (true) {
    cout << "¬ Enter the number: ";
    cin >> in;

    if (in != numbers[i++ % 6]) {
      exit(1);
    }

  }

}
