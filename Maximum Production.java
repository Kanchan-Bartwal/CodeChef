import java.io.*;
import java.util.*;
class Main
{
    public static void main(String[]args)
    {
        Scanner ob=new Scanner(System.in);
        int i,t=0;
        if(ob.hasNextInt())
        t=ob.nextInt();
        short d,x,y,z;
        int full,half;
        for(i=1;i<=t;i++)
        {
            d=ob.nextShort();
            x=ob.nextShort();
            y=ob.nextShort();
            z=ob.nextShort();
            full=7*x;
            half=(d*y)+((7-d)*z);
            if(full>half)
            System.out.println(full);
            else
            System.out.println(half);
        }
    }
}
