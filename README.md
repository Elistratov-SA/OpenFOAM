This repository contains OpenFOAM cases and their parts, as well as codes for OpenFOAM cases processing.

* __meshes__ &mdash; different blockMeshDicts:
  * _airfoilMeshDict_ &mdash; for NACA 4-digit airfoil flow
    
  * _backwardFacingStepMeshDict_ &mdash; for Pitz-Daily problem 
  
  * _flowAroundCylinderMeshDict_ &mdash; for outer-cylinder emerged into a recatngular domain

  * _frustumMeshDict_ &mdash; for creating a quarter of a frustum or cylinder pipe mesh

  * _wallJetMeshDict_ &mdash; for jet-over-wall problem



* __PIMPLE_flow_past_cylinder__ &mdash; OpenFOAM case for flow past cylinder (Re=100)

* __QHD_wave-attractor__ &mdash; OpenFOAM case for wave attractor calculation using _mulesQHD_ solver

* __SIMPLE_axysimmetric_jet__ &mdash; OpenFOAM case for axissymmetric jet in wedge geometry

* __StreamlinesCurvature__ &mdash; OpenFOAM function object for calculating the stramlines curvature


* _OpenFOAM_data_python_loading.ipynb_ &mdash; OpenFOAM case data loader to python (postprocessing or raw case data)

