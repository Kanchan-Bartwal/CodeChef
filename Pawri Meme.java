/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner ob=new Scanner(System.in);
     short t=0,i;
     if(ob.hasNextShort())
     t=ob.nextShort();
     String str="";
     int len=0;
     for(i=1;i<=t;i++)
     {
        str=ob.next();
        str=str.toLowerCase();
        str=str.replace("party","pawri");
        System.out.println(str);
     } 
	}
}
