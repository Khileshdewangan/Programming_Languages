import java.util.Scanner;

class MyException extends Exception{
    @Override
    public String toString(){
//        return   super.toString() + " i am toString()";
        return " i am toString()";
    }
    @Override
    public String getMessage(){
        return super.getMessage() + " I am getMessage";
    }
}
public class ExceptionClass {
    public static void main(String[] args) {
        int a;
        Scanner sc = new Scanner(System.in);
        a= sc.nextInt();
        if(a<9){
            try{
//                throw  new MyException();
                throw new ArithmeticException("this is Arithmatic Exception");
            }

            catch (Exception e){
//                System.out.println(e.getMessage());
                System.out.println(e.toString());
                System.out.println(e);
                e.printStackTrace();
                System.out.println("finish");
            }
            System.out.println("Yes finished");
        }
    }
}
