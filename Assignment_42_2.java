// 42.2  write java program to accept file name from user and open that file and display content on screen.

import java.lang.*;
import java.awt.Desktop;
import java.io.* ;
import java.util.*;

class Assignment_42_2 
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
        if (!file.exists())
        {  
            System.out.println("Unable to open file..."); 
    
        }
    }
    catch(Exception e) 
    {
        e.printStackTrace();
    }

    try 
    {
        File myObj = new File(FileName);
        Scanner myReader = new Scanner(myObj);

        while (myReader.hasNextLine()) 
        {
          String data = myReader.nextLine();
          System.out.println(data);
        }
        myReader.close();

    } 
    catch (FileNotFoundException e) 
    {
        System.out.println("An error occurred.");
        e.printStackTrace();
    }
   }  
} 
