// Check if a number is palindrome or not.

int n = 12321;
int temp = n, num = 0;

while(temp)
{
  int rem = temp % 10;
  num = num*10 + rem;
  temp /= 10;
}

return (n == num);
