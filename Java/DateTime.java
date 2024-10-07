import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;

public class DateTime {
    public static void main(String[] args) {
        LocalDate date1 =LocalDate.now();
        System.out.println(date1);
        LocalTime time1 =LocalTime.now();
        System.out.println(time1);
        LocalDateTime Datetime =LocalDateTime.now();
        System.out.println(Datetime);

//        DateTimeFormatter my = DateTimeFormatter.ISO_TIME;
        DateTimeFormatter my = DateTimeFormatter.ofPattern("dd/mm/yyyy - h:m:sa");
        String my2 = Datetime.format(my);
        System.out.println("design pattern : " + my2);
    }
}
