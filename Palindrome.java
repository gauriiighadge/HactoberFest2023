import java.util.*;
public class Palindrome{
    public static void main(String args[])
    {
        Scanner obj=new Scanner(System.in);
        System.out.println("Enter Number:");
        int n=obj.nextInt();
        int original=n;
        int remainder;
        int reverse=0;
        while(n!=0)
        {
          remainder=n%10;
          n=n/10;
          reverse=reverse*10+remainder;
        }
        if(reverse==original)
            System.out.println("Given Number Is A Palindrome");
        else
            System.out.println("Not Palindrome");
    }
}