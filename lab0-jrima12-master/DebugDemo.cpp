// How do you import the I/O library?
//#include <>
#include <iostream>
#include <cstdint>
#include <string>
// Set the namespace... or don't, up to you
using namespace std;
const std::string boundary =
    "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";

int main() {
  std::cout << "Part 1:" << boundary << std::endl;
  // Write a for loop that prints out the numbers from 0 to 4, inclusive
for (int i=0; i<5; i++){
  std::cout<< i << endl;
}
  std::cout << std::endl << "Part 2:" << boundary << std::endl;
  // Write a for loop that prints out the numbers from 10 down to 5, inclusive
for (int n = 10; n > 4; n--){
  std::cout << n << endl;
}
  std::cout << endl;
  return 0;
}