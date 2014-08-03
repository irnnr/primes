#Primes Benchmark

So I got bored that one weekend ... I don't even remember how I got the idea of
trying this out, but I ended up calculating the prime numbers up to 1,000,000
in different languages. So how many primes are there you ask? 78497 primes of
the first 1,000,000 numbers are primes.

Feel free to run those programs yourself, otherwise my timings are below. I ran
those on a Mid-2010 MacBook Pro with a 2.66 GHz Core i7, memory and harddisk do
not matter for this kind of program.


##Timings

| Language | Version    | Time    |
| -------- | ---------- | ------- |
| node     | 0.10.30    | 0:02:56 |
| node     | 0.10.29    | 0:04:35 |
| go       | 1.3        | 0:06:22 |
| rust     | 0.11.0     | 0:07:42 |
| java     | 1.7.0_45   | 0:07:56 |
| ruby     | 2.0.0p451  | 1:03:13 |
| python   | 2.7.6      | 2:45:24 |
| php      | 5.5.15     | 3:08:34 |
