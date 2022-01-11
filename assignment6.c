#include <stdio.h>
#include <string.h>

/*Question 2: If c is a lowercase character, the expression c - ‘a’ + ‘A’ produces the uppercase equivalent of c, 
assuming ASCII character set.
Write a function called uppercase() that converts all lowercase character in a string into their uppercase equivalent.*/

int uppercase(char text[]){
    int i = 0;
    char chr;

    while(text[i]){ 
        chr = text[i];
        if (chr >= 'A' && chr <= 'Z'){ //if the character is between A and Z
            printf("%c", chr);
        }
        else if (chr >= 'a' && chr <= 'z'){ //if the character is between a and z
            chr -= 32; //chr is equal to itself minus 32
            printf("%c", chr);
        }
        else {
            printf("%c", chr);
        }
        i++; //increment down the inputed text
    }
}

/*Question 3: Write a function called substring() to extract a portion of a character string. The function should be a called as follows
	substring(source, start, county, result);
	Where source is the character string from which you are extracting the substring, 
    start is an index number into source indicating the first character of the substring, 
    count is the number of characters to be extracted from the source string, 
    and result is an array of characters that is to contain the extracted substring. 
    For example, the call substring(“character”, 4, 3, result) extracts the substring “act” 
    (three characters starting with character number 4) from the string “character” and places the result in result. 
	Be certain the function inserts a null character at the end of the substring in the result array. 
    Also, have the function check that the requested number of characters does, in fact, exist in the string. 
    If this is not the case, have the function end the substring when it reaches the end of source string. 
    So, for example, a call such as: substring(“two words”, 4, 20, result);
    should just place the string “words” inside the result array, even though 20 characters were requested by the call */
char result[100];
char source[100] = "big red dog";
int start, count, i, n = 0;

int substring(char source[], int start, int county, char result[]){
    for(i = start; i < (start + count) - 1; i++){ //start at value of start, increment by 1, and go until the value of start plus count
        if(source[n] == '\0'){ //when null is reached, stop
            break;
        }
        result[n] = source[i]; //the source element is now the resulting element
        n++; //increment
    }
    result[n] = source[i]; 

    return 0;
}

/*Question 4: Write a function elapsed_time that takes as its arguments two time structures and returns a time structure that 
              represents the elapsed time (in hours, minutes and, seconds) between the two times. 
	          So the call elapsed_time(time1, time2) where time1 represent 3:45:15 and time2 represents 9:44:03, 
              should return a time structure that represents 5 hours, 58 minutes, and 48 seconds. 
              Be careful with the times that cross midnight.*/

struct time{ //structure of time 
    int hours;
    int minutes;
    int seconds;
};

int elapsed_time(struct time time1, struct time time2){ //elapsed_time structure with time1 and time2
    struct time tempDifference;
    struct time difference;

    int tempSeconds1 = time1.seconds + time1.minutes * 60 + time1.hours * 3600; //converting temperature1 into seconds
    int tempSeconds2 = time2.seconds + time2.minutes * 60 + time2.hours * 3600; 

    if(tempsSeconds1 > tempsSeconds2){  //if the temperature1 is greater than temperature2
        tempDifference = tempSeconds1 - tempSeconds2; //difference of the temperature
        difference.hours = tempDifference / 3600; //calculating hours
        difference.minutes = (tempDifference % 3600) / 60; //calculating minutes
        difference.seconds = ((tempDifference % 3600) % 60) % 60; //calculating seconds
    } else {
        tempDifference = tempSeconds2 - tempSeconds1; //difference of the temperature
        difference.hours = tempDifference / 3600; //calculating hours
        difference.minutes = (tempDifference % 3600) / 60; //calculating minutes
        difference.seconds = ((tempDifference % 3600) % 60) % 60; //calculating seconds
    }
    printf("%d:%d:%d", difference.hours, difference.minutes, difference.seconds);
    printf("%d:%d:%d", difference.hours, difference.minutes, difference.seconds);
}

int main(){
    // char sample[] = ""; //Question 2
    // printf("Enter the string: ");
    // scanf("%s", sample);
    // uppercase(sample);

    // printf("Enter the index you would like to start at: \n"); //Question 3
    // scanf("%d", &start);
    // printf("\nEnter the amount to be extracted from the string: ");
    // scanf("%d", &count);

    // substring(source, start, count, result);
    // printf(result);

    // return 0;

    struct time time1 = {3,45,15}; //time1
    printf("%d:%d:%d\n", time1.hours, time1.minutes, time1.seconds);
    struct time time2 = {9,44,03}; //time2
    printf("%d:%d:%d\n", time2.hours, time2.minutes, time2.seconds);

    elapsed_time(time1, time2); //elapsed_time function 
}