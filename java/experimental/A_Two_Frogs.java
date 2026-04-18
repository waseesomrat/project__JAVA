import java.util.Scanner;

public class  A_Two_Frogs {


    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for(int i = 0; i < t;i++){
             int n = sc.nextInt();
            int a = sc.nextInt();
             int b = sc.nextInt();
            if(Math.abs(a - b) % 2 == 1){
                System.out.printf("NO\n");
            }
    else
                           System.out.printf("YES\n");
        }
    }

}