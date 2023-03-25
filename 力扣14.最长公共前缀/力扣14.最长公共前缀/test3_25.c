#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        char* empty_str = (char*)malloc(sizeof(char));
        empty_str[0] = '\0';
        return empty_str;
    }

    // Find the shortest string in the array
    char* shortest_str = strs[0];
    for (int i = 1; i < strsSize; i++) {
        if (strlen(strs[i]) < strlen(shortest_str)) {
            shortest_str = strs[i];
        }
    }

    // Loop through each character in the shortest string
    for (int i = 0; i < strlen(shortest_str); i++) {
        // Loop through each string in the array
        for (int j = 0; j < strsSize; j++) {
            // If any string doesn't have the same character at the same index, return the prefix up to that point
            if (strs[j][i] != shortest_str[i]) {
                char* prefix = (char*)malloc(sizeof(char) * (i + 1));
                strncpy(prefix, shortest_str, i);
                prefix[i] = '\0';
                return prefix;
            }
        }
    }

    // If all strings have the same prefix, return the entire shortest string
    return shortest_str;
}

int main()
{
    char* strs[3] = { "flower", "flow", "flight" };
    printf("%s", longestCommonPrefix( strs,  3));
    return 0;
}