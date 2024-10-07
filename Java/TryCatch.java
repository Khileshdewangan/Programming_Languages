public class TryCatch {
    public static void main(String[] args) {
        int a[]={25,36,14,87,52,15};
//        int b=0;
        try {
           System.out.println(a[20]);
        }
        catch (Exception e){
            System.out.println("somthing went wrong : ");
            System.out.println(e);
        }

    }
}
