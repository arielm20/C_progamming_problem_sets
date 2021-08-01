/** 
   * @file course.h
   * @author Ariel Motsenyat
   * @date 08/01/2021
   * @brief header file for course.c
   */
#include "student.h"
#include <stdbool.h>
 
typedef struct _course 
{
  /** \brief a description of the course struct
   * This struct holds the the integer and char data types based on the
   * name, code, and total_students objects that it documents.
   */
  char name[100]; /**<name field is char datatype>*/
  char code[10]; /**<code field is char datatype>*/
  Student *students;
  int total_students; /**<total_students field is int datatype>*/
} Course;
/**  \brief enrolls students into a course
   * once student is enrolled, the size of the course increases.
   * @param course the specific course in which the student is being enrolled
   * @param student the student being enrolled in the course
   * @return N/A as this is a void function
   * @see struct _course
   */
void enroll_student(Course *course, Student *student);
/**  \brief prints information about the course
   * specifically prints course name, course code, and number of students 
   * @param course the specific course that the student was enrolled in
   * @return N/A as this is a void function
   * @see struct _course
   */
void print_course(Course *course);
/**  \brief calculates the top student
   * compares all student averages to the max average
   * @param course the specific course in which the students are enrolled in
   * @return name of student with top average in a specific course
   * @see struct _course
   */
Student *top_student(Course* course);
/**  \brief calculates which students are passing the course
   * if the students average is greater than or equal to 50 than they pass the course
   * @param course the specific course in which the students are enrolled in
   * @param *total_passing pointer to the number of students pasing the course 
   * @return passes the total count of student passing the course into the list of
   * students passing the course
   * @see struct _course
   */
Student *passing(Course* course, int *total_passing);

