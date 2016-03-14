/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{   
 if(n>0)
    {
    
     bool outcome=false;
     
     for(int i=0;i<n;i++)
         { 
             if(outcome==false)
         {
               if(value==values[i])
             {
                  outcome=true;
               }
               else
               {
                   outcome=false;
               }
         }
         else
         {
             break;
         }
          }
    if(outcome==true)
    return true;
    else
    return false;
    // TODO: implement a searching algorithm
    }
    else
    {
        return false;
    }
}


/**
 * Sorts array of n values from biggest to smallest
 */
 
void sort(int values[], int n)
{   
    bool sorted=false;
    for(int i=0;i < n;i++)
    {
        if(values[i] < values[(i + 1)])
            {
            int tempvalue1 = values[i];
            int tempvalue2 = values[i+1];
            values[i+1]=tempvalue1;
            values[i]=tempvalue2;
            } 
    }
    for(int i=0;i < n;i++)
    {
       if(values[i]<values[i+1])
       {    
           sort(values, n); 
           sorted=false;
       }
       else
       sorted=true;
    }
    if(sorted==true)
    {
        return;
    }
    else
    {
        sort(values, n);
    }
    
    
    // TODO: implement an O(n^2) sorting algorithm
}
