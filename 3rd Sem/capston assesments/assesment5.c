#include<stdio.h>
#include<stdlib.h>

int main (){
     
     FILE *ptr, *ptr2;
     ptr = fopen("input.txt","r");
     int j =4;
     while (j--)
     {
        
         char name [20];
        fscanf(ptr,"%s \n",name);
    
      for (int i = 0; i < 20; i++)
      {
        if (name[i]>='a' && name[i]<='z')
        {
          name[i]=name[i]-32;
        }
        
      } 
      ptr2= fopen("output.txt","a");
      fprintf(ptr2,"%s\n",name);
   
     }
       fclose(ptr);
       fclose(ptr2);

 

}