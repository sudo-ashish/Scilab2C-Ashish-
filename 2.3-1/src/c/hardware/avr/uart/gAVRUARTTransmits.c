/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Ashish Kamble
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/ 
//Function to Transmit String.


#include "AVRPeripheralUART.h"

uint8 gAVRUARTTransmits(uint8 *msg)
{
 while(*msg!='\0')
 {
  u8AVRUARTTransmits(*msg);
  msg++;
 }
 return 0;
}