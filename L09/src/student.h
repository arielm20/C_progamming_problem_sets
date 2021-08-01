 /** 
   * @file student.h
   * @author Ariel Motsenyat
   * @date 08/01/2021
   * @brief header file for student.c
   */
typedef struct _student 
{ 
  /**
   * This struct holds the the integer, char, and double data types
   * based on the objects that it documents.
   */
  char first_name[50]; /**<first_name field is char datatype>*/
  char last_name[50]; /**<last_name field is char datatype>*/
  char id[11]; /**<id field is char datatype>*/
  double *grades; /**<grades field is double datatype>*/
  int num_grades; /**<num_grades field is int datatype>*/
} Student;
/**  \brief adds the grade associated with a certain student
   * @param student the specific student to which the grade is added
   * @param grade the grade being added
   * @return N/A as this is a void function
   * @see struct _student
   */
void add_grade(Student *student, double grade);
/**  \brief calculates the average grade for a specific student
   * @param student the specific student to which the grade is added
   * @return average grade of the student
   * @see struct _student 
   */
double average(Student *student);
/**  \brief prints first and last name of student as well as their average grade
  * and student ID
   * @param student the specific student whose name is printed
   * @return N/A as this is a void function
   * @see struct _student
   */
void print_student(Student *student);
/**  \brief generates new student as well as a new random student ID based on their grade
   * @param grades the grades of the student being generated
   * @return new student name and ID
   * @see struct _student
   */
Student* generate_random_student(int grades); 
