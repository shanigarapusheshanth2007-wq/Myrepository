/*#include <stdio.h>
char grade(int marks)
{

      char grade;

    (marks >= 90) ? 1 : (marks >= 75) ? 2
                    : (marks >= 50)   ? 3
                    : (marks >= 35)   ? 4
                                      : 
     switch(marks)
    {

    case 1:
        grade = 'A';
        break;
    case 2:
        grade = 'B';
        break;
    case 3:
        grade = 'C';
        break;
    case 4:
        grade = 'D';
        break;
    default:
        grade = 'F';
        break;
    }
    return grade;
}
int main()
{
    int marks;
    printf("enter the marks");
    scanf("%d", &marks);
    char g;
    g = grade(marks);
    printf("%c", g);
    return 0;
}*/
#include <stdio.h>

char grade(int marks)
{
    return marks >= 90 ? 'A' ://this is very usefull when we use ternay opertaor in the function
           marks >= 75 ? 'B' :
           marks >= 50 ? 'C' :
           marks >= 35 ? 'D' : 'F';
}

int main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);

    printf("Grade: %c\n", grade(marks));
    return 0;
}