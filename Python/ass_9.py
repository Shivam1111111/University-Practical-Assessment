print("20CS057 Patel Shivam")
class student:
    Name = 'Patel Shivam'
    rollNumber = 0

    def details(self, rollNumber, Name):
        self.Name = Name
        self.rollNumber = rollNumber


class exam(student):
    marks_list = []

    def marks(self, marks_list):
        self.marks_list = marks_list
        return marks_list


class result(exam):
    marks_gain = 0

    def result_of_student(self, marks_gain):
        total_marks = 0
        for item in marks_gain:
            total_marks += item
        return total_marks


sobj = result()
student_name = input("Enter name of the student : ")
student_id = input("Enter the id of the student : ")

# Setting the details.
sobj.details(student_id, student_name)
print(f"Enter the marks of {student_name} in 6 subject : \n")
marks = []
for i in range(0, 6):
    marks.append(int(input()))

# Setting the marks.
marks_obtain = sobj.marks(marks)
total = sobj.result_of_student(marks_obtain)
print(f"Total of {student_name} mark's is : {total}")
 
