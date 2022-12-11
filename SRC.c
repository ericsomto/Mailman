#include <stdio.h>
#include <string.h>

int main()
{
  // Declare variables for the destination address and the type of mail
  char destination[256];
  char mail_type[256];

  // Get the destination address from the user
  printf("Enter the destination address: ");
  scanf("%s", destination);

  // Get the type of mail from the user
  printf("Enter the type of mail (letter, package, explosive): ");
  scanf("%s", mail_type);

  // Print a message indicating that the mail has been delivered
  printf("The %s has been delivered to %s.\n", mail_type, destination);

  return 0;
}




