Mesh files description
| Case | Governing parameters  | Notes |
|:---|:---|:---:|
| _frustumMeshDict_ | ||
| _flowAroundCylinderMeshDict_ | _r_ &mdash; cylinder radius <br> _CPD_ &mdash; cells per diameter <br> _xmin_ &mdash; inlet coordinate, <0 <br> _xmax_ &mdash; outlet coordinate, >0 <br> _ymax_ &mdash; cylinder to top/bottom distance <br> _radialGrading_ &mdash; mesh grading to provide near-cylinder boundary layer <br> _downstreamGrading_ &mdash; cell expansion behind the cylinder <br> _upstreamGrading_ &mdash; cell expansion before the cylinder  <br> verticalGrading &mdash; cell expansion up/down from the cylinder | cylinder center has position (0,0) |
| _wallJetMeshDict_ | _D_ &mdash; diameter (used as a reference scale) <br> _L_ <br> _H_ <br> _w50_ <br> _f50_ <br> _ND_ <br> _zb_ <br> _domainExpansion_ | - |
|_backwardFacingStepMeshDict_|-|-|
