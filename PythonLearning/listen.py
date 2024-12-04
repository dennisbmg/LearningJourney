student1 = "Manni"
student2 = "Karl"
student3 = "Günther"

students = ["Manni", "Karl", "Günther"]
print(students)
print(len(students))
students.append("Henno")
print(students)
print(len(students))
students.pop()
print(students)
print(students[0])

last_list_element = students.pop()
print(last_list_element)
students.append(last_list_element)
#List to string
print("#".join(students))
students_as_string = ", ".join(students)
print(students_as_string)
#String to list
students_as_list = students_as_string.split(", ")
print(students_as_list)