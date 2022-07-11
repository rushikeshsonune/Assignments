// 44.2    write java program to accept directory name from user and 
//         write names of all files from that directory into newly created file named as "Marvellous.txt"

import java.lang.*;
import java.io.*;
import java.io.IOException;
import java.util.*;

public class Assignment_44_2 
{

    public static void main(String[] args) throws Exception
	{
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter name of existing directory ");
        String FileName2 = sobj.nextLine();

        System.out.println("Enter name of txt file that you want to create");
        String FileName = sobj.nextLine();
        
        File file = new File(FileName);
        boolean result; 

        try   
        {  
           result = file.createNewFile(); 
 
           if(result)  
           {  
              System.out.println("file created "+file.getCanonicalPath()+"\n\n");  
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

	    PrintWriter pwobj = new PrintWriter(FileName);
        String[] pathnames;

        File f = new File(FileName2);
        pathnames = f.list();

    for (String pathname : pathnames) 
    {
        FileWriter writer;

        try 
        {
        writer = new FileWriter(FileName, true);
        PrintWriter printer = new PrintWriter(writer);
        printer.append(pathname + "\n");
        printer.close();
        }
         catch (IOException e) 
        {
        e.printStackTrace();
        }
    }
    System.out.println("All file names are copied into file "+ FileName);  

    }
}

