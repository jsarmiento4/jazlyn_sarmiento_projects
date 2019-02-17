import sys

line = input();

input_numbers = line.split();

R1 = int(input_numbers[0]);
S = int(input_numbers[1]);

R2 = int((S * 2) - R1);

print (R2);