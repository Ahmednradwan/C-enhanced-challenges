/**
 * @file stringManipulation.c
 * @author Ahmed N. Radwan
 * @brief This program is to perform some operations on string (Find a character in a string/ find
 * sub-string in a string/ tokenize a strting)
 * @version 0.1
 * @date 2023-07-29
 * @copyright Copyright (c) 2023
 * 
 */

/****************************** Include Section Start ********************************************/
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<string.h>
#include<stdbool.h>

/******************************* Include Section End *********************************************/


/***************************** Definition Section Start ******************************************/

/****************************** Definition Section End *******************************************/


/************************* Global Decleration Section Start **************************************/

/************************** Global Decleration Section End ***************************************/


/*********************** Sub-Program Decleration Section start ***********************************/
uint32_t find_char(uint8_t str[],uint8_t c,uint32_t found_indeces[]);
bool is_char_found(uint32_t found);
void print_results(uint8_t str[],uint32_t found_indeces[],uint32_t found);
uint32_t find_word(uint8_t str[],uint8_t word[],uint32_t found_indeces[]);
void print_word_results(uint8_t str[],uint8_t word[],uint32_t found_indeces[],uint32_t found);
uint32_t tok_a_str(uint8_t str[],uint8_t delimiters[],uint32_t max_tok_len,uint8_t s_tokens[][max_tok_len]);
/************************ Sub-Program Decleration Section End ************************************/


uint8_t main()
{
    uint8_t my_string[]="it is a sample string its using is to show some operations on it using the C standard liberary file string.h";
    uint8_t character;
    uint8_t word[15];
    uint8_t delimiters[]=" ";
    uint32_t founds;
    uint32_t results[sizeof(my_string)];
    uint32_t max_tok_len=sizeof(my_string);
    uint8_t tokens[max_tok_len][max_tok_len];
    printf("\n\"%s\"\n\n",my_string);
    printf("Enter the character you want to look for:");
    scanf("%c",&character);
    founds= find_char(my_string,character,results);
    if (is_char_found(founds))
    {
        printf("\nThe character '%c' has been found %d time/s through your string\n\n",character,founds);
        print_results(my_string,results,founds);
    }
    else
    {
        printf("Sorry!\nThe character '%c' that you are looking for doesn't exist in your string\n\n",character);
    }
    
    printf("\nPlease Enter a word to look for in the above string:");
    scanf("%s",word);
    founds=find_word(my_string,word,results);
    if (is_char_found(founds))
    {
        printf("\nThe word \"%s\" has been found %d time/s through your string\n\n",word,founds);
        print_word_results(my_string,word,results,founds);
    }
    else
    {
        printf("Sorry!\nThe word \"%s\" that you are looking for doesn't exist in your string\n\n",word);
    }
    printf("======================================================================================\n");
    printf("                                Tokenizing The String                                 \n");
    printf("======================================================================================\n");
    founds=tok_a_str(my_string,delimiters,max_tok_len,tokens);
    for (uint32_t token = 0; token < founds; token++)
    {
        printf("[%d] %s\n",token,tokens[token]);
    }
    
    return EXIT_SUCCESS;
}

/************************** Sub-Program Definition Section Start *********************************/
uint32_t find_char(uint8_t str[],uint8_t c,uint32_t found_indeces[])
{
    uint32_t no_of_found_chars=0;
    uint8_t *char_ptr=str;
    do
    {
        char_ptr=strchr(char_ptr,c);
        if (char_ptr)        // this is the same as char_ptr!=NULL
        {
            found_indeces[no_of_found_chars++]=char_ptr++-str;   // instead of adding another2 lines
                                                                // to increment no_of_found_char and
                                                                // char_ptr  
        }
    } while (char_ptr);     // this is equal to char_ptr!=NULL
    
     return no_of_found_chars;
}

bool is_char_found(uint32_t found)
{
    if (found)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

void print_results(uint8_t str[],uint32_t found_indeces[],uint32_t found)
{
    printf("%s\n",str);
    uint8_t pattern[strlen(str)+1];
    pattern[strlen(str)]='\0';
    memset(pattern,' ',strlen(str));
    for (uint8_t sign_counter = 0; sign_counter < found; sign_counter++)
    {
        pattern[found_indeces[sign_counter]]='^';
    }
    printf("%s\n",pattern);
}

uint32_t find_word(uint8_t str[],uint8_t word[],uint32_t found_indeces[])
{
    uint32_t founds=0;
    uint8_t *word_ptr=str;
    do
    {   
        word_ptr=strstr(word_ptr,word);
        if (word_ptr)
        {
            found_indeces[founds++]=word_ptr++-str;
        }
    } while (word_ptr);
    return founds;
}

void print_word_results(uint8_t str[],uint8_t word[],uint32_t found_indeces[],uint32_t found)
{
    uint8_t pattern[strlen(str)+1];
    pattern[strlen(str)]='\0';
    printf("%s\n",str);
    memset(pattern,' ',strlen(str));
    for (uint32_t word_count = 0; word_count < found; word_count++)
    {
        memset(&pattern[found_indeces[word_count]],'-',strlen(word));
    }
    printf("%s\n",pattern);
    

}

uint32_t tok_a_str(uint8_t str[],uint8_t delimiters[],uint32_t max_tok_len,uint8_t s_tokens[][max_tok_len])
{
    uint32_t found_tokens=0;
    uint8_t *tokptr = str;
    for (found_tokens = 0; tokptr!=NULL; found_tokens++)
    {
        tokptr=strtok(found_tokens==0?tokptr:NULL,delimiters);
        strncpy(s_tokens[found_tokens],tokptr,tokptr?max_tok_len:0);
        //tokens[found_tokens][max_tok_len]=*tokptr;
    }
    return found_tokens;
}
/*************************** Sub-Program Definition Section End **********************************/


/**
 ************************************************************************************************** 
 * @name                    @date               @brief
 **************************************************************************************************
    Ahmed N. Radwan         29/07/2023           implementing character searching algorithm
    Ahmed N. Radwan         31/07/2023           implementing sub-string searching algorithm
    Ahmed N. Radwan         08/08/2023           implementing the tokenization algorithm
 */