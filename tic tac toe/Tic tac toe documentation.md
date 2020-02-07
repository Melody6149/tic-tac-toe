| Melody Eastin |
| :---        |
| s198012 |
| Intro to c++ |
| Tic Tac Toe documentation|

## I. Requirements

1. Description of Problem

    - **Name**: Tic tac toe

    - **Problem Statement**:

    - **Problem Specifications**: The game must not have bugs, it must have pvp. the board should be made using a 2d array.

2. Input Information

- The numpad keys are used to pick where you want to place a token.

3. Output Information

- The program shows a board used for tic tac toe and tells the player whose turn it is.

## II. Design

The game runs in a while loop until one player wins. the game gets input and will check if a player won after geting input. It will also check if you can place a token before placeing one in a space.

3, ### Object Information

    **File**: tic tac toe.cpp

    Description: used for the entire game.

    **Attributes**

        Name: Board
            
            Description: 2D array used to characters on each space so i can be displayed.
           
            Type: char array

        Name: input
            Description: Stores input.
            Type: int;

        Name: gameover
            description: used to know when to end while loop
            Type: bool

        Name: Player
            description: used for the game to know which player's turn it is.
            type: char

        Name: validinput
            description: used to know if the input was valid
            type: bool

        Name: Start
            Used to set each space on the board as blank characters.
            type: function

        Name: displayboard
            Description: used to display the board on the screan.

        Name: checkwin
            Description: function used to check if a player has won.

        Name: main
            description: used for the while loop the game runs in. it switches whose turn it is and places tokens on the board. 
