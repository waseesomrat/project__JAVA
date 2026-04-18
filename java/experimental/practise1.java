import java.util.Scanner;

public class practise1 {

    public static void main(String[] args){
    Scanner sc = new Scanner(System.in);

    System.out.print("Enter name: ");
    String name = sc.nextLine();

    System.out.print("Enter age: ");
    int age = sc.nextInt();

System.out.println("hello " + name + ", my age is " + age + " years old");
}
}