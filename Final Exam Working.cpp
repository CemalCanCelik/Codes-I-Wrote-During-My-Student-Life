#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
int main (){

int rows, cols;

 
printf("Input number of Rows for the matrix: ");
scanf("%d", &rows);
printf("Input number of Columns for the matrix: ");
scanf("%d", &cols);

int matrix[rows][cols];

 
printf("Input elements in the matrix:\n");
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
printf("element - [%d],[%d] : ", i, j);
scanf("%d", &matrix[i][j]);
}
}

 
printf("\nThe matrix is:\n");
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
printf("%d ", matrix[i][j]);
}
printf("\n");
}

 
int Identity = 1;

for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
if (i == j && matrix[i][j] != 1) {
 
Identity = 0;
break;
} else if (i != j && matrix[i][j] != 0) {
 
Identity = 0;
break;
}
}
if (Identity == 0) {
break;
}
}

 
if (Identity) {
printf("\nThe matrix is an identity matrix.\n");
} else {
printf("\nThe matrix is not an identity matrix.\n");
}

return 0;
}