for filename in $(find $pwd |grep "\.o")
do
	rm -f $filename
done
