import java.util.Scanner;

public class NestedTryCatch {
    public static void main(String[] args) {
        boolean flag = true;
        int [] arr = new int[3];
        arr[0]=22;
        arr[1]=44;
        arr[2]=55;
        Scanner sc = new Scanner(System.in);

//        System.out.println("Enter the number you want to divide : ");
//        int number = sc.nextInt();

       while(flag) {
           System.out.println("Enter the arr index : ");
           int ind = sc.nextInt();
           try {
               System.out.println("this is nested try catch code :- ");
               try {
                   System.out.println(arr[ind]);
                   flag = false;
               } catch (ArrayIndexOutOfBoundsException e) {
                   System.out.println("ArrayIndexOutOfBoundsException Error");
                   System.out.println("Level 2");
                   System.out.println(e);
               }
           } catch (Exception e) {
               System.out.println("Level 1");
           }
       }
       System.out.println("Program is End");
    }
}
