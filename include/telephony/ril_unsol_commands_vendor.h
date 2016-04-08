/* //device/libs/telephony/ril_unsol_commands.h
**
** Copyright 2006, The Android Open Source Project
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/
    {SAMSUNG_UNSOL_RESPONSE_BASE, NULL, WAKE_PARTIAL},
    {RIL_UNSOL_RELEASE_COMPLETE_MESSAGE, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_STK_SEND_SMS_RESULT, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_STK_CALL_CONTROL_RESULT, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_DUN_CALL_STATUS, responseVoid, WAKE_PARTIAL},
    {11005, NULL, WAKE_PARTIAL},
    {11006, NULL, WAKE_PARTIAL},
    {RIL_UNSOL_O2_HOME_ZONE_INFO, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_DEVICE_READY_NOTI, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_GPS_NOTI, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_AM, responseString, WAKE_PARTIAL},
    {RIL_UNSOL_DUN_PIN_CONTROL_SIGNAL, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_DATA_SUSPEND_RESUME, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_SAP, responseVoid, WAKE_PARTIAL},
    {11014, NULL, WAKE_PARTIAL},
    {RIL_UNSOL_SIM_SMS_STORAGE_AVAILALE, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_HSDPA_STATE_CHANGED, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_WB_AMR_STATE, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_TWO_MIC_STATE, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_DHA_STATE, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_UART, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_HANDOVER, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_IPV6_ADDR, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_NWK_INIT_DISC_REQUEST, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_RTS_INDICATION, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_OMADM_SEND_DATA, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_DUN, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_SYSTEM_REBOOT, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_VOICE_PRIVACY_CHANGED, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_UTS_GETSMSCOUNT, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_UTS_GETSMSMSG, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_UTS_GET_UNREAD_SMS_STATUS, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_MIP_CONNECT_STATUS, responseVoid, WAKE_PARTIAL},
#ifdef RIL_UNSOL_SNDMGR_WB_AMR_REPORT
    {RIL_UNSOL_SNDMGR_WB_AMR_REPORT, responseInts, WAKE_PARTIAL},
#endif
#ifdef RIL_UNSOL_SNDMGR_CLOCK_CTRL
    {RIL_UNSOL_SNDMGR_CLOCK_CTRL, responseInts, WAKE_PARTIAL},
#endif
