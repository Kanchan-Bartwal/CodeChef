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
		char c='!';
		if(ob.hasNext())
        c=ob.next().charAt(0);
        if((c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U'))
        System.out.println("Vowel");
        else
        System.out.println("Consonant");
	}
}
