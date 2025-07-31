This repository contains OpenFOAM cases and their parts, as well as codes for OpenFOAM cases processing.

-- frustumMesh -- blockMeshDict for creating a quarter of a frustum or cylinder pipe mesh. The mesh is block-structured, with high-resolution block in center and outer radial mesh. The customization includes: linear scales (length, pipe radius), ovrall cell number in radial direction (taking grading into account), outer radial grading, axial grading, central near-H block size. The axial cell number is re-calculated automatically so that the central blocks near the coordinate zero contains near-cuboid cells.

Remeber the mesh is a quarter! If you need a full-circle pipe, don't forget to mirror it twice by youself.

-- QHD_wave-attractor -- OpenFOAM case for wave attractor calculation using QHD solver
