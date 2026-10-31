#include <stdio.h>
#include <string.h>
#include <cs50.h>

/*In a file called scrabble.c in a folder called scrabble, implement a program in C that determines the winner of a short Scrabble-like game. Your program should prompt for input twice: once for “Player 1” to input their word and once for “Player 2” to input their word. Then, depending on which player scores the most points, your program should either print “Player 1 wins!”, “Player 2 wins!”,
 or “Tie!” (in the event the two players score equal points).*/

 int main(void)
 {
    string player1;
    string player2;

    player1 = get_string("Player 1: ");
    player2 = get_string("Player 2: ");

    if (strlen(player1) == strlen(player2)) 
    {
        printf("Tie!\n");
    }

    else if (strlen(player1) < strlen(player2))
    {
        printf("Player 2 is the winner!");
    }

    else if (strlen(player1) > strlen(player2)) 
    {
        printf("Player 1 is the winner!");
    }
 }

