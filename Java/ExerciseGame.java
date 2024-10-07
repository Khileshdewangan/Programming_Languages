//import java.util.Random;
import java.util.*;
class Game{
    public int number;
    public int inputNumber;
    public int noOfGuesses = 0;
    Game(){
        Random Rand = new Random();
        this.number = Rand.nextInt(100);
    }
    void takeUserInput(){
        System.out.print("Guess the number : ");
        Scanner sc = new Scanner(System.in);
        inputNumber = sc.nextInt();
    }
    boolean isCorrectNumber(){
        noOfGuesses++;
        if(inputNumber == number){
            System.out.format("YES....! you guessed it right , it was %d \nYou guessed it %d attempts " , number, noOfGuesses);
            return  true;
        } else if (inputNumber<number) {
            System.out.println("To less......... ");
        }
        else if (inputNumber>number) {
            System.out.println("To High......... ");
        }
        return  false;
    }
}
public class ExerciseGame {
    public static void main(String[] args) {

        Game g = new Game();
        boolean b = false;
        while(!b) {
            g.takeUserInput();
            b = g.isCorrectNumber();
//            System.out.println(b);
        }
    }
}
