#include "student.h"
#include <stdbool.h>
 
typedef struct _course 
{
  /**
   * This struct holds the the integer and char data types based on the
   * name, code, and total_students objects that it documents.
   */
  char name[100]; /**<name field is char datatype>*/
  char code[10]; /**<code field is char datatype>*/
  Student *students;
  int total_students; /**<total_students field is int datatype>*/
} Course;

void enroll_student(Course *course, Student *student);
void print_course(Course *course);
Student *top_student(Course* course);
Student *passing(Course* course, int *total_passing);

