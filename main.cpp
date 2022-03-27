#include <iostream>
#include <fstream> 
#include <string> 
using namespace std; 

int main() {
 int test_score; 
 int sum = 0;
 int count = 0;
 double average; 
 char response; 

do { 
  cout << "Enter score: ";
  cin >> test_score; 
  sum= sum+test_score;
  count++; 
  cout << "Do You want to enter another score? (y/n) : "; 
  cin >> response; 
} while (response == 'y'); 

//cout << count;
//cout << sum; 
average= sum/count;
cout << "The average is " <<average <<endl; 
return 0; 
}

//warning: app don't stop user from using negative values or values above 100.  