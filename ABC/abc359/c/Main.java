import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long sx = scanner.nextLong();
        long sy = scanner.nextLong();
        long tx = scanner.nextLong();
        long ty = scanner.nextLong();
        scanner.close();

        if ((sx + sy) % 2 == 1) sx--;
        if ((tx + ty) % 2 == 1) tx--; 

        long vertical_margin = Math.abs(ty - sy);
        long horizontal_margin = Math.abs(tx - sx);

        long cost;
        
        if (horizontal_margin < vertical_margin) cost = vertical_margin;
        else cost = (vertical_margin + horizontal_margin) / 2;

        System.out.println(cost);
    }
}
