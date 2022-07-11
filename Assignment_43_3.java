// 43.3  write a program which accept Directory name from user and  Create that Directory.

import java.lang.*; 
import java.io.File;    
import java.util.Scanner;  

class Assignment_43_3
{    
    public static void main(String args[]) 
    {          
      Scanner sc = new Scanner(System.in);  

      String path = ".\\";

      System.out.println("Enter the name of a directory: ");  
      path = path+sc.next();  
         
      File f1 = new File(path);  
       
      boolean bool = f1.mkdir(); 

      if(bool)
      {  
         System.out.println("Directory is created successfully");  
      }
      else
      {  
         System.out.println("Error Found!");  
      }  
   }  
} 