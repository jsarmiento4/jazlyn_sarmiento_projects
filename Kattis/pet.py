'''In the popular show “Dinner for Five”, five contestants compete in preparing culinary delights. Every evening one of them makes dinner and each of other four then grades it on a scale from 1 to 5. The number of points a contestant gets is equal to the sum of grades they got. The winner of the show is of course the contestant that gets the most points.

Write a program that determines the winner and how many points they got.

Input
Five lines, each containing 4 integers, the grades a contestant got. The contestants are numbered 1 to 5 in the order in which their grades were given.

Output
Output on a single line the winner’s number and their points, separated by a space. The input data will guarantee that the solution is unique.'''

import sys

max_points = 0
winner = 0
for x in range(1, 6):
    line = sys.stdin
    grades = list(map(int, input().split()))
    points = sum(grades)
    if points > max_points:
        max_points = points
        winner = x

print(winner, max_points)  