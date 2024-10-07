public class ThrowThrows {
    public static class radidusException extends  Exception{
        public String toString(){
        return  "radius cannot be negative";
        }
    }
    public static int divide (int a, int b) throws ArithmeticException{
        int result =  a/b;
        return result;
    }
    public static double area(int a) throws  radidusException {
        if(a<0){
            throw new radidusException();
        }
        double result = Math.PI *a*a;
        return result;
    }
    public static void main(String[] args) {
        try{
            int c= divide(6,5);
            System.out.println(c);
        }
        catch(Exception e){
                System.out.println(e);
        }
//        double arc = area(6);
        try{
            double arc = area(-5);
            System.out.println(arc);
        }
      catch(Exception e){
            System.out.println(e);
      }
    }
}
