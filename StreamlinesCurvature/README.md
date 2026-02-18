# functionObjectsNNturb
OpenFOAM function objects for streamlines curvature implicit caculation 
========== HOW TO RUN ===========
Form the StreamlinesCurvature directory:
1. source [OpenFOAM bashrc] if necessary
2. wclean && wmake
From your case directory:
4. cp StreamlinesCurvature/curv/curv [your/case]/system
5. postProcess -func curv 
