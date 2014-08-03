

upper_limit = 1000000

def is_prime(n):
  divisor = 2
  while (divisor < n):
    if (n % divisor == 0):
      return False

    divisor += 1

  return True


for i in range (3, upper_limit):
  if (is_prime(i)):
#    print i # python 2
    print (i) # python 3
