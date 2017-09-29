# CodingConcepts
My explanations of the fundamentals of coding -Nwy



# Pointers
Pointers are addresses of memories that points to a variable which stores data. 
//---create pointers 
int *pk; // create new pointer,to avoid bugs , initialise pointers to null
int k; // allocate new memory             
pk = &k;  // pk points to k
*pk=5; //  deference 5, in other words, put the value 5 in wherever p is pointing to , which in this case its pointing to k
  //--Memory Diagram                              
  |5| <- ||                                       
  k      pk                                       
  //--Memory Diagram--                           
  //-explanation                                 
   a pointer pk pointing to k is created , pk stores the address of k , 
   since k  is  initialised to 5, pointer pk whenever called will go to k, and grab whatever k is currently = to;  
  //-explanation-  
//---create pointers---                            

//---creating memory and changing where pointer is pointing to 
int m=4; // 1 byte is allocated to store integer 4 in m, which uses a new address,
pk=&m;   // pk now points to m rather than k
  //--Memory Diagram 
  |4| <-  ^
  m       |
  |5|    ||                                       
  k      pk    
  //--Memory Diagram--  
//---creating memory and changing where pointer is pointing to---
//---

//---Summary of Pointers
*pk //pointer
&m  //memory address // without & or * means , the memory data value of m
*pk = &m //pointer pk points to memory m
*pk=100  // pointer pk puts value 100 into memory m, so now m = 100;
//---Summary of Pointers---


 
