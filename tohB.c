#include<stdio.h>
#include<conio.h>
void tower(int, char, char, char);
int main()
{
int n;
printf("Enter the number of disks : ");
scanf("%d", &n);
printf("The sequence of moves in the Tower of Hanoi are :\n");
tower(n, 'A', 'C', 'B');
return 0;
}
void tower(int n, char A, char B, char C)
{
if (n == 1)
{
printf("\n Move disk 1 from Tower %c to Tower %c", A, B);
return;
}
// Recursively calling function twice
tower(n - 1, A, C, B);
printf("\n Move disk %d from Tower %c to Tower %c", n, A, B);
tower(n - 1, C, B, A);
}