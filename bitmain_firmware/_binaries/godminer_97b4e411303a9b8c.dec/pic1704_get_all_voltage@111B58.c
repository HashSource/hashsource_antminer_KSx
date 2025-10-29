int __fastcall pic1704_get_all_voltage(char a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int result; // r0
  unsigned __int16 v8; // r3
  unsigned __int16 v9; // r12
  int v10; // r0
  int v11; // r0
  int v12; // [sp+10h] [bp-181Ch] BYREF
  int v13; // [sp+14h] [bp-1818h]
  int v14; // [sp+18h] [bp-1814h]
  unsigned __int8 v15[12]; // [sp+1Ch] [bp-1810h] BYREF
  char s[2040]; // [sp+28h] [bp-1804h] BYREF
  _BYTE v17[4100]; // [sp+828h] [bp-1004h] BYREF

  HIBYTE(v13) = a1;
  *(_DWORD *)v15 = 255;
  v14 = 0;
  BYTE2(v13) = 11;
  LOWORD(v13) = 55;
  v12 = 0;
  *(_QWORD *)&v15[3] = 0;
  result = sub_110D8C(v13, 0, (int)&v12, v15);
  if ( result )
  {
    v8 = __rev16(*(unsigned __int16 *)&v15[5]);
    v9 = __rev16(*(unsigned __int16 *)&v15[7]);
    *a2 = (unsigned __int16)__rev16(*(unsigned __int16 *)&v15[3]);
    *a3 = v8;
    *a4 = v9;
    v10 = snprintf(s, 0x800u, "Received all voltage response: vol0 = %d, vol1 = %d, vol2 = %d.", *a2, *a3, v9);
    V_LOCK(v10);
    v11 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/drv_pic/pic_1704.c",
      186,
      "pic1704_get_all_voltage",
      23,
      514,
      20,
      v17);
    return 1;
  }
  return result;
}
