#include <iostream>
/* using namespace for simplicity */
using namespace std;

bool is_symmetric(string original){
  int or_len = original.length();
  string flipped = "";
  while (or_len > 0){
    or_len -= 1;
    flipped += original[or_len];
  }
  /* debugging purposes
  for(int i = 0; i< flipped.length(); i++){
    cout << "the " << i << "th letter of flipped is " << flipped[i] << "\n";
  }
 */
  return flipped == original;
}

int main(){
  string test;
  cin >> test;
  if(is_symmetric(test) == 1){
    cout << test << " is a palindrome \n";
  }
  else{
    cout << test << " is not a palindrome \n";
  }
  return 0;
}
