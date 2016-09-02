/*
 *  Copyright (c) 2004 Apple Computer, Inc. All Rights Reserved.
 * 
 *  @APPLE_LICENSE_HEADER_START@
 *  
 *  This file contains Original Code and/or Modifications of Original Code
 *  as defined in and that are subject to the Apple Public Source License
 *  Version 2.0 (the 'License'). You may not use this file except in
 *  compliance with the License. Please obtain a copy of the License at
 *  http://www.opensource.apple.com/apsl/ and read it before using this
 *  file.
 *  
 *  The Original Code and all software distributed under the License are
 *  distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 *  EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 *  INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 *  Please see the License for the specific language governing rights and
 *  limitations under the License.
 *  
 *  @APPLE_LICENSE_HEADER_END@
 */

/*
 * cac.cpp - CAC.tokend main program
 */

#include "CACToken.h"

int main(int argc, const char *argv[])
{
	secdebug("CAC.tokend", "main starting with %d arguments", argc);
	secdelay("/tmp/delay/CAC");

#if 0
	setenv("DEBUGSCOPE", "-mutex,walkers", 0);
	setenv("DEBUGOPTIONS", "scope,thread,date", 0);
	setenv("DEBUGDEST", "/var/tmp/securityd-log", 0);
	setenv("DEBUGDUMP", "stdout", 0);
#endif

	token = new CACToken();
	return SecTokendMain(argc, argv, token->callbacks(), token->support());
}

