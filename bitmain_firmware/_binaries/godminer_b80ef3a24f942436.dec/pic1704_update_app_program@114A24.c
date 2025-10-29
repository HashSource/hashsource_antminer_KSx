int __fastcall pic1704_update_app_program(int a1)
{
  FILE *v2; // r5
  char *v3; // r10
  char *v4; // r4
  unsigned int v5; // r0
  int v6; // r4
  int v7; // r4
  char *v8; // r3
  __int64 v9; // r0
  __int64 v10; // r2
  int v11; // r0
  int v12; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  __int16 v28; // [sp+14h] [bp-81Ch] BYREF
  char s[8]; // [sp+18h] [bp-818h] BYREF
  __int64 v30; // [sp+20h] [bp-810h] BYREF
  __int64 v31; // [sp+28h] [bp-808h]
  int v32; // [sp+30h] [bp-800h] BYREF
  __int64 *v33; // [sp+34h] [bp-7FCh]
  _QWORD v34[512]; // [sp+830h] [bp+0h] BYREF

  memset(s, 0, 7);
  v30 = 0;
  v31 = 0;
  v2 = (FILE *)fopen64("/etc/config/dsPIC33EP16GS202_app.txt", "r");
  if ( !v2 )
  {
    v26 = snprintf(
            (char *)&v32,
            0x800u,
            "%s open DSPIC33EP16GS202_PIC_PROGRAM failed chain[%d]!",
            "pic1704_update_app_program",
            a1);
    v6 = -1;
    V_LOCK(v26);
    v27 = logfmt_raw((int)v34, 0x1000u);
    V_UNLOCK(v27);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      181,
      "pic1704_update_app_program",
      26,
      275,
      20,
      v34);
    return v6;
  }
  v3 = (char *)calloc(0x3700u, 1u);
  if ( !v3 )
  {
    v24 = snprintf((char *)&v32, 0x800u, "%s malloc failed chain[%d]!", "pic1704_update_app_program", a1);
    v6 = -1;
    V_LOCK(v24);
    v25 = logfmt_raw((int)v34, 0x1000u);
    V_UNLOCK(v25);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      181,
      "pic1704_update_app_program",
      26,
      282,
      20,
      v34);
    set_miner_6060info_malloc_failed_err(1);
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
        v33 = &v30;
        v9 = *(_QWORD *)v8;
        v10 = *((_QWORD *)v8 + 1);
        ++v7;
        HIBYTE(v32) = a1;
        LOWORD(v32) = 4098;
        BYTE2(v32) = 2;
        v30 = v9;
        v31 = v10;
        v28 = 255;
        memset(v34, 0, 22);
        if ( !sub_114464(v32, (int)&v30, (int)v34, (unsigned __int8 *)&v28) )
        {
          v11 = snprintf((char *)&v32, 0x800u, "%s send data to pic error chain[%d]!", "pic1704_update_app_program", a1);
          v6 = 0;
          V_LOCK(v11);
          v12 = logfmt_raw((int)v34, 0x1000u);
          V_UNLOCK(v12);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
            181,
            "pic1704_update_app_program",
            26,
            338,
            20,
            v34);
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
      v20 = snprintf((char *)&v32, 0x800u, "%s reset error after program chain[%d]!", "pic1704_update_app_program", a1);
      V_LOCK(v20);
      v21 = logfmt_raw((int)v34, 0x1000u);
      V_UNLOCK(v21);
      v22 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
              181,
              "pic1704_update_app_program",
              26,
              348,
              20,
              v34);
      V_LOCK(v22);
      v23 = logfmt_raw((int)v34, 0x1000u);
      V_UNLOCK(v23);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
        181,
        "pic1704_update_app_program",
        26,
        349,
        100,
        v34);
    }
    else
    {
      v18 = snprintf((char *)&v32, 0x800u, "%s erase pic error chain[%d]!", "pic1704_update_app_program", a1);
      V_LOCK(v18);
      v19 = logfmt_raw((int)v34, 0x1000u);
      V_UNLOCK(v19);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
        181,
        "pic1704_update_app_program",
        26,
        318,
        20,
        v34);
    }
  }
  else
  {
    v14 = snprintf((char *)&v32, 0x800u, "%s reset pic error chain[%d]!", "pic1704_update_app_program", a1);
    V_LOCK(v14);
    v15 = logfmt_raw((int)v34, 0x1000u);
    V_UNLOCK(v15);
    v16 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
            181,
            "pic1704_update_app_program",
            26,
            308,
            20,
            v34);
    V_LOCK(v16);
    v17 = logfmt_raw((int)v34, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      181,
      "pic1704_update_app_program",
      26,
      309,
      100,
      v34);
  }
LABEL_11:
  free(v3);
  return v6;
}
