//Authors: Keenan Jacob
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string first, last;
  string nickname="";


  //get user input
  cout<< "What is your first name?\n";
  cin>>first;

  cout<< "What is your last name?\n";
  cin>>last;

  nickname.push_back(first[0]);
  nickname.push_back('.');
  nickname.push_back(last[0]);
  nickname.push_back('.');

  cout<< "Welcome, " <<nickname<< ", here is your fortune...\n"; 

 int lucky= first.length(); 

  //tell fortune

  cout<< "your lucky number is " <<lucky<< "\n";

  //fortune continued

int len= last.length();

  if (first[0]=='a' || first[0]=='A' || first[0]=='e' || first[0]=='E' || first[0]=='i' || first[0]=='I' || first[0]=='o' || first[0]=='O' || first[0]=='u' || first[0]=='U')
  {cout<< "you are destined to be famous!\n";
  }
  else 
  {cout<< "you should keep a low profile.\n";
  }

  if (last[len-1]=='a' || last[len-1]=='e' || last[len-1]=='i' || last[len-1]=='o' || last[len-1]=='u')
  {
  cout<< "you have already met your true love.\n";
  }

  cout<< "have a good day!\n";

  return 0;

}
