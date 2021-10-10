#include <stdio.h>

int perimeter(int,int);

int main()
{
    int height, width;
    char label[2][100] = {"height", "width"};
    for(int i = 0; i < 2; i++)
    {
         printf("Enter the %s of the rectangle: \n", label[i]);

          switch(i)
          {
              case 0:
              scanf("%d", &height);
              break;

              case 1:
              scanf("%d", &width);
              break;
           }
    }
    printf("\nPerimeter = %d\n", perimeter(height,width));
}

int perimeter(int height, int width)
{
   return (2*width) + (2*height);
}

