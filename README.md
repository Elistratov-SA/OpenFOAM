This repository contains OpenFOAM cases and their parts, as well as codes for OpenFOAM cases processing.

* __meshes__ -- different blockMeshDicts:

  * _frustumMeshDict_---for creating a quarter of a frustum or cylinder pipe mesh. The mesh is block-structured, with high-resolution block in center and outer radial mesh. The customization includes: linear scales (length, pipe radius), ovrall cell number in radial direction (taking grading into account), outer radial grading, axial grading, central near-H block size. The axial cell number is re-calculated automatically so that the central blocks near the coordinate zero contains near-cuboid cells.
Remeber the mesh is a quarter! If you need a full-circle pipe, don't forget to mirror it twice by youself.

  * _wallJetMeshDict_---for jet-over-wall problem. 

  * _flowAroundCylinderMeshDict_---for outer-cylinder emerged into a recatngular domain

* __SIMPLE_axysimmetric_jet__---OpenFOAM case for jet in wedge geometry

* __QHD_wave-attractor__---OpenFOAM case for wave attractor calculation using mulesQHD solver

* _OpenFOAM_data_python_loading.ipynb_---OpenFOAM case data loader to python (postprocessing or raw case data)

