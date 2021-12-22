#include <iostream>
#inclide <string>
using namespace std;
class Code(){
  public:
  int number;
  const char *input;
}
int main(){
  Code code;
  code.input = "hello?";
  code.number = 50;
  cout << code.number;
  cout << code.input;
}
