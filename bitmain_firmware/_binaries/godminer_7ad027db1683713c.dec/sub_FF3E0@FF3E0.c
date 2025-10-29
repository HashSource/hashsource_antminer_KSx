int __fastcall sub_FF3E0(int a1, int a2, void *src, size_t a4, void *a5, size_t a6)
{
  _DWORD *v7; // r0
  size_t v8; // r9
  int v11; // r8
  _DWORD *v12; // r1
  __int16 v13; // r12
  __int16 v14; // t1
  char *v15; // r9
  int v16; // r5
  int v17; // r0
  int v18; // r1
  int v20; // r0
  size_t v21; // r5
  size_t v22; // r6
  int v23; // r3
  char *v24; // r2
  __int16 v25; // t1
  char *v27; // [sp+Ch] [bp-1018h] BYREF
  _WORD v28[8]; // [sp+10h] [bp-1014h] BYREF
  char var1004[4128]; // [sp+20h] [bp-1004h] BYREF

  v7 = &g_bitmain_pic_state[2 * a1];
  if ( a4 )
    v8 = a4;
  else
    v8 = 1;
  if ( v8 >= 8 )
    v8 = 8;
  if ( !v7[1] )
  {
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, "%s this chain not inited", "pic_1704_cmd");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      180,
      "pic_1704_cmd",
      12,
      67,
      100,
      var1004);
  }
  LOBYTE(v28[1]) = v8 + 4;
  v11 = (unsigned __int8)(v8 + 6);
  HIBYTE(v28[1]) = a2;
  v28[0] = -21931;
  memcpy(&v28[2], src, v8);
  v12 = (_DWORD *)((char *)v28 + 1);
  v13 = 0;
  do
  {
    v14 = *((unsigned __int8 *)v12 + 1);
    v12 = (_DWORD *)((char *)v12 + 1);
    v13 += v14;
  }
  while ( (char **)((char *)&v27 + v11 + 1) != v12 );
  v15 = (char *)v28;
  *((_BYTE *)&v28[-1] + v11) = HIBYTE(v13);
  *((_BYTE *)&v27 + v11 + 3) = v13;
  sub_FF304((int)"pic tx", (int)v28, v11);
  pthread_mutex_lock(&i2c_mutex_all);
  if ( iic_write(g_bitmain_pic_state[2 * a1], (int)v28, v11) != v11 )
  {
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, "%s write iic err", "pic_1704_cmd");
    v16 = 1;
    V_UNLOCK();
    v27 = var1004;
    v17 = g_zc;
    v18 = 83;
LABEL_12:
    zlog(
      v17,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      180,
      "pic_1704_cmd",
      12,
      v18,
      100,
      v27);
    goto LABEL_13;
  }
  usleep(0x2710u);
  v20 = g_bitmain_pic_state[2 * a1];
  memset(v28, 0, sizeof(v28));
  v21 = (unsigned __int8)(a6 + 5);
  v22 = v21;
  if ( iic_read(v20, v28, v21) != v21 )
  {
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, "%s read iic err", "pic_1704_cmd");
    v16 = 2;
    V_UNLOCK();
    v27 = var1004;
    v17 = g_zc;
    v18 = 93;
    goto LABEL_12;
  }
  sub_FF304((int)"pic rx", (int)v28, v21);
  if ( LOBYTE(v28[0]) != v21 )
    goto LABEL_18;
  if ( HIBYTE(v28[0]) != a2 )
    goto LABEL_18;
  LOWORD(v23) = LOBYTE(v28[1]);
  if ( LOBYTE(v28[1]) )
    goto LABEL_18;
  v24 = (char *)&v27 + v21 + 1;
  while ( 1 )
  {
    v23 = (unsigned __int16)(v23 + v21);
    if ( v15 == v24 )
      break;
    v25 = (unsigned __int8)*++v15;
    LOWORD(v21) = v25;
  }
  if ( !(v23 ? *((unsigned __int8 *)&v27 + v22 + 3) : *((unsigned __int8 *)&v27 + v22 + 3) | 1) )
  {
LABEL_18:
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, "%s recv data format err", "pic_1704_cmd");
    v16 = 3;
    V_UNLOCK();
    v27 = var1004;
    v17 = g_zc;
    v18 = 99;
    goto LABEL_12;
  }
  v16 = (int)a5;
  if ( a5 )
    v16 = 1;
  if ( !a6 )
    v16 = 0;
  if ( v16 )
  {
    v16 = 0;
    memcpy(a5, (char *)&v28[1] + 1, a6);
  }
LABEL_13:
  pthread_mutex_unlock(&i2c_mutex_all);
  return v16;
}
