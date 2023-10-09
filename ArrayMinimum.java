import java.util.Scanner;

class ArrayMinimum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        //Input size of array from user
        System.out.println("How many elements you want in the array?");
        int size = sc.nextInt();
        int[] array = new int[size];
        
        //Input array elements from the user
        System.out.println("Enter " + size + " numbers:");
        for(int i=0; i<size; i++)
        {
            array[i]=sc.nextInt();
        }
        
        //Finding the minimum element
        int min = Integer.MAX_VALUE;
        for(int i=0; i<size; i++)
        {
            if(array[i]<min)
            {
                min = array[i];
            }
        }
        
        //Printing the answer
        System.out.println("Minimum in the array is: " + min);
    }
}
