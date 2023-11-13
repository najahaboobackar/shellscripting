echo "enter the limit"
read n
for((i=1;i<=n;i++))
do
sum=$((sum+i))
done
echo "sum:$sum"
printf "average %0.2f\n" $((10**2*sum/n))e-2