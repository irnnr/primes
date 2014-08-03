<?php

function isPrime($n) {
  $divisor = 2;

  while ($divisor < $n) {
    if ($n % $divisor == 0) {
      return false;
    }

    $divisor++;
  }

  return true;
}

$upperLimit = 1000000;
for ($i = 2; $i <= $upperLimit; $i++) {
  if (isPrime($i)) {
    echo $i . "\n";
  }
}
