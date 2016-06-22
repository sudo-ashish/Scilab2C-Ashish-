/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2006-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include <math.h>
#include "acot.h"
#include "complex.h"
#include "division.h"
#include "doubleComplex.h"
#include "atan.h"

doubleComplex zacots(doubleComplex x) 
{
 doubleComplex xinv;
 xinv = zrdivs(DoubleComplex(1,0),x);
 return zatans(xinv);
}