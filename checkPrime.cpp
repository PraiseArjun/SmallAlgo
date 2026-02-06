// Check if a number is prime

int n = 23;

for(int i=2; i<=sqrt(n); i++)
{
  if (n % i == 0)
    return false;
}
return true;
