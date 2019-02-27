#include <stdio.h>
#include <stdlib.h>

// You will write a program that keeps track of exam results.
// First, your program should ask the user how many classes took the exam. Let's say this number is N.
// Then you need to ask how many students took the exam in the first class. Let's say this number is M.
// You need to ask for the name of the class, the the exam results in percentage M times and store them.
// The number of students might be different for each class.
// You need to repeat this N times.
// Make sure you have a separate function that reads the data and returns it.

// Once you have the data write functions for the following questions:
// Which class has the biggest difference between the worst and best exam and how much is the difference?
// Which class has the best exam?
// What is the average of all the exams?


typedef struct{
  int** ptr;
  int classes;
  int* students;

}Data;
Data getData()
{
    Data data;
    int classes = 0;
    printf("How many classes took the exam? ");
    scanf("%d", &classes);
    int **ptr = (int **) malloc(classes * sizeof(int *));
    int students = 0;
    int result;
    data.students = (int*)malloc(classes * sizeof(int));
    for (int i = 0; i < classes; i++) {
        printf("How many students are in the %d. class? ", i + 1);
        scanf("%d", &students);
        ptr[i] = (int *) malloc(students * sizeof(int));
        data.students[i] = students;
        for (int j = 0; j < students; j++) {
            printf("Class %d student %d's exam result in %%: ", i+1, j+1);
            scanf("%d", &result);
            ptr[i][j] = result;
        }
    }
    data.ptr = ptr;
    data.classes = classes;

    return data;
}
void bestExam()
{
    Data best_data = getData();
    int bestClassIndex = 0;
    int bestStudentIndex = 0;
    int bestPercent = 0;
    for (int i = 0; i < best_data.classes; i++) {
        for (int j = 0; j < best_data.students[i]; j++) {
            if (best_data.ptr[i][j] > bestPercent) {
                bestPercent = best_data.ptr[i][j];
                bestClassIndex = i + 1;
                bestStudentIndex = j + 1;
            }
        }
    }
    printf("The best exam: %d. class, %d. student, %d percent.", bestClassIndex, bestStudentIndex, bestPercent);
}
void examAverage()
{
    Data avg_data = getData();
    float examResults = 0;
    float studentNumber = 0;
    for (int i = 0; i < avg_data.classes; i++){
        for(int j = 0; j < avg_data.students[i]; j++){
            examResults += avg_data.ptr[i][j];
            studentNumber++;
        }
    }
    float avgResult = examResults/studentNumber;
    printf("Exam result is: %.2f%%", avgResult);
}
int main()
{
    examAverage();
    return 0;
}