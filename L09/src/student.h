 
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

void add_grade(Student *student, double grade);
double average(Student *student);
void print_student(Student *student);
Student* generate_random_student(int grades); 
