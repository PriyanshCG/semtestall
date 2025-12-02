// //q1
// #include<stdio.h>
// int main() {
//     int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int sum = mat[1][0] + mat[1][1] + mat[1][2]; 
//     printf("Sum of 2nd row: %d\n", sum);
//     return 0;
// }


// //q2
// #include<stdio.h>
// int main(){
// int a, b;
// char op;
// printf("Enter value of a: ");
// scanf("%d", &a);
// printf("Enter value of b: ");
// scanf("%d", &b);
// printf("Enter operator ");
// scanf(" %c", &op);

// switch(op) {
//     case '+':{
//         printf("%d + %d = %d\n", a, b, a + b);
//         break;}
//     case '-':{
//         printf("%d - %d = %d\n", a, b, a - b);
//         break;}
//     case '*':{
//         printf("%d * %d = %d\n", a, b, a * b);
//         break;}
//     case '/':{
//         if(b != 0){
//             printf("%d / %d = %d\n", a, b, a / b);
//         }
//         else{
//             printf("Error: Division by zero\n");
//         break;}}
//     default:{
//         printf("Invalid operator\n");
// }
// }

// return 0;
// }

// //q3
// #include<stdio.h>
// int main() {
//     int n;
//     int a = 0, b = 1, c;
//     printf("Enter number of terms: \n");
//     scanf("%d", &n);

//     printf("%d",a);
//     printf("%d",b);
//     for(int i = 2; i < n; i++) {
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return 0;
// }

// //q4
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("Enter a character: ");
//     scanf(" %c", &ch);

//     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
//         printf("vowel\n");
//     } else {
//         printf("consonant.");
//     }
//     return 0;
// }

// //q5
// #include<stdio.h>
// struct Student {
//     int id;
//     char *name[];
//     int marks[3];
// };

// int main() {
//     struct Student s1;
//     printf("Enter student id: ");
//     scanf("%d", &s1.id);
//     printf("Enter student name: ");
//     scanf(" %s", s1.name);
//     printf("Enter marks: ");
//     scanf("%d", &s1.marks);

//     printf("\nStudent Details:\n");
//     printf("ID: %d\n", s1.id);
//     printf("Name: %s\n", s1.name);
//     printf("Marks: %d\n", s1.marks);
//     return 0;
// }