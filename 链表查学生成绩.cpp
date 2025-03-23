#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct studentscore{
  char name[20];
  int g;
  struct studentscore* p;
}grade;
char A[20];
int a;
grade * temp =NULL;
grade * current = NULL;

void sort(grade*head)
{
    int flag = 1; 
    while(flag == 0){
        current -> p = head;
        while(temp == NULL){
            if(current -> p -> g > current -> p -> p -> g){
                temp->p = current -> p;
                current -> p = current -> p ->p;
                current -> p -> p ->p = temp->p;
                temp -> p = current ->p -> p -> p;
            }
        }
    }
}

grade* CreatGrade()
{
    grade* gradenew =(grade*) malloc(sizeof(grade));
    if(gradenew == NULL) {
        printf("Fail");
        exit(0);
    }
    strcpy(gradenew->name,A);
    gradenew->g = a;
    return gradenew;
}
grade* InsertGrade(grade*head)
{
    grade* gradenext = CreatGrade();
    gradenext->p = head;
    return gradenext; 
}
void PrintGrade(grade* p){
	grade* current = p;
	while(current != NULL){
		printf("%s\t%d\n",current->name,current->g);
		current = current->p;
	}
}
void freeGrade(grade* p)
{
	grade* current = p;
	grade* temp;
	while(current != NULL){
		temp = current;
		free(temp);
		current = current->p;
	}
}
int main(int argc, char *argv[])
{
  grade* head = NULL;
  int n = 0;
  scanf("%d",&n);
  for(int i = 0;i < n;i++){
      scanf("%d",&a);
      getchar();
      gets(A);
      A[strcspn(A,"\n")] = 0;
      head = InsertGrade(head);
  }
  PrintGrade(head);
  freeGrade(head);
  return 0;
}
