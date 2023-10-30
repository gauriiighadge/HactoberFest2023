import java.io.*;
import java.util.*;
import java.lang.Math.*;
class Armstrong
 {

    public static void main(String[] args) 
	{

        double num , n, t, result = 0;
		Scanner sc=new Scanner(System.in);
		num=sc.nextDouble();

        n = num;

        while (n!= 0)
        {
            t= n % 10;
            result  =result+Math.pow(t, 3);
            n = n/10;
        }

        if(result == num)
            System.out.println(num + " is an Armstrong number.");
        else
            System.out.println(num + " is not an Armstrong number.");
    }
}
