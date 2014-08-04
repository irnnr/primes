<?php
$upperLimit = 1000000;

function isPrime($n) {
  $divisor = 2;
  $sqrtN = sqrt($n);

  while ($divisor <= $sqrtN) {
    if ($n % $divisor == 0) {
      return false;
    }
    $divisor++;
  }

  return true;
}

for ($i = 2; $i <= $upperLimit; $i++) {
  if (isPrime($i)) {
    echo $i . "\n";
  }
}
