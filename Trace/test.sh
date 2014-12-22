gcc -Wl,-Map=test.map -g -o test test.c
cat test.map |grep "\ main$" |sed 's/^[ ]*//g' |awk '{FS=" "}{print $2}'
