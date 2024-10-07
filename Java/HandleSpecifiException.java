import java.util.Scanner;

public class HandleSpecifiException {
    public static void main(String[] args) {
        int [] arr = new int[3];
        arr[0]=22;
        arr[1]=44;
        arr[2]=55;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the arr index : ");
        int ind = sc.nextInt();

        System.out.println("Enter the number you want to divide : ");
        int number = sc.nextInt();

        try{
            System.out.println("the value is array index enter is :"+arr[ind]);
            System.out.println("the value is array-number/value is :"+arr[ind]/number);
        }
        catch(ArithmeticException e) {
            System.out.println("ArithmeticException Exception");
            System.out.println(e);
        }
        catch(ArrayIndexOutOfBoundsException e) {
            System.out.println("ArrayIndexOutOfBoundsException Exception");
            System.out.println(e);
        }
        catch(Exception e) {
            System.out.println("Some other Exception");
            System.out.println(e);
        }
        }
    }

