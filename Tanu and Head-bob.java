import java.io.*;
import java.util.Scanner;
public class Main 
{
    public static void main(String[]args)
    {
        Scanner ob=new Scanner(System.in);
        int n,i,j,len,yes,no,ind,t=0;
        String str;
        char ch;
        if(ob.hasNextInt())
        t=ob.nextInt(); //number of test cases
        for(i=1;i<=t;i++)
        {
            n=ob.nextInt(); //number of gestures
            str=ob.next(); //string of observed gestures
            str=str.toUpperCase();
            len=str.length();
            yes=0;no=0;ind=0;
            for(j=0;j<len;j++)
            {
                ch=str.charAt(j);
                if(ch=='Y')
                yes=yes+1;
                else if(ch=='N')
                no=no+1;
                else if(ch=='I')
                ind=ind+1;
            }
            if(ind>0)
            System.out.println("INDIAN");
            else if(yes>0)
            System.out.println("NOT INDIAN");
            else if((ind==0)&&(yes==0)&&(no>0))
            System.out.println("NOT SURE");
        }
    }
}
