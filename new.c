#include <stdio.h> 
#include <string.h> 
  
int findLength(char *str) 
{ 
    int n = strlen(str); 
    int maxlen = 0; // Initialize result 
  
    // A 2D table where sum[i][j] stores sum of digits 
    // from str[i] to str[j].  Only filled entries are 
    // the entries where j >= i 
    int sum[n][n],i,len;
  
    // Fill the diagonal values for sunstrings of length 1 
    for (i =0; i<n; i++) 
        sum[i][i] = str[i]-'0'; 
  
    // Fill entries for substrings of length 2 to n 
    for (len=2; len<=n; len++) 
    { 
        // Pick i and j for current substring 
        for (i=0; i<n-len+1; i++) 
        { 
            int j = i+len-1; 
            int k = len/2; 
  
            // Calculate value of sum[i][j] 
            sum[i][j] = sum[i][j-k] + sum[j-k+1][j]; 
  
            // Update result if 'len' is even, left and right 
            // sums are same and len is more than maxlen 
            if (len%2 == 0 && sum[i][j-k] == sum[(j-k+1)][j] 
                           && len > maxlen) 
                 maxlen = len; 
        } 
    } 
    return maxlen; 
} 
  
// Driver program to test above function 
int main(void) 
{ 
    char str[] = "123121"; 
    printf("Length of the substring is %d", findLength(str)); 
    return 0; 
}
