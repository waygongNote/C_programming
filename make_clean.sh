for filename in $(find $pwd |grep "\.o\|\.exe\|\.map")
do
	rm -f $filename
done
