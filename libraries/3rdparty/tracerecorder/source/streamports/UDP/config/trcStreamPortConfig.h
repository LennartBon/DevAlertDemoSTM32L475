/*
 * Trace Recorder for Tracealyzer v4.7.0
 * Copyright 2023 Percepio AB
 * www.percepio.com
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * The configuration for trace streaming ("stream ports").
 */

#ifndef TRC_STREAM_PORT_CONFIG_H
#define TRC_STREAM_PORT_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

/* This define will determine whether to use the internal buffer or not.
If file writing creates additional trace events (i.e. it uses semaphores or mutexes),
then the internal buffer must be enabled to avoid infinite recursion. */
#define TRC_CFG_STREAM_PORT_USE_INTERNAL_BUFFER 1

/*******************************************************************************
* Configuration Macro: TRC_CFG_STREAM_PORT_UDP_PORT
*
* Specifies the UDP address.
******************************************************************************/
#define TRC_CFG_STREAM_PORT_UDP_ADDRESS "192.168.10.91"

/*******************************************************************************
* Configuration Macro: TRC_CFG_STREAM_PORT_UDP_PORT
*
* Specifies the UDP port.
******************************************************************************/
#define TRC_CFG_STREAM_PORT_UDP_PORT 8888

/*******************************************************************************
* Configuration Macro: TRC_CFG_STREAM_PORT_BUFFER_SIZE
*
* Specifies the size of the internal buffer, if one is used.
******************************************************************************/
#define TRC_CFG_STREAM_PORT_BUFFER_SIZE 20000

#ifdef __cplusplus
}
#endif

#endif /* TRC_STREAM_PORT_CONFIG_H */
