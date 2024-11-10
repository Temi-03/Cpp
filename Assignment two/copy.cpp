#include <iostream>
using namespace std;
unsigned int length(const char* str)
{
    int count = 0; //to keep track of the length 
    while (str[count]!= '\0')
    {
        count ++;//incrementing when it doesnt see the \0
    }
    return count; //in return the length plus the \0 of the code to the main 
}
char* copy(char* dest, const char* src)
{
    if(length(dest)>=length(src)+1)//checking if the size of the dest is a match with the scr plus the /0
    {
       for(int i =0; i<=length(src);i++)//inserting the src into the dest if it fits
       {
        dest[i]=src[i];//coppying the src into the dest
       }
       
        return dest;//retirning it 
    } 
    else
    {
        return NULL;//if size is not matching null noting is returned
    }

}

int main()
{
    cout<<"Enter the space of the destination"<<'\n';//asking for size of the dest
    int i;
    cin>>i;//taking input of isze
    char* dest= new char[i];//declaring size of dest 
    const char* src = "string";//wwhat is to be copiedx
    char* answer = copy(dest,src);//calling methos 
    cout<<answer<<'\n';//printing out the reulst 
    
    
}