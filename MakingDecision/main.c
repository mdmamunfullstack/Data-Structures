#include <stdio.h>
#include <stdlib.h>

void loopexample1()
{
   int i=0;
  while( i <=10 ){
    printf("%d \n",i);
    i++;
  }

}


void loopexample2()
{
   int i=1; //s1
  while( i <11 ){ //s2
    printf("%d \n",i);
    i++; //s3
  }

}

void loopexample3(){
    int i=0; //s1
    do{
       printf("%d \n",i);
       i++;

    }while(i<10);

}


void loopexample4(){
    int i=101; //s1
    do{
       printf("%d \n",i);
       i = i+2;
    }while(i<100);

}

void loopexample5(){
    for(int i=0;i<=10;i++){
        printf("%d \n",i);
    }
}


void loopexample6(){
    for(int i=1;i<=3;i++){ //outer 3*10

        for(int j=1; j<=10;j++ ){ //inner loop

            printf("%d\t", i*j);

        }
        printf("\n");

    }

}

void loopexample7(){
 for(;;){

    printf("Infinity stone fire \n");
 }
}

int Decision_1(){
    int a;
    printf("Type a Value : ");
    scanf("%d",&a);


    if(a<10){
        puts("You typed a value less than 10");
    }
    puts("Thank you");

}

int Decision_2(){
    int a;
    printf("Type a Value : ");
    scanf("%d",&a);

    if(a<10){
        puts("You typed a value less than 10");
        a -= 5;
        printf("The value is now %d\n",a);
    }
    puts("Thank you");

}

int Decision_3(){
    int a =1;
    while(a <= 20){
            if(a>6 && a <15){
                putchar('*');
            }

        printf("%d\n",a);
        a++;
    }
}

int Decision_4(){
    int a, b;
    printf("Enter value 1: ");
    scanf("%d",&a);

    printf("Enter value 2: ");
    scanf("%d",&b);

    if(a>b)
        printf("%d is greater than %d",a,b);
    else if(a<b)
        printf("%d is greater than %d",b,a);
    else
        printf("%d is equal to %d",b,a);

}

int Decision_5(){
    char a;

    puts("type a chracter");
    scanf("%c",&a);

   if(a>='a' && 'a'<='z')
        puts("you typed a lowercase letter");
   else if (a>='A' && 'B'<='z')
        puts("you typed a upper letter");
   else if (a>='0' && 'B'<='9')
        puts("you typed a number");
   else if (a>=' ')
        puts("you typed a space");
   else
        printf("you typed %c symbol\n",a);

    return (0);


}

int ternaryOperator_1(){

       int a,b,c;

        a = 10;
        b = 14;
        c = ( a > b ) ? a : b;
        printf("%d is the greater of %d and %d\n",c,a,b);

	return(0);
}

int ternaryOperator_2(){
	int x;

	for(x=1;x<=10;x++)
	{
		printf("%d - %s\n",x,x % 2 ? "odd" : "even");
	}

	return(0);
}

int problem_01(){
    int i;
    printf("input a value: ");
    scanf("%d",&i);
    printf("you input value was %d",i);
}

int problem_02(){
  int firstNumber;
  int secondNumber;
  printf("input first Value - ");
  scanf("%d",&firstNumber);

  printf("input second Value - ");
  scanf("%d",&secondNumber);

  printf("%d + %d = %d",firstNumber,secondNumber,firstNumber+secondNumber);

}

int problem03(){
 int number;
 printf("Inter a value - ");
 scanf("%d",&number);

 if(number%2 ==0)
    printf("%d is even",number);
 else
    printf("%d is odd",number);
}

int problem04(){
    char c;
    int firstNumber;
    int secondNumber;
 printf("Arithmatic Operation : addition (a), Subtraction (s), Multipplication (m) and Division (d) \n");
 printf("press you desired key");
 scanf("%c",&c);
 printf("Inter First Value :");
 scanf("%d",&firstNumber);

  printf("Inter Second Value :");
 scanf("%d",&secondNumber);

 if(c == 'd'){

    if(secondNumber == 0){
        printf("In Division , Second Value can not be 0");
        return(0);
    }

 }

 if(c == 'a'){
    printf("%d + %d = %d",firstNumber, secondNumber,firstNumber+ secondNumber);
 }
 else if(c =='s'){
    printf("%d - %d = %d",firstNumber, secondNumber,firstNumber- secondNumber);
 }
  else if(c =='m'){
    printf("%d * %d = %d",firstNumber, secondNumber,firstNumber* secondNumber);
 }
   else if(c =='d'){
    printf("%d / %d = %d",firstNumber, secondNumber,firstNumber/ secondNumber);
 }
 else{
    printf("invalid Operation");
 }


} 

int problem05(){
   int a =10;
   int b=20;
   int temp;
   printf("value of a, b - %d,%d \n",a,b);
   temp = a;
   a = b;
   b = temp;
   printf("value of a, b after swaping - %d,%d \n",a,b);

}

int problem05(){
   int a =10;
   int b=20;
   int temp;
   printf("value of a, b - %d,%d \n",a,b);
   temp = a;
   a = b;
   b = temp;
   printf("value of a, b after swaping - %d,%d \n",a,b);

}

int problem06(){
    int number;
    printf("Enter a value : \n") ;
    scanf("%d",&number);
    if(number ==0){
         printf("given number is 0");
    }
    else if(number >0){
        printf("given number is positive");
    }

    else{
       printf("given number is Negative");
    }

}


void pointerexample1(){
    int x;
    int *pointer;
    x=10;
    pointer=&x;

    printf("value of x : %d \n",x);
    printf("value of pointer : %d\n",pointer);


    printf("Address of x : %d \n",&x);
    printf("Address of pointer : %d \n",&pointer);
    printf("Content of pointer : %d\n",*pointer);
}


void pointerexample2(){
    char *cp, ch;
    int *ip, i;
    float *fp, f;
    double *dp, d;


    cp = &ch;
    ip = &i;
    fp = &f;
    dp = &d;

    printf("%p %p %p %p", cp, ip, fp,dp);

    cp++;
    ip++;
    fp++;
    dp++;

    printf("\n");
     printf("%p %p %p %p", cp, ip, fp,dp);

}


void pointerexample3(){
    int x;
    int *pointer;
    x=10;
    pointer=&x;

    (*pointer)++;
    printf("value of x : %d \n",x);
    printf("value of pointer : %d\n",pointer);


    printf("Address of x : %d \n",&x);
    printf("Address of pointer : %d \n",&pointer);
    printf("Content of pointer : %d\n",*pointer);
}


int countStringLength(){

 //printf("Enter a string");
  char stringName[] ="abcde";
  int i;
  for( i=0; stringName[i]!='\0';i++ ){
    printf("%d \n",i);
    printf("i is %c \n",stringName[i]);
  }
  printf("string length is %d \n", i);
  return i;

}


int countStringLength2(){

 //printf("Enter a string");
  char stringName[] ="abcde";
  int i;
  for( i=0; stringName[i]!='\0';i++ );


  printf("string length is %d \n", i);
  return i;

}


int main()
{
   //Decision_1();
   //Decision_2();
   //Decision_3();
   //Decision_4();
   //Decision_5();
   //problem_01();
   //problem_02();
  //problem03();
//problem05();
    //problem06();
    countStringLength();
    return 0;

}
