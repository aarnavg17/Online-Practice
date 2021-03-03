import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Number of hours/week: ");
        int hpw = in.nextInt();
        System.out.println("Salary per hour: ");
        int sph = in.nextInt();
        System.out.println(calc(sph, hpw));
    }
    
    public int calc(int sph, int hpw) {
        return sph*hpw;
    }
}
