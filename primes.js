
var upperLimit = 1000000;

function isPrime(n) {
  var divisor = 2;

  while (divisor < n) {
    if (n % divisor == 0) {
      return false;
    }
    divisor += 1;
  }

  return true;
}

for (var i = 3; i < upperLimit; i++) {
  if (isPrime(i)) {
    console.log(i);
  }
}
