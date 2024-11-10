#include <iostream>
using namespace std;
unsigned int length(const char* str)
{
    int count = 0; //to keep track of the length 
    while (str[count]!= '\0')
    {
        count ++;//incrementing when it doesnt see the \0
    }
    return count; // return the length of the code to the main
}
int main()
{
   // cout<<"please enter a word"<<'\n';
    const char* i = "string"; //char pointer
    cout<<length(i); //calling the method  and printing out the result  

}