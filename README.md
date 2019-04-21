# filler
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
Heat map.

## Exemple
map02:
<img width="1196" alt="Screen Shot 2019-04-21 at 7 22 42 PM" src="https://user-images.githubusercontent.com/44093777/56473995-fcacba00-646a-11e9-9c52-5494bd3c15e3.png">

<img width="1194" alt="Screen Shot 2019-04-21 at 7 13 42 PM" src="https://user-images.githubusercontent.com/44093777/56473895-ab4ffb00-6469-11e9-8f83-9888f7360556.png">


# Prerequisites
`brew install SDL2`

`brew install SDL2_ttf`

If brew isn't installed, compile the project with the sources (don't forget to change the Makefile).

# Installation of the algorithm
`cd work ; make`

# Installation of the visualizer
`cd visu ; make`

# Run
Standard mode :

`./filler_vm -f [map] -p1 [player1] -p2 [player2]`

# Visualizer mode :

`./filler_vm -f [map] -p1 [player1] -p2 [player2] | ./visu`

Example from the root folder : `ressources-filler/./filler_vm -f ressources-filler/maps/map02 -p1 ./mdubus.filler -p2 ressources-filler/players/superjeannot.filler | ./visu`
