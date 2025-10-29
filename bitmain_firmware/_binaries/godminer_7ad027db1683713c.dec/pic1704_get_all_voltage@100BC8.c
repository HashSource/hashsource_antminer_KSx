int __fastcall pic1704_get_all_voltage(char a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int result; // r0
  unsigned __int16 v8; // r3
  unsigned __int16 v9; // r12
  int v10; // [sp+10h] [bp-181Ch] BYREF
  int v11; // [sp+14h] [bp-1818h]
  int v12; // [sp+18h] [bp-1814h]
  unsigned __int8 v13[12]; // [sp+1Ch] [bp-1810h] BYREF
  char s[2040]; // [sp+28h] [bp-1804h] BYREF
  char v15[4100]; // [sp+828h] [bp-1004h] BYREF

  HIBYTE(v11) = a1;
  *(_DWORD *)v13 = 255;
  v12 = 0;
  BYTE2(v11) = 11;
  LOWORD(v11) = 55;
  v10 = 0;
  *(_QWORD *)&v13[3] = 0;
  result = sub_FFDAC(v11, 0, (int)&v10, v13);
  if ( result )
  {
    v8 = __rev16(*(unsigned __int16 *)&v13[5]);
    v9 = __rev16(*(unsigned __int16 *)&v13[7]);
    *a2 = (unsigned __int16)__rev16(*(unsigned __int16 *)&v13[3]);
    *a3 = v8;
    *a4 = v9;
    snprintf(s, 0x800u, "Received all voltage response: vol0 = %d, vol1 = %d, vol2 = %d.", *a2, *a3, v9);
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      181,
      "pic1704_get_all_voltage",
      23,
      513,
      20,
      v15);
    return 1;
  }
  return result;
}
