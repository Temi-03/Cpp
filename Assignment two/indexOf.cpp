#include <iostream>
using namespace std;
int indexOf(char c, const char* str)
{
    int pos = 0; // keep the postion of where thy are in the string 
    while(str[pos]!= '\0') // to stop whe  u reach the end of the string
    {
        if(str[pos]==c)// if the fisrt occurance of the string is found return it back 
        {
            return pos;
            
        }
        
        
            
        
        pos++;// incrementing to move trough the postitions of the char 
    }
    return -1;// if the index is not found 
}

int main()
{ 
    char c = 'i';//symbol we want tp find 
    const char* str = "string";//word 
    cout<<indexOf(c, str); // calling method and printing out the resukt 
}