#include <stdio.h>
#include <string.h>

// Function to check if the input string satisfies the grammar
int checkGrammar(char *input) {
    int length = strlen(input);
    int count_a = 0, count_b = 0;
    
    
    // Count the number of 'a's and 'b's in the input string
    for(int i = 0; i < length; i++) {
        char current_char = input[i]; // Store the current character
        
        if(current_char == 'a') {
            count_a++;
        }
        else if(current_char == 'b') {
            count_b++;
        }
        else {
            // If the input contains any other characters apart from 'a' and 'b', return 0
            return 0;
        }
    }
    
    // If the count of 'a's and 'b's are equal and both are greater than 0, return 1 (true)
    if(count_a == count_b && count_a > 0) {
        return 1;
    }
    
    // Otherwise, return 0 (false)
    return 0;
}

int main() {
    char input[100];
    
    // Get input from the user
    printf("Enter a string: ");
    scanf("%s", input);
    
    // Check if the input string satisfies the grammar
    if(checkGrammar(input)) {
        printf("The input string satisfies the grammar.\n");
    } else {
        printf("The input string does not satisfy the grammar.\n");
    }
    
    return 0;
}
