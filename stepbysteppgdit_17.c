#include <stdio.h>
#include <stdlib.h>

/*
   1. Write a C program to get an input from keyboard and print it.
*/
void printValue() {
  int i;
  printf("input a integer value: ");
  scanf("%d", &i);
  printf("you input value was %d", i);

}

/*
    2. Write a C program to get two numbers from keyboard and add them.
*/
void addTwoNumbers() {
  int firstNumber;
  int secondNumber;
  printf("input first Value - ");
  scanf("%d", & firstNumber);

  printf("input second Value - ");
  scanf("%d", & secondNumber);

  printf("%d + %d = %d", firstNumber, secondNumber, firstNumber + secondNumber);

}

/*
    3. Write a C program to check an integer whether odd or even.
*/
void checkOddEven() {
  int number;
  printf("Inter a value - ");
  scanf("%d", & number);

  if (number % 2 == 0)
    printf("%d is even", number);
  else
    printf("%d is odd", number);
}

/*
    4. Write a C program C program to perform addition, subtraction, multiplication and division.
*/

void calculation() {
  char c;
  int firstNumber;
  int secondNumber;
  printf("Arithmetic Operation : Addition (a), Subtraction (s), Multiplication (m) and Division (d) \n");
  printf("press you desired key : ");
  scanf("%c", & c);
  printf("Enter First Value :");
  scanf("%d", & firstNumber);

  printf("Enter Second Value :");
  scanf("%d", & secondNumber);

  if (c == 'd') {

    if (secondNumber == 0) {
      printf("In Division , Second Value can not be 0");
      return (0);
    }
  }

  if (c == 'a') {
    printf("%d + %d = %d", firstNumber, secondNumber, firstNumber + secondNumber);
  } else if (c == 's') {
    printf("%d - %d = %d", firstNumber, secondNumber, firstNumber - secondNumber);
  } else if (c == 'm') {
    printf("%d * %d = %d", firstNumber, secondNumber, firstNumber * secondNumber);
  } else if (c == 'd') {
    printf("%d / %d = %d", firstNumber, secondNumber, firstNumber / secondNumber);
  } else {
    printf("invalid Operation");
  }

}

/*
    5. Write a C program to swap two numbers.
*/
void swap() {
  int firstNumber;
  int secondNumber;
  int temp;
  printf("Enter First Value :");
  scanf("%d",&firstNumber);
  printf("Enter Second Value :");
  scanf("%d",&secondNumber);

  printf("value of firstNumber, secondNumber - %d,%d \n", firstNumber, secondNumber);
  temp = firstNumber;
  firstNumber = secondNumber;
  secondNumber = temp;
  printf("value of firstNumber, secondNumber after swapping - %d,%d \n",firstNumber, secondNumber);

}

/*
    6. Write a C program to check whether a given integer is positive.
*/
void checkPositiveNegative() {
  int number;
  printf("Enter a value : \n");
  scanf("%d", &number);
  if (number == 0) {
    printf(" given number neither positive nor negative");
  } else if (number > 0) {
    printf("given number is positive");
  } else {
    printf("given number is Negative");
  }

}

/*
    7. Write a c program C program to check whether input alphabet is a vowel or not.
*/

void checkVowel() {

  printf("input a character: ");
  char c;
  scanf("%c", &c);

  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
    c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
    printf("this is vowel ");
  } else {
    printf("this is not vowel");
  }
}

/*
    8. Write a C program to check leap year.
*/
void checkLeapYear() {
  printf("Input a year : ");
  int year;
  scanf("%d", &year);

  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    printf("%d is a leap year", year);
  } else {
    printf("%d is not a leap year", year);
  }

}

/*
    9. Write a C program to find the largest of 3 numbers
*/

void largestNumber() {
  int firstNumber, secondNumber, thirdNumber, largestNumber;
  printf("Input First Number : ");
  scanf("%d", & firstNumber);

  printf("Input Second Number : ");
  scanf("%d", & secondNumber);

  printf("Input third Number : ");
  scanf("%d", & thirdNumber);

  if (firstNumber > secondNumber && firstNumber > thirdNumber) {
    largestNumber = firstNumber;
  } else if (secondNumber > firstNumber && secondNumber > thirdNumber) {
    largestNumber = secondNumber;
  } else {
    largestNumber = thirdNumber;
  }

  printf("among %d ,%d ,%d - %d is largest  ", firstNumber, secondNumber, thirdNumber, largestNumber);

}

/*
    10 Write a C program to solve the quadratic equation.
*/

 int quadraticEquation()
{
    printf("Need to understand Quadratic Equation");
    return 0;
}

/*
    11. Write a C program to display the consecutive digits 0, 1, 2, . . . ,9.
*/

void consecutiveDigits() {
  for (int i = 0; i <= 9; i++) {
    printf("%d,", i);
  }
  printf("\b ");

}

/*
    12. Write a C program to find the sum of odd and even numbers from 1 to N.
*/

void sumOddEven() {
  int n, oddSum = 0, evenSum = 0;
  printf("Enter a number : ");
  scanf("%d", &n);

  int i = 1;

  while (i <= n) {
    if (i % 2 == 0) {
      evenSum = evenSum + i;
    } else {
      oddSum += i;
    }
    i++;
  }

  printf("sum of even number : %d \n", evenSum);
  printf("sum of odd number : %d", oddSum);

}

/*
    13. Write a C program to calculate factorial of a number.
    factorial example -- 4! = 1*2*3*4
*/

void factorial() {
  long fact = 1;
  int n;
  printf("Enter a number : ");
  scanf("%d", & n);

  for (int i = 1; i <= n; i++) {
    fact = fact * i;
  }

  printf("Factorial of %d is %ld", n, fact);

}

/*
    14. Write a C program to find the average of a list of numbers.
*/

void average() {
  int n, currentNumber;
  int sum = 0;
  float avg;
  printf("How many number do you want to avg : ");
  scanf("%d", & n);
  int i = 0;
  while (i < n) {
    printf("Enter number %d : ", i + 1);
    scanf("%d", & currentNumber);
    sum += currentNumber;
    i++;
  }

  printf("%d %d", i, n);
  avg = sum / i;

  printf("avg : %f", avg);

}

/*
   15. Write a C program to find the greatest common divisor (GCD)
    and least common multiple (LCM) of two numbers.
*/

void gcdLcm() {
   printf("need to understand - GCD and LCM");
}

/*
16. Write a C program to find the number of integers divisible by 5 between
the given range num1 and num2,where num1 < num2. Also find the sum of all
these integer numbers which are divisible by 5 and display the total.
*/
void  divisibleByFive(){
    int i, num1, num2, count = 0, sum = 0;

    initialize:
    printf("Enter the value of num1 and num2,where num1 < num2 \n");
    scanf("%d %d", &num1, &num2);

    if(num2<num1)
    goto initialize;


    /* Count the number and compute their sum*/
    printf("Integers divisible by 5 are \n");
    for (i = num1; i < num2; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d,", i);
            count++;
            sum = sum + i;
        }
    }
    printf("\n Number of integers divisible by 5 between %d and %d = %d\n", num1, num2, count);
    printf("Sum of all integers that are divisible by 5 = %d\n", sum);
}

/*
    17. Write a C program to convert a line of lowercase text to uppercase.
*/
void uppercase(){
	char str[100];
    int i;

    /* Input string from user */
    printf("Enter your text : ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {

        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string : %s",str);
    return 0;
}

/*
    18. Write a program that asks user an arithmetic operator('+','-','*' or '/')
    and two operands and perform the corresponding calculation on the operands.
*/
void calculationV2(){
  char c;
  int firstNumber;
  int secondNumber;

  printf ("Enter any one operator +, -, *, \n");
  scanf("%c", &c);

  printf("Enter First Value :");
  scanf("%d", & firstNumber);

  printf("Enter Second Value :");
  scanf("%d", & secondNumber);



  if (c == '/') {

    if (secondNumber == 0) {
      printf("In Division , Second Value can not be 0");
      return (0);
    }
  }


  if (c == '+') {
    printf("%d + %d = %d", firstNumber, secondNumber, firstNumber + secondNumber);
  } else if (c == '-') {
    printf("%d - %d = %d", firstNumber, secondNumber, firstNumber - secondNumber);
  } else if (c == '*') {
    printf("%d * %d = %d", firstNumber, secondNumber, firstNumber * secondNumber);
  } else if (c == '/') {
    printf("%d / %d = %d", firstNumber, secondNumber, firstNumber / secondNumber);
  } else {
    printf("invalid Operation");
  }
}


/*
    19. Write a C program to find the average of maximum of N positive numbers entered by user. But if the input is negative,
    display the average (excluding the average of negative input) and end the program.
*/
void averageV2(){

    int i,n,Sum=0,numbers,positiveNumbers =0;;

    float Average;

    printf("Please Enter How many Number you want?\n");

    scanf("%d",&n);



    for(i=0;i<n;++i)

    {
      printf("%d. Enter number: ", i + 1);
        scanf("%d",&numbers);

        if(numbers<0)
            break;

        Sum +=numbers;
        positiveNumbers++;

    }

    Average = Sum/positiveNumbers;
    printf("\nAverage of the %d Numbers = %f",positiveNumbers, Average);

return 0;

}



/*
    20. Write a C program to find the average of a list of positive numbers only.
    If user enters negative number skip it.
*/
void averageV3(){
    int n, i, positiveNumbers =0;
    float num[100], sum = 0.0, avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        if(num[i] <0){
            continue;
        }
        positiveNumbers++;
        sum += num[i];
    }

    avg  = sum / positiveNumbers;
    printf("Average (non negative number) = %.2f", avg);
    return 0;
}

/*
    21. Write a C program to find the product of N integers entered by user.
    If user enters 0 skip it.
*/
void calculateProduct(){
    int num, rem, prod = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        rem = num % 10;
        prod *= rem;
        num /=  10;
    }
    printf("%d", prod);
}

/*
    22. C program to find nCr and nPr: This code calculate nCr which is n!/(r!*(n-r)!)
    and nPr = n!/(n-r)!
*/
void permutationCombination(){
  printf("Need to under standand  permutationCombination");
}

/*
    23. Write C Program to reverse a number.
*/

void reverseNumber(){

      int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    printf("Reverse Number is %d", reversed);

}

/*
    24. Write a C program to check Palindrome number: A palindrome number is a number such that if we reverse it, it will not change.

*/

void checkPalindrome(){

  int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;

}

int main()
{
    checkPalindrome();
    //reverseNumber();
    //calculateProduct();
    //averageV3();
    //averageV2();
    return 0;
}

    //calculationV2();
    //uppercase();
    //divisibleByFive();
    //gcdLcm();
    //average();
    //factorial();
    //sumOddEven();
    //consecutiveDigits();
    // quadraticEquation();
    //largestNumber();
    //checkLeapYear();
    //checkVowel();
    //checkPositiveNegative();
    //swap();
    //calculation();
    //checkOddEven();
    //addTwoNumbers();
    //printValue();
