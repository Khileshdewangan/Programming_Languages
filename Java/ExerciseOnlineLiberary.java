class Library{
    String[] book;
    int no_of_book ;
    Library(){
        this.book = new String[100];
        int no_of_book = 0;
    }
    void addbook(String book){
        this.book[no_of_book] = book;
        no_of_book++;
        System.out.println(book + " has been added !");
    }
    void issedbook(String book){
        for(int i = 0; i<this.book.length;i++){
            if(this.book[i].equals(book)){
                System.out.println(book+" book has been issued.....!");
                this.book[i]=null;
                return;
            }
        }
        System.out.println("books are not available in liberay :");
    }

    void showbooks(){
        System.out.println("Avaulable books are :");
        for(String Storebooks : book){
            if(Storebooks==null){
                continue;
            }
            System.out.println("* "+ Storebooks);
        }
    }

    void returnbook(String book){
        addbook(book);
    }
}
public class ExerciseOnlineLiberary {
    public static void main(String[] args) {
        Library myliberary = new Library();
        myliberary.addbook("think and grow rich");
        myliberary.addbook("c++");
        myliberary.addbook("java");
        myliberary.addbook("python");
        myliberary.addbook("DSA");
        myliberary.showbooks();
        myliberary.issedbook("c++");
        myliberary.showbooks();
        myliberary.returnbook("c++");
        myliberary.showbooks();
    }
}
