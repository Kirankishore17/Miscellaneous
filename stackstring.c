#include<stdio.h>
#include<string.h>
int top = -1;
int n=5;                            //maximum size of the stack           
char a[5][30];                  

void push()                         //for inserting element into the stack
{char item[30];
if(top==n-1)            
    printf("\nStack is full.. overflow!!! ");
else
    {printf("\nenter the element to be added: ");
    scanf("%s",item);
        top++;
        strcpy(a[top],item);
    }
}
void pop()                         //for deleting element from the stack
{if(top==-1)
    printf("\nStack is empty.. Under flow!! ");
else
    top--;
    
}
void display()                      //for displaying contents of the stack
{if(top==-1)
printf("\nStack is empty.");
else
    {printf("\nElements present in the stack : ");
    for(int i=0;i<=top;i++)
    printf("%s ",a[i]);
    }
}
void main()
{
int choice,c;
do{
printf("\nEnter your choice:\n\t1.push\t2.pop\t3.print\n");
scanf("%d",&choice);
switch(choice)
        {case 1:
                push();
                break;
        case 2:
                pop();
                break;
        case 3:
                display();
                break;
        }    
printf("\nEnter 0 to quit non-zero element to continue ");
scanf("%d",&c);
    }while(c);

}