
fn main() {
  let upper_limit: int = 1000000;

  for i in range(2i, upper_limit) {
    if is_prime(i) {
      println!("{}", i);
    }
  }
}

fn is_prime(n: int) -> bool {
  let mut divisor = 2;

  while divisor < n {
    if n % divisor == 0 {
      return false;
    }
    divisor += 1;
  }

  return true;
}
