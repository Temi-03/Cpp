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
    char* rep = new char[length(str)+1]; //creating mew char to input the old char with replacemtns
    int pos =0;//keeping track of the postion in the char
    
    while(str[pos]!='\0')
    {
        if(str[pos]==c)//if the letter ther matches at that postion replace it into the char 
        {
            rep[pos]=p;//changing the letter
        }
        else{
            rep[pos]=str[pos];//or it remains the same 
        }
        pos++;//incrementing position
    }
    rep[pos] = '\0';//adding it at the end
    return rep;//returning to main method 

}
int main()
{
    const char* str ="String";//declaring the word
    cout<<replace('i','x',str); //calling the method and printing out the resukt
}