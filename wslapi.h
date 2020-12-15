/*
 * Copyright (c) 2017-2020 yuk7
 * Author: yuk7 <yukx00@gmail.com>
 *
 * Released under the MIT license
 * http://opensource.org/licenses/mit-license.php
 */

#ifndef WSLAPI_H_
#define WSLAPI_H_

#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

// WSL APIs declarations. Old mingw-w64 may not have wslapi.h
HRESULT WINAPI WslIsDistributionRegistered (PCWSTR);
HRESULT WINAPI WslRegisterDistribution (PCWSTR,PCWSTR);
HRESULT WINAPI WslUnregisterDistribution (PCWSTR);
HRESULT WINAPI WslConfigureDistribution (PCWSTR,ULONG,INT);
HRESULT WINAPI WslGetDistributionConfiguration (PCWSTR,ULONG*,ULONG*,INT*,PSTR*,ULONG*);
HRESULT WINAPI WslLaunchInteractive (PCWSTR,PCWSTR,BOOL,DWORD*);
HRESULT WINAPI WslLaunch (PCWSTR,PCWSTR,BOOL,HANDLE,HANDLE,HANDLE,HANDLE*);
#ifdef __cplusplus
}
#endif

#endif
