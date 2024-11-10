#include <iostream>
using namespace std;
Matrix ( unsigned int m , unsigned int n )
{
       // int pAr = NULL;//assign it no value at the start
       int pAr = new int*[m]; //creating the dynamic memory of the matric 
        for(int i =0; i<n; i++)
        {
            pAr[i]=  new int[n]; //giving the sizes of the cols to the rows
        }
        for


}
Matrix ( const Matrix & mat )
{

}
Matrix (int ** array , unsigned int m , unsigned int n )
{

}

unsigned int rows () const
{
    
}