for filename in $(find $pwd | grep "\.c" | cut -d "." -f 1,2)
do
	gcc `echo "$filename".c` -o `echo "$filename".o`
done
