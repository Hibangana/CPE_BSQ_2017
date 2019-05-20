# CPE_BSQ_2017
3 weeks long project
The goal of this project is to find the biggest square in a map made of '.' and 'o', and replace them by 'x'.

To compile the binary type "make"

And to test it out, i've added a tests/mouli_maps/ folder filled with maps to tests, there is also a mouli_maps_solved/ folder to compare the outputs.

How to use:

./bsq tests/mouli_maps/anymap

How to compare:

./bsq tests/mouli_maps/map1 > file

vimdiff file tests/mouli_maps_solved/map1
