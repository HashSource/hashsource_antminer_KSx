int __fastcall pic1704_update_app_program(int a1)
{
  FILE *v2; // r5
  char *v3; // r9
  char *v4; // r4
  unsigned int v5; // r0
  int v6; // r4
  int v7; // r4
  char *v8; // r3
  __int64 v9; // r0
  __int64 v10; // r2
  __int16 v12; // [sp+14h] [bp-81Ch] BYREF
  char s[8]; // [sp+18h] [bp-818h] BYREF
  __int64 v14; // [sp+20h] [bp-810h] BYREF
  __int64 v15; // [sp+28h] [bp-808h]
  int v16; // [sp+30h] [bp-800h] BYREF
  __int64 *v17; // [sp+34h] [bp-7FCh]
  _QWORD v18[512]; // [sp+830h] [bp+0h] BYREF

  *(_DWORD *)s = 0;
  *(_DWORD *)&s[3] = 0;
  v14 = 0;
  v15 = 0;
  v2 = (FILE *)fopen64("/etc/config/dsPIC33EP16GS202_app.txt", "r");
  if ( !v2 )
  {
    snprintf(
      (char *)&v16,
      0x800u,
      "%s open DSPIC33EP16GS202_PIC_PROGRAM failed chain[%d]!",
      "pic1704_update_app_program",
      a1);
    v6 = -1;
    V_LOCK();
    logfmt_raw((char *)v18, 0x1000u, 0, &v16);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      181,
      "pic1704_update_app_program",
      26,
      274,
      20,
      v18);
    return v6;
  }
  v3 = (char *)calloc(0x3700u, 1u);
  if ( !v3 )
  {
    snprintf((char *)&v16, 0x800u, "%s malloc failed chain[%d]!", "pic1704_update_app_program", a1);
    V_LOCK();
    v6 = -1;
    logfmt_raw((char *)v18, 0x1000u, 0, &v16);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      181,
      "pic1704_update_app_program",
      26,
      281,
      20,
      v18);
    V_LOCK();
    logfmt_raw((char *)v18, 0x1000u, 0, "Sweep error string = %s.", "M:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      181,
      "pic1704_update_app_program",
      26,
      282,
      100,
      v18);
    return v6;
  }
  fseek(v2, 0, 0);
  v4 = v3;
  do
  {
    v4 += 4;
    fgets(s, 7, v2);
    v5 = strtoul(s, 0, 16);
    *(v4 - 1) = v5;
    *(v4 - 4) = HIBYTE(v5);
    *(v4 - 3) = BYTE2(v5);
    *(v4 - 2) = BYTE1(v5);
  }
  while ( v3 + 14080 != v4 );
  fclose(v2);
  v6 = pic1704_reset(a1);
  if ( v6 )
  {
    v6 = pic1704_erase_program(a1);
    if ( v6 )
    {
      v7 = 0;
      do
      {
        v8 = &v3[16 * v7];
        v17 = &v14;
        v9 = *(_QWORD *)v8;
        v10 = *((_QWORD *)v8 + 1);
        ++v7;
        HIBYTE(v16) = a1;
        LOWORD(v16) = 4098;
        BYTE2(v16) = 2;
        v14 = v9;
        v15 = v10;
        v12 = 255;
        memset(v18, 0, 22);
        if ( !sub_FFDAC(v16, (int)&v14, (int)v18, (unsigned __int8 *)&v12) )
        {
          snprintf((char *)&v16, 0x800u, "%s send data to pic error chain[%d]!", "pic1704_update_app_program", a1);
          v6 = 0;
          V_LOCK();
          logfmt_raw((char *)v18, 0x1000u, 0, &v16);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
            181,
            "pic1704_update_app_program",
            26,
            337,
            20,
            v18);
          goto LABEL_11;
        }
      }
      while ( v7 != 880 );
      v6 = pic1704_reset(a1);
      if ( v6 )
      {
        v6 = 1;
        free(v3);
        return v6;
      }
      snprintf((char *)&v16, 0x800u, "%s reset error after program chain[%d]!", "pic1704_update_app_program", a1);
      V_LOCK();
      logfmt_raw((char *)v18, 0x1000u, 0, &v16);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
        181,
        "pic1704_update_app_program",
        26,
        347,
        20,
        v18);
      V_LOCK();
      logfmt_raw((char *)v18, 0x1000u, 0, "Sweep error string = J%d:5.", a1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
        181,
        "pic1704_update_app_program",
        26,
        348,
        100,
        v18);
    }
    else
    {
      snprintf((char *)&v16, 0x800u, "%s erase pic error chain[%d]!", "pic1704_update_app_program", a1);
      V_LOCK();
      logfmt_raw((char *)v18, 0x1000u, 0, &v16);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
        181,
        "pic1704_update_app_program",
        26,
        317,
        20,
        v18);
    }
  }
  else
  {
    snprintf((char *)&v16, 0x800u, "%s reset pic error chain[%d]!", "pic1704_update_app_program", a1);
    V_LOCK();
    logfmt_raw((char *)v18, 0x1000u, 0, &v16);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      181,
      "pic1704_update_app_program",
      26,
      307,
      20,
      v18);
    V_LOCK();
    logfmt_raw((char *)v18, 0x1000u, 0, "Sweep error string = J%d:5.", a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      181,
      "pic1704_update_app_program",
      26,
      308,
      100,
      v18);
  }
LABEL_11:
  free(v3);
  return v6;
}
