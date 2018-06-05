# FOOTBALL_MGMNT
Become a successful football manager!
--------------------------------------

This project's aim is to create a realistic football management simulation. It is going to be mostly text-based and look similar to Championship Manager 97/98. It should feature top European Leagues, including: Spain, Italy, Germany, England, France, Holland, and possibly some other leagues. The graphics library used in this game is SDL2. 

The game engine will take into consideration factors such as: current quality of players, based on their attributes (hidden and visible), tiredness, morale etc, perceived quality of the teams, past history of matches between the teams, special factors and more. It is essential that the scores remain realistic at all times, e.g. teams like San Marino playing against top teams like Spain must lose by appropriate margin, typically 4+ goal difference.

Players
-------

Players data should be stored in a database, like: PostgreSQL and ideally there should be a community-based system, whereby members of public could update the database with real players data. Alternatively, player names and statistics can be auto-generated. 
  Players should be recirculated in such a way, that quality distribution between teams should at all times resemble (to some pre-defined extent) that from the beginning of the game.

AI
--

A computer controlled team should be able to maintain quality in the long run. It means that it shouldn't be possible for a well-established team, like FC Barcelona, to deteriorate within a few seasons to an average team, let alone one that is fighting relegation.

Dirty Hacks
------------

Computer managers shouldn't be able to use "special features" within the game, that are not available to human managers, as a way of compensation for inadequate AI.
