/*******************************************************************************
 * DFM Library v989.878.767
 * Percepio AB, www.percepio.com
 *
 * dfmCloudPort.c
 *
 * The DUMMY cloud port implementation.
 *
 * Terms of Use
 * This file is part of the Device Firmware Monitor library (SOFTWARE), which
 * is the intellectual property of Percepio AB (PERCEPIO) and provided under a
 * license as follows.
 * The SOFTWARE may be used free of charge for the purpose of collecting and
 * transferring data to the DFM service. It may not be used or modified for
 * other purposes without explicit permission from PERCEPIO.
 * You may distribute the SOFTWARE in its original source code form, assuming
 * this text (terms of use, disclaimer, copyright notice) is unchanged. You are
 * allowed to distribute the SOFTWARE with minor modifications intended for
 * configuration or porting of the SOFTWARE, e.g., to allow using it on a 
 * specific processor, processor family or with a specific communication
 * interface. Any such modifications should be documented directly below
 * this comment block.  
 *
 * Disclaimer
 * The SOFTWARE is being delivered to you AS IS and PERCEPIO makes no warranty
 * as to its use or performance. PERCEPIO does not and cannot warrant the 
 * performance or results you may obtain by using the SOFTWARE or documentation.
 * PERCEPIO make no warranties, express or implied, as to noninfringement of
 * third party rights, merchantability, or fitness for any particular purpose.
 * In no event will PERCEPIO, its technology partners, or distributors be liable
 * to you for any consequential, incidental or special damages, including any
 * lost profits or lost savings, even if a representative of PERCEPIO has been
 * advised of the possibility of such damages, or for any claim by any third
 * party. Some jurisdictions do not allow the exclusion or limitation of
 * incidental, consequential or special damages, or the exclusion of implied
 * warranties or limitations on how long an implied warranty may last, so the
 * above limitations may not apply to you.
 *
 * Tabs are used for indent in this file (1 tab = 4 spaces)
 *
 * Copyright Percepio AB, 2021.
 * www.percepio.com
 ******************************************************************************/

#include "dfmCloudPort.h"

#if (defined(DFM_CFG_ENABLED) && ((DFM_CFG_ENABLED) >= 1) && defined(DFM_TRACE_RECORDER_IS_ENABLED) && ((DFM_TRACE_RECORDER_IS_ENABLED) >= 1))

#if (defined(DFM_CFG_CLOUD_PORT_MAX_TOPIC_SIZE))
	#if ((DFM_CFG_CLOUD_PORT_MAX_TOPIC_SIZE) <= 8)
		#error "DFM_CFG_CLOUD_PORT_MAX_TOPIC_SIZE invalid"
	#endif /*((DFM_CFG_CLOUD_PORT_MAX_TOPIC_SIZE) < 0) */
#else /* (defined(DFM_CFG_CLOUD_PORT_MAX_TOPIC_SIZE)) */
	#error "DFM_CFG_CLOUD_PORT_MAX_TOPIC_SIZE not defined"
#endif /* (defined(DFM_CFG_CLOUD_PORT_MAX_TOPIC_SIZE)) */

#include <stdio.h>

char cTopicBuffer[DFM_CFG_CLOUD_PORT_MAX_TOPIC_SIZE] = { 0 };

uint32_t ulDfmDummyCloudPortSend(const void* pvData, uint32_t ulSize, const char* szUniqueSessionID, uint32_t ulTraceCounter, const char* szType, uint32_t ulSlice, uint32_t ulSlices, uint32_t* pulBytesSent)
{
	snprintf(cTopicBuffer, DFM_CFG_CLOUD_PORT_MAX_TOPIC_SIZE - 1, "DevAlert/%s/%lu/%lu-%lu_%s", szUniqueSessionID, ulTraceCounter, ulSlice, ulSlices, szType);

	return 0;
}

#endif /* (defined(DFM_CFG_ENABLED) && ((DFM_CFG_ENABLED) >= 1) && defined(DFM_TRACE_RECORDER_IS_ENABLED) && ((DFM_TRACE_RECORDER_IS_ENABLED) >= 1)) */
