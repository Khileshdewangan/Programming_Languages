class InvalidInputException extends Exception{
    public String toString(){
        return "cannot add 8 and 9";
    }
    public String getMessage(){
        return "I am Message()";
    }
}
class CannotDivideByZeroException extends Exception{
    public  String toString(){
        return  "cannot divide by 0";
    }
}
class CannotmultiplyByZeroException extends Exception{
    public  String toString(){
        return  "cannot divide by 0*0";
    }
}
class CustomCalculator{
    double add(double a, double b) throws InvalidInputException{
        if(a==8||b==9){
            throw new InvalidInputException();
        }

        return  a+b;
    }
    double Subtract(double a, double b){
        return  a-b;
    }
    double multiply(double a, double b)throws  CannotmultiplyByZeroException{
        if(a==0&&b==0){
            throw new CannotmultiplyByZeroException();
        }
        return  a*b;
    }
    double divide(double a, double b) throws CannotDivideByZeroException{
        if(b==0){
            throw new CannotDivideByZeroException();
        }
        return  a/b;
    }
}
public class ExerciseCalculator {
    public static void main(String[] args) throws  InvalidInputException ,CannotDivideByZeroException,CannotmultiplyByZeroException{
        CustomCalculator obj =new CustomCalculator();
        System.out.println(obj.add(2,5));
        System.out.println(obj.divide(10,0));
        System.out.println(obj.multiply(2,2));
    }
}
