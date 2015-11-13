A2 GEANT4 SIMULATION
==================

works with GEANT4.9.6 p02 -- do not update Geant4 despite deprecations

Prerequisites
-------------
* CERN ROOT  (tested at now with version ROOT 5.34/12)
* git
* XercesC
* CLHEP
* GEANT4.9.6p02
* For polarised targets the magnetic field map (transverse only) is here ( http://www.ph.ed.ac.uk/nuclear/G4/wouter_field_map.dat  ).

Installation
------------

In order to install, just:
* mkdir build
* cd build
* cmake ../
* make

option to speed up compilation, make -j (here put the number of CPU)

Differences between this fork and master repository at A2-Collaboration
=======================================================================

Modifications enable visualization with DAWN

Followed [instructions](http://geant4.slac.stanford.edu/Presentations/vis/G4DAWNTutorial/G4DAWNTutorial.html). One thing to keep in mind while updating the command path with the DAWN directory: After pasting the directory address as per the instructions in the last step, typing `dawn` while the terminal is in the directory may yield an error saying that the command dawn wasn't found. This is not an installation error, but rather just that the command paths haven't been "refreshed". `source .profile` will do this, and typing `dawn` will then run it as expected.
