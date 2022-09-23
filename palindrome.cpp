//William Wong 9/23/22
// This project is called Palindrome
// It checks if the word is spelled backwards as it is the same normally
// Example: Racecar would be the same backward

#include <iostream>
#include <string>
using namespace std;

int main () {

  // Initializing the variables
  
  char str[81];
  int count = 0;
  int count2 = 0;
  int count3 = 0;

  // Creating an alphabet array which later on will be used to
  // filter out spaces, commas, exclamation mark, etc...

  const char* alphabet = "abcdefghijklmnopqrstuvwxyz";

  // Take in the string input from the user
  
  cin.get(str, 81);
  cin.get();

  // Create new char variable called lower
  
  char lower[strlen(str)-1];

  // We then go through lower and set it equal to the str array and set
  // any capitalized letters to lower case letters
  
  for(int x = 0; x < strlen(str); x++) {

    lower[count++] = tolower(str[x]);
    
  }

  lower[count] = '\0';


  char str2[strlen(str)];

  // We then create the str2 char and set its values equal to
  // valid letters from the lower char, filtering through commas, spaces, etc.

  for(int i = 0; i < strlen(lower); i++) {

    for(int j = 0; j < 26; j++) {

      if(lower[i] == alphabet[j]) {

	str2[count2++] = lower[i];

      }     
    }
  }

  str2[count2] = '\0';

  char str3[strlen(str2)];

  // We create the str3 char and set the values to the reverse wording of
  // str2. So marry will become yrram
  
  for(int k = strlen(str2); k > 0; k--) {

    str3[count3++] = str2[k-1];
    
  }

  str3[count3] = '\0';

  // Check if str2 = str3
  // If so, the word the user entered is a palindrome because
  // the letters are the same frontward and backward

  if(strcmp(str2, str3) == 0) {

    cout << "This is a Palindrome!" << endl;
    
  } else {

    cout << "Not a Palindrome!" << endl;
    
  }
}
