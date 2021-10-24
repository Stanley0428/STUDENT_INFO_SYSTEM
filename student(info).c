#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void print();
void score();
//void course();
int function();
//void function2();
float x[3];
char mode[10];
char func[10];

struct student
{
	char name[10];
	char sex[10];
	float math;
	float english;
	float chinese;
	float average;
	
};
typedef struct student stu_array;
struct student A;
struct student B;
struct student C;

stu_array Student_Array[3];

int main()
{
	
	print();
	score();
	function();
//	courses();
//	function2();	
}

void print()
{
	printf("enter your name:");
	scanf("%s",&Student_Array[0].name);
	printf("enter your name:");
	scanf("%s",&Student_Array[1].name);
	printf("enter your name:");
	scanf("%s",&Student_Array[2].name);
	
	printf("enter your sex:");
	scanf("%s",&Student_Array[0].sex);
	printf("enter your sex:");
	scanf("%s",&Student_Array[1].sex);
	printf("enter your sex:");
	scanf("%s",&Student_Array[2].sex);
	
	printf("enter your math:");
	scanf("%f",&Student_Array[0].math);
	printf("enter your math:");
	scanf("%f",&Student_Array[1].math);
	printf("enter your math:");
	scanf("%f",&Student_Array[2].math);
	
	printf("enter your english:");
	scanf("%f",&Student_Array[0].english);
	printf("enter your english:");
	scanf("%f",&Student_Array[1].english);
	printf("enter your english:");
	scanf("%f",&Student_Array[2].english);
	
	printf("enter your chinese:");
	scanf("%f",&Student_Array[0].chinese);
	printf("enter your chinese:");
	scanf("%f",&Student_Array[1].chinese);
	printf("enter your chinese:");
	scanf("%f",&Student_Array[2].chinese);
}

void score()
{
	Student_Array[0].average = (Student_Array[0].math + Student_Array[0].english + Student_Array[0].chinese)/3;
	Student_Array[1].average = (Student_Array[1].math + Student_Array[1].english + Student_Array[1].chinese)/3;
	Student_Array[2].average = (Student_Array[2].math + Student_Array[2].english + Student_Array[2].chinese)/3;
	
	printf("student:%s got:%f in average!\n",Student_Array[0].name,Student_Array[0].average);
	printf("student:%s got:%f in average!\n",Student_Array[1].name,Student_Array[1].average);
	printf("student:%s got:%f in average!\n",Student_Array[2].name,Student_Array[2].average);

	x[0] = Student_Array[0].average;
	x[1] = Student_Array[1].average;
	x[2] = Student_Array[2].average;
	
	for(int a=0;a<3;a++)
	{
		for(int b=a;b<3;b++)
		{
			if(x[a] > x[b])
			{
				float temp = x[b];
				x[b] = x[a];
				x[a] = temp;
			}
		}
	}
	
	for(int b=0;b<3;b++)//print the value from small to large respectively
	{
		printf("%f\n",x[b]);
	}
	
	for(int a=0;a<3;a++)//if we got 1000 students,just modify the range to 1000.
	{
		for (int b=0;b<3;b++)//same,if the students are 1000,modify the range of b.
		{
			if(x[3-a-1] == Student_Array[b].average)//note:x[2] is the biggest
			{
				printf("%s student No%d !\n",Student_Array[b].name,a+1);
				break;//if the student got the rank,skip out and scan the others
			}			
		}
	}
	
#if 0//original version// //the program won't run these lines of code.//	
		if(x[2] == Student_Array[a].average)
		{
			printf("%s student No1!\n",Student_Array[a].name);
		}
		if(x[1] == Student_Array[a].average)
		{
			printf("%s student No2!\n",Student_Array[a].name);
		}
		if(x[0] == Student_Array[a].average)
		{
			printf("%s student No3!\n",Student_Array[a].name);
		}
	}
#endif
}
int function()
{
	char mode[10];
	char func[10];
	float av_find;
	printf("if you want the further mode dial Y or enter exit to quit\n");
	scanf("%s",&mode);
	if(strcmp(mode,"exit") == 0)
	{
		return 0;
	}
	if(strcmp(mode,"Y") == 0)//use strcmp(string,string) == 0 to compare two string whether is the same
	{
		printf("dial F if you want to find the student through the score!");
		scanf("%s",&func);
		if(strcmp(func,"F") == 0)
		{
			printf("enter the average of the student:");
			scanf("%f",&av_find);
			for(int a=0;a<3;a++)
			{
				if(Student_Array[a].average == av_find)
				{
					printf("the student is:%s !!\n",Student_Array[a].name);
				}
			}
		}
	}
	printf("Done!!");
}

/*void courses()
{
	char choice[6];
	char x = {"Math","English","Chinese","Science","PE","physics"};
	for(int a=0;a<6;a++)
	{
		printf("%s",x[a]);
	}
	printf("enter your name");
	printf("choose the course you want to learn!:");
	printf("Math(Y/N)");
	scanf("%s",&choice[0]);
	
	printf("English(Y/N)");
	scanf("%s",&choice[1]);
	
	printf("Chinese(Y/N)");
	scanf("%s",&choice[2]);
	
	printf("Science(Y/N)");
	scanf("%s",&choice[3]);
	
	printf("PE(Y/N)");
	scanf("%s",&choice[4]);
	
	printf("Physics(Y/N)");
	scanf("%s",&choice[5]);
	
	for(int a=0;a<6;a++)
	{
	//	if(strcmp(choice[a],"Y") == 0)
		
	}
}

	
*/













