// 42.1  write java program to accept file name from user and open that file.

import java.lang.*;
import java.awt.Desktop;
import java.io.* ;
import java.util.*;

class Assignment_42_1 
{
   public static void main(String arg[])
   {
     Scanner sobj = new Scanner(System.in);
     
     System.out.println("Enter File Name");
     String FileName = sobj.nextLine();

    try
    { 
        File file = new File(FileName);
        if (!Desktop.isDesktopSupported())  
        {
          System.out.println("not supported");
          return;
        }
        Desktop desktop = Desktop.getDesktop();
        if (file.exists())
        {   
        desktop.open(file);
        }
        else
        {
          System.out.println("Unable to open file...");
        } 
    }
    catch(Exception e) 
    {
        e.printStackTrace();
    }
   }  
} 
