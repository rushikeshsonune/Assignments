// 42.3  write java program to accept file name from user and open that file in write mode and write some data at the end of file.

import java.lang.*;
import java.awt.Desktop;
import java.io.* ;
import java.util.*;

class Assignment_42_3 
{
   public static void main(String arg[])
   {
     Scanner sobj = new Scanner(System.in);
     
     System.out.println("Enter File Name");
     String FileName = sobj.nextLine();

     System.out.println("Enter Data");
     String Data = sobj.nextLine();

    FileWriter writer;

    try 
    {
        writer = new FileWriter(FileName, true);
        PrintWriter printer = new PrintWriter(writer);
        printer.append(Data);
        printer.close();
    }
    catch (IOException e) 
    {
        e.printStackTrace();
    }
   }
} 
