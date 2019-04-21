# filler
Filler
Filler is a game, where two players / algorithm are fighting on a map.

A virtual machine organizes the game :

calls the players alternatively
give each a random piece
On each turn, the current player have to put his piece on the map, and try to bother the ennemy. To put a piece, the player have to write its coordinates in the "Y X\n" format on the standard input (stdin).

The game appears on the standard input.

The aim of the game is to put more pieces on the map than the ennemy.

# Bonus
On big maps it's difficult to see what is really happening.

A visualizer made with the SDL2 helps us to understand what's happening. Use the left and right arrows of your keyboard to see it.

# Algorithm
On the begining of each turn, a Heat Map is created. It represents the Map of the game. Values are assigned on each case of the map. It starts from the position of the ennemy and is incremented until it reaches the board edges Then, the algorithm try to put the piece on each position of the map. One case of the piece has to overlap one of my previous. It calculates the score on each position. The smaller the score is, the best it is, because it will get closer of the ennemy and bother him to play.


## Exemple
<img width="1199" alt="Screen Shot 2019-04-21 at 7 02 30 PM" src="https://user-images.githubusercontent.com/44093777/56473837-14833e80-6469-11e9-8d97-a32d01c256e3.png">




# Prerequisites
`brew install SDL2`

`brew install SDL2_ttf`

If brew isn't installed, compile the project with the sources (don't forget to change the Makefile).
