echo "enter the limit"
read n
a=1
b=0
echo "0"
while [ $n -gt 0 ]
do
s=$((a+b))
a=$((b))
b=$((s))
n=$((n-1))
echo "$s "
done