// 44.1  write a java program to Accept directory name from user and display all names of files from that directory which are regular file.

import java.lang.*;
import java.io.*;
import java.util.*;


public class Assignment_44_1
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Directory Name");
        String FileName = sobj.nextLine();

        File file = new File(FileName);

        File[] f1 = file.listFiles((d,f)->f.toLowerCase().endsWith(".txt"));

        for(File f : f1)
        {
           System.out.println(f.getName()); 
        }

        
    }
}


