
fn main() {
  let upper_limit: int = 1000000;

  for i in range(2i, upper_limit) {
    if is_prime(i) {
      println!("{}", i);
    }
  }
}

fn is_prime(n: int) -> bool {
  let mut divisor = 2.0;
  let sqrt_n = (n as f64).sqrt();

  while divisor < sqrt_n {
    if n % (divisor as int) == 0 {
      return false;
    }
    divisor += 1.0;
  }

  return true;
}
