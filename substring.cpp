#include<iostream>
#include <stdlib.h>
using namespace std;
void substrPosition(string str, string sub_str) {
   bool flag = false;
   for (int i = 0; i < str.length(); i++) {
      if (str.substr(i, sub_str.length()) == sub_str) {
         cout << i << " ";
         flag = true;
      }
   }
   if (flag == false)
      cout << "NONE";
}
int main() {
   string str;
   getline (cin, str);
   string sub_str;
   getline (cin, sub_str);
   cout << "Substrings are present at: ";
   substrPosition(str, sub_str);
}
