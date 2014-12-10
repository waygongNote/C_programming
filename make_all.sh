for filename in $(find $pwd |grep "\.c")
do
	gcc -c $filename
done
