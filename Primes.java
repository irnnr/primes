


public class Primes {

  public static void main(String[] args) {
    long upperLimit = 1000000;

    for (long i = 2; i <= upperLimit; i++) {
      if (isPrime(i)) {
        System.out.println(i);
      }
    }
  }

  public static boolean isPrime(long n) {
    long divisor = 2;

    while (divisor < n) {
      if (n % divisor == 0) {
        return false;
      }

      divisor++;
    }

    return true;
  }

}
