# r - read
# w - overwrites the existing data
# a - appends after the existing data
# x - new
# r+ - read&write
# w+ - write&read
# a+ - append&read
# rb - read binary
# wb - write binary 

import csv

file = open("example.csv", "x")     #creates a csv file.

file = open("example.csv", "a", newline = "")   #newline is used to remove the extra space between rows.
writer = csv.writer(file)

writer.writerow(["Name", "Age", "City"])       #adds headers to the csv file.

writer.writerow(["Kanhaiyaa Agrawal", 21, "Nagpur"])
writer.writerow(["Mohan", 19, "Hyderabad"])
writer.writerow(["Rishikesh", 32, "Raipur"])
writer.writerow(["Soniya", 28, "Indore"])
writer.writerow(["Sarthak", 20, "Jaipur"])

file = open("example.csv", "r")
reader = csv.reader(file)
for row in reader:
    print (row)
file.close()
