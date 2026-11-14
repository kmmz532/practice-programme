public class Main {
  public static final int MIN = 1;
  public static final int MAX = 100;
  
  public static void main(String[] args) {
    for (int i = MIN; i <= MAX; ++i) {
      System.out.printf("%d ", i);
      if (i % 5 == 0) System.out.printf("Fizz");
      if (i % 3 == 0) System.out.printf("Buzz");
      System.out.println();
    }
  }
}
