echo "enter the number to find the factorial"
read n
fact=1
for((i=2;i<=n;i++))
do
fact=$((fact*i))
done
printf $fact