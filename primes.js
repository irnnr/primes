
var upperLimit = 1000000;

function isPrime(n) {
  var divisor = 2;
  var sqrtN = Math.sqrt(n);

  while (divisor <= sqrtN) {
    if (n % divisor == 0) {
      return false;
    }
    divisor += 1;
  }

  return true;
}

for (var i = 2; i <= upperLimit; i++) {
  if (isPrime(i)) {
    console.log(i);
  }
}
