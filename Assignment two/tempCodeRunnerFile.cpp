#include <iostream>
using namespace std;
unsigned int length(const char* str)
{
    int count = 0; //to keep track of the length 
    while (str[count]!= '\0')
    {
        count ++;//incrementing when it doesnt see the \0
    }
    return count; //in return the length of the code to the ma
}
char*replace(char c, char p, const char* str)
{
    char* rep = new char[length(str)+1];
    int pos =0;
    
    while(str[pos]!='\0')
    {
        if(str[pos]==c)
        {
            rep[pos]=p;
        }
        else{
            rep[pos]=str[pos];
        }
        pos++;
    }
    rep[pos] = '\0';
    return rep;

}
int main()
{
    const char* str ="String";
    cout<<replace('i','x',str);
}