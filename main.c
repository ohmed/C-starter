#include <stdio.h>
#include <string.h>

  int main() {
  int i = 0;
  
  //to have your legacy run for 1000 years :-)
  while (i < 1000) {
    printf("Today in history, on 2087, ");
    printf("%s\n", strerror(130));
    //let the loop sleep for 31,536,000 seconds(365 days lol)
    sleep(31536000);
    ++i;
  }
    
    return 0;
}
