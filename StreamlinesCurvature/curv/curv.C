/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | www.openfoam.com
     \\/     M anipulation  |
-------------------------------------------------------------------------------
    Copyright (C) 2014-2016 OpenFOAM Foundation
    Copyright (C) 2020 OpenCFD Ltd.
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "curv.H"
#include "fvcGrad.H"
#include "addToRunTimeSelectionTable.H"

// * * * * * * * * * * * * * * Static Data Members * * * * * * * * * * * * * //

namespace Foam
{
namespace functionObjects
{
    defineTypeNameAndDebug(curv, 0);
    addToRunTimeSelectionTable(functionObject, curv, dictionary);
}
}


// * * * * * * * * * * * * * Private Member Functions  * * * * * * * * * * * //

bool Foam::functionObjects::curv::calc()
{
    if (foundObject<volVectorField>(fieldName_))
    {
        tmp<volVectorField> tU = lookupObject<volVectorField>(fieldName_);
        const volVectorField& U = tU();
	dimensionedScalar EPS ("EPS",dimensionSet(0,2,-2,0,0,0,0),1e-9);
	const volVectorField T = U/sqrt(pow(U.component(0),2)+pow(U.component(1),2)+pow(U.component(2),2)+EPS);
	// Ux = U.component(0);
        const volVectorField GU0 = fvc::grad(T.component(0));// \nabla Ux
        //const volTensorField GGU0 = fvc::grad(GU0);
        const volVectorField GU1 = fvc::grad(T.component(1));
        //const volTensorField GGU1 = fvc::grad(GU1);
        const volVectorField GU2 = fvc::grad(T.component(2));
	
        return store
        (
            resultName_,
	   sqrt(pow(GU0.component(0) * T.component(0) + GU0.component(1) * T.component(1) + GU0.component(2) * T.component(2),2)+
	   pow(GU1.component(0)* T.component(0) + GU1.component(1) * T.component(1) + GU1.component(2) * T.component(2),2)+
           pow( GU2.component(0) * T.component(0) + GU2.component(1) * T.component(1) + GU2.component(2) * T.component(2),2))
        );
    }

    return false;
}


// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

Foam::functionObjects::curv::curv
(
    const word& name,
    const Time& runTime,
    const dictionary& dict
)
:
    fieldExpression(name, runTime, dict, "U")
{
    setResultName(typeName, fieldName_);
}


// ************************************************************************* //
