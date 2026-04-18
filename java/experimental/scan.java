import java.util.Scanner;
public class scan {

    public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    System.out.print("enter age: ");
    int age = sc.nextInt();
    sc.nextLine();
    System.out.print("Enter name: ");
    String name = sc.nextLine();

    System.out.println("Name: " + name + ",age : " + age);    

}
}