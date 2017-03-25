# Read from the file file.txt and output the tenth line to stdout.
#! /bash/shell
lines=0
cat file.txt | while read line
do
	lines=`expr $lines + 1`
	if [ $lines -eq 10 ]
	then
		echo $line
	fi  
done
