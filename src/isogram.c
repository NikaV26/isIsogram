#define UNITY_OUTPUT_COLOR

#include "isogram.h"
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


bool is_isogram(const char word[]){
    if(strlen(word) == 0)
        return true;
    uint32_t seen[256] = {0};

    for(int i = 0; word[i] != '\0';i++)
    {
        seen[word[i]]++;
    }

    uint32_t expected = 0;
    for(int i = 0;i<256;i++)
    {
        if(seen[i] != 0)
        {
            if (expected == 0)
                expected = seen[i];
            else if(seen[i] != expected)
                return false;
        }
    }
    return true;
}
