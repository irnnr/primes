#! /bin/bash
count=0
startTime=$(date +%s)

for n in {2..1000000}
do
	i=2
	good=true
	while [ $[$i*$i] -le $n ]
	do
		if [ $[$n%$i] == 0 ]; then
			good=false
			break
		fi
		let i++
	done

	if $good; then
		let count++
	fi
done
endTime=$(date +%s)

echo "# of primes: $count"
echo "Duration: $[$endTime - $startTime] seconds"
