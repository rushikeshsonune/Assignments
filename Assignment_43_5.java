// 43.5  write a program which accepts directory name and display all names of files anf size of each file on screen.

import java.lang.*;
import java.io.File;
import java.io.IOException;
import java.util.*;

public class Assignment_43_5 
{
   public static void main(String args[]) throws IOException 
   {
      Scanner sobj = new Scanner(System.in);
        
      System.out.println("Enter Directory Name");
      String FileName = sobj.nextLine();

      File directoryPath = new File(FileName);
      
      File filesList[] = directoryPath.listFiles();

      System.out.println("List of files in directory:");
      for(File file : filesList) 
      {
         System.out.println("File name: "+file.getName());
         
         System.out.println("Size : "+file.getTotalSpace()+"\n");
      }
   }
}