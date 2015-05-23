/*  =========================================================================
    majordomo - MAJORDOMO wrapper

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of CZMQ, the high-level C binding for 0MQ:       
    http://czmq.zeromq.org.                                            
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
    =========================================================================
*/

#ifndef majordomo_library_H_INCLUDED
#define majordomo_library_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <czmq.h>

//  MAJORDOMO version macros for compile-time API detection

#define MAJORDOMO_VERSION_MAJOR 0
#define MAJORDOMO_VERSION_MINOR 1
#define MAJORDOMO_VERSION_PATCH 0

#define MAJORDOMO_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define MAJORDOMO_VERSION \
    MAJORDOMO_MAKE_VERSION(MAJORDOMO_VERSION_MAJOR, MAJORDOMO_VERSION_MINOR, MAJORDOMO_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined LIBMAJORDOMO_STATIC
#       define MAJORDOMO_EXPORT
#   elif defined LIBMAJORDOMO_EXPORTS
#       define MAJORDOMO_EXPORT __declspec(dllexport)
#   else
#       define MAJORDOMO_EXPORT __declspec(dllimport)
#   endif
#else
#   define MAJORDOMO_EXPORT
#endif

//  Opaque class structures to allow forward references
typedef struct _mdp_msg_t mdp_msg_t;
#define MDP_MSG_T_DEFINED
typedef struct _mdp_client_t mdp_client_t;
#define MDP_CLIENT_T_DEFINED
typedef struct _mdp_broker_t mdp_broker_t;
#define MDP_BROKER_T_DEFINED
typedef struct _mdp_worker_t mdp_worker_t;
#define MDP_WORKER_T_DEFINED
typedef struct _mdp_client_msg_t mdp_client_msg_t;
#define MDP_CLIENT_MSG_T_DEFINED
typedef struct _mdp_worker_msg_t mdp_worker_msg_t;
#define MDP_WORKER_MSG_T_DEFINED


//  Public API classes
#include "mdp_msg.h"
#include "mdp_client.h"
#include "mdp_broker.h"
#include "mdp_worker.h"
#include "mdp_client_msg.h"
#include "mdp_worker_msg.h"

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
