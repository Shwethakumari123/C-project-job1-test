#!/bin/bash

mul ()

echo "enter two numbers to multiply"

read num
mul=1

for  i in $num
do
mul=`expr $mul \* $i`
done
echo "multiplication of $num is $mul"


