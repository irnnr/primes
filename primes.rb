

upper_limit = 1_000_000

def is_prime(n)
  divisor = 2

  while divisor < n do
    return false if n % divisor == 0
    divisor += 1
  end

  true
end

(3..upper_limit).each do |i|
  if is_prime(i)
    print i, "\n"
  end
end
