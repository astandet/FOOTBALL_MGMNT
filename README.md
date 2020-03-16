# FOOTBALL_MGMNT
Become a successful football manager!
--------------------------------------

This project's aim is to create a realistic football management simulation. It is going to be mostly text-based and look similar to Championship Manager 97/98. It should feature top European Leagues, including: Spain, Italy, Germany, England, France, Holland, and possibly some other leagues. The graphics framework used in this game is SDL2. 

The game engine will take into consideration factors such as: current quality of players, based on their attributes (hidden and visible), condition, morale etc, perceived quality of the teams, past history of matches between the teams, special factors and more. It is essential that the scores remain realistic at all times, e.g. teams like San Marino playing against top teams like Spain must lose by appropriate margin, typically 5+ goal difference.

Players
-------

Players data will be stored in SQLite database and ideally there should be a community-based system, whereby members of public could update the database with real players data. Alternatively, player names and statistics can be auto-generated. 
  Players should be recirculated in such a way, that quality distribution between teams should at all times resemble (to some pre-defined extent) that from the beginning of the game.

AI
--

A computer controlled team should be able to maintain quality in the long run. It means that it shouldn't be possible for a well-established team, like FC Barcelona, to deteriorate within a few seasons to an average team, let alone one that is fighting relegation.
That implies that the Board of Directors will monitor manager's progress and will terminate his employment should his performance fall below acceptable level.

Dirty Hacks
------------

Computer managers shouldn't be able to use "special features" within the game, that are not available to human managers, as a means of compensating for inadequate AI.

Tactics
-------

IA controlled teams will adopt tactics based on a range of factors, including analysis of opponent's strengths and weaknesses, number of players (red cards, etc), and other factors and will change tactics during the course of a match in reaction to match events. There will be a predefined set of formations for both computer and human managers to choose from, plus human managers will have the ability to create custom formations and save them to a file.
