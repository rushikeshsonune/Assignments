// 43.2  write a java program to accept file name from user and check wheather that file is regular file or not.

import java.lang.*;
import java.io.*;
import java.util.*;

class Assignment_43_2
{
  public static void main(String arg[]) throws IOException
  {
    Scanner sobj = new Scanner(System.in);
    System.out.println("Enter file name");
    String FileName = sobj.nextLine();

    File file = new File(FileName);

        if (file.isFile()) {
            System.out.println("File is a regular file.");
        } else {
            System.out.println("File not exists or is not a regular file.");
        }

  }
}