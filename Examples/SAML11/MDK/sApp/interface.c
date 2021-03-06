/*
 * Copyright (c) 2013-2016 ARM Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * ----------------------------------------------------------------------
 *
 * interface.c      Secure/non-secure callable application code
 *
 * Version 1.0
 *    Initial Release
 *---------------------------------------------------------------------------*/


#include <arm_cmse.h>     // CMSE definitions

#include "secure.h"    // Header file with secure interface API
#include "interface.h"    // Header file with secure interface API

/* Non-secure callable (entry) function */
int __attribute__((cmse_nonsecure_entry)) secure_func1(int x)
{
	
	return func1(x);
}

/* Non-secure callable (entry) function */
int __attribute__((cmse_nonsecure_entry)) secure_func2(int x)
{
	return func2(x);
}
