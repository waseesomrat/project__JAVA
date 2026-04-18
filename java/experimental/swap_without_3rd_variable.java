    import java.util.Scanner;
    public class swap_without_3rd_variable {

        public static void main(String[] args) {

            Scanner sc = new Scanner(System.in);

                System.out.println("ENter a :");
            
                int a = sc.nextInt();
                        System.out.println("ENter b :");
                int b = sc.nextInt();

                b = a - b;
                a = a - b;
                b = a + b;

            System.out.printf("a = %d , b = %d", a , b);

            }

        }
