#include <iostream>
using namespace std;

int main()
{ 
   string s="My NAME IS SHREYAS";
   int count=0;
   for(int i=0;i<s.length();i++)
   {
    if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' )
    {
     count++;
    }
}
    cout<<"Number of vowels in the string is "<<count<<endl;

}




