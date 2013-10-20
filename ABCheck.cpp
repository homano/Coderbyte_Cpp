#include <iostream>
using namespace std;

string ABCheck(string str) {

  int len = int(str.size());
  for (int i = 0; i < len; i++){
    if (str[i] == 'a' || str[i] == 'A'){
      if (i+4 < len  && (str[i+4] == 'b' || str[i+4] == 'B'))
          return "true";
    }
    if (str[i] == 'b' || str[i] == 'B'){
      if (i+4 < len  && (str[i+4] == 'a' || str[i+4] == 'A'))
          return "true";
    }
  }
  // code goes here
  return "false";

}

    int main() {
        string a = "Laura sobs";
        cout << ABCheck(a) << endl;
        return 0;
}
