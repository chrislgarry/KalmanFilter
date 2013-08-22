
#!/bin/bash
# A Bash script I wrote to download all course lectures from a course website.

cd ~/Desktop/CS383/
lec_prefix="http://www-anw.cs.umass.edu/~barto/courses/CS383-Fall11/383-Fall11-Lec"
suffix=".pdf"

for i in {1..25}
	do
 		curl -o lecture_$i.pdf "$lec_prefix$i$suffix"
done
