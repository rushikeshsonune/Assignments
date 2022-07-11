// 42.4  write java program to accept file name from user and create new file of that name if it is not existing.

import java.lang.*;
import java.util.*;
import java.io.*;

class Assignment_42_4
{
    public static void main(String[] args) 
	{
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter File Name");
        String FileName = sobj.nextLine();
        
        File file = new File(FileName);
        boolean result; 

        try   
        {  
           result = file.createNewFile(); 
 
           if(result)  
           {  
              System.out.println("file created Sucessfully "+file.getCanonicalPath()+"\n\n");  
           }  
           else  
           {  
              System.out.println("File already exist at location: "+file.getCanonicalPath()+"\n");  
           }  
        }      
        catch (IOException obj)   
        {  
           obj.printStackTrace(); 
        }
    }
}