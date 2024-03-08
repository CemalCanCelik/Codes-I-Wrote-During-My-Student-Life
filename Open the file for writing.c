#include <stdio.h>
#include <math.h>

// Function prototype
int binaryToDecimal(long long binaryNumber);

int main() {
    long long binaryNumber;

    // Get binary number input from the user
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);

    FILE *file;

    // Open the file for writing
    file = fopen("decimal_number.txt", "w");

    // Check if the file is opened successfully
    if (file != NULL) {
        // Convert binary to decimal and write to the file
        int decimalNumber = binaryToDecimal(binaryNumber);
        fprintf(file, "Decimal representation: %d\n", decimalNumber);

        // Close the file
        fclose(file);

        printf("Decimal number successfully written to decimal_number.txt\n");
    } else {
        // Display an error message if the file cannot be opened
        printf("Error opening the file.\n");
    }

    return 0;
}

// Function to convert binary to decimal using math functions
int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0, i = 0, remainder;

    // Iterate through each digit of the binary number
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }

    return decimalNumber;
}
