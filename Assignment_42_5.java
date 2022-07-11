// 42.5  write a java program to Accept directory name from user and display all names of files from that directory.

import java.lang.*;
import java.io.*;
import java.util.*;


public class Assignment_42_5
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Directory Name");
        String FileName = sobj.nextLine();

        String[] pathnames;

        File f = new File(FileName);

        pathnames = f.list();

        for (String pathname : pathnames) 
        {
            // Print the names of files and directories
            System.out.println(pathname);
        }
    }
}


