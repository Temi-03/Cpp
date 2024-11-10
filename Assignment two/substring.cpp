#include <iostream>
using namespace std;
char* substring(int i, int j, const char* str)
{
    char* sub = new char[j-i];// length of the substring 
    int pos = i;// 
    int num = 0; // postiton in the index 
    while(str[pos]!= '\0')//not including the /0
    {
        if(pos<j)//checking the postion in the char is less than the upper boundary not including
        {
            sub[num]=str[pos]; //will insert the char in the substring char
            num++;//increment the position in the substring char so ne character can be inserted 
        }
        pos++;// increment postion in the loop
    }
    sub[num] ='\0';//adding to the end of char
    return sub; //retuning the substring

}
int main()
{
        const char* str= "string";//declaring teh char
        cout<<substring(0,5,str);//calling method and printing out the substring
}