import java.util.Random;
import java.util.ArrayList;

public class RandomNumberGenerator {
    public static ArrayList<Integer> generate(int min, int max, long seed, int count) {
        Random random = new Random(seed);
        ArrayList<Integer> numbers = new ArrayList<>();
        for (int i = 0; i < count; i++) {
            int randomNumber = random.nextInt(max - min + 1) + min;
            numbers.add(randomNumber);
        }
        return numbers;
    }

    public static void main(String[] args) {
        int min = 1;
        int max = 100;
        long seed = 42;
        int count = 5;

        ArrayList<Integer> randomNumbers = generate(min, max, seed, count);
        System.out.println(randomNumbers);
    }
}
