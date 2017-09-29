# CodingConcepts
My explanations of the fudenmentals of coding



# Pointers
Pointers are addresses of memories that points to a variable which stores data. 
//---create pointers                              
int k=5;                                          
int *pk=k; // (create pointers, pk points to k)   
  //--Memory Diagram                              
  |5| <- ||                                       
  k      pk                                       
  //--Memory Diagram--                           
  //-explanation                                 
   a pointer pk pointing to k is created , pk stores the address of k , 
   since k  is  initialised to 5, pointer pk whenever called will go to k, and grab whatever k is currently = to;  
  //-explanation-  
//---create pointers---                            

//---creating memory
int m=4; // 1 byte is allocated to store integer 4 in m, which uses a new address,
  //--Memory Diagram 
  |4|
  m
  |5| <- ||                                       
  k      pk    
  //--Memory Diagram--  
//---creating memory---

