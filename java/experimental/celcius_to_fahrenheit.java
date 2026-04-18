    import java.util.Scanner;
public class celcius_to_fahrenheit {
        public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter in celcius: ");
        double c = sc.nextDouble();

        double f = (9 * c) / 5 + 32;

            
        System.out.printf("in fahrenheit: %f", f);

        }

}