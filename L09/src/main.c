/** 
   * @file main.c
   * @author Ariel Motsenyat
   * @date 08/01/2021
   * @brief main function that generates a student name and enrolls them in a course
   */
#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
#include "time.h"
#include "course.h"
/**  \brief allocates course code and name to name, and code integers
 * enrolls random student to the course.
 * calculates the top student in the course and prints the total number 
 * of passing student and their names.
   * @return 0
   * @note the functions and their code can be found in these files: course.h course.c student.h student.c
   */
int main()
{
  srand((unsigned) time(NULL));

  Course *MATH101 = calloc(1, sizeof(Course));
  strcpy(MATH101->name, "Basics of Mathematics");
  strcpy(MATH101->code, "MATH 101");

  for (int i = 0; i < 20; i++) 
    enroll_student(MATH101, generate_random_student(8));
  
  print_course(MATH101);

  Student *student;
  student = top_student(MATH101);
  printf("\n\nTop student: \n\n");
  print_student(student);

  int total_passing;
  Student *passing_students = passing(MATH101, &total_passing);
  printf("\nTotal passing: %d\n", total_passing);
  printf("\nPassing students:\n\n");
  for (int i = 0; i < total_passing; i++) print_student(&passing_students[i]);
  
  return 0;
}
