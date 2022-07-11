// 43.1  write a java program to accept two files from user and open first file and create new file(second file) 
//         and copy data from first file into newly created file.

import java.lang.*;
import java.io.*;
import java.util.*;

class Assignment_43_1
{
  public static void main(String arg[]) throws Exception
  {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter name of source file");
    String Src_File_Name = sobj.nextLine();

    System.out.println("Enter Filename which you want to create");
    String New_File_Name = sobj.nextLine();
        
        File file = new File(New_File_Name);
        boolean result; 

        try   
        {  
           result = file.createNewFile(); 
 
           if(result)  
           {  
              System.out.println("file created Sucessfully "+file.getCanonicalPath());  
           }  
           else  
           {  
              System.out.println("File already exist at location: "+file.getCanonicalPath());  
           }  
        }      
        catch (IOException obj)   
        {  
           obj.printStackTrace(); 
        }


        PrintWriter pwobj = new PrintWriter(New_File_Name);

        BufferedReader bobj = new BufferedReader(new FileReader(Src_File_Name));
        String line = bobj.readLine();
        while(line != null)
        {
          pwobj.println(line);
          line = bobj.readLine();  
        }
        System.out.println("Data Copied from  " +Src_File_Name+ "  to  " +New_File_Name);

        pwobj.flush();

        bobj.close();
        pwobj.close();
  }

}

