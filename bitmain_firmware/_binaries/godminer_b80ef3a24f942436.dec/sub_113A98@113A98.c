int __fastcall sub_113A98(int a1, int a2, void *src, size_t a4, void *a5, size_t a6)
{
  char *v7; // r0
  size_t v8; // r9
  int v11; // r8
  _DWORD *v12; // r1
  __int16 v13; // r12
  __int16 v14; // t1
  char *v15; // r9
  int v16; // r0
  int v17; // r0
  int v18; // r5
  int v19; // r0
  int v20; // r1
  int v22; // r0
  size_t v23; // r5
  size_t v24; // r6
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r3
  char *v31; // r2
  __int16 v32; // t1
  _BYTE *v34; // [sp+Ch] [bp-1018h] BYREF
  _WORD v35[8]; // [sp+10h] [bp-1014h] BYREF
  _BYTE var1004[4128]; // [sp+20h] [bp-1004h] BYREF

  v7 = (char *)&g_bitmain_pic_state[2 * a1];
  if ( a4 )
    v8 = a4;
  else
    v8 = 1;
  if ( v8 >= 8 )
    v8 = 8;
  if ( !*((_DWORD *)v7 + 1) )
  {
    V_LOCK(v7);
    v27 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v27);
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
  LOBYTE(v35[1]) = v8 + 4;
  v11 = (unsigned __int8)(v8 + 6);
  HIBYTE(v35[1]) = a2;
  v35[0] = -21931;
  memcpy(&v35[2], src, v8);
  v12 = (_DWORD *)((char *)v35 + 1);
  v13 = 0;
  do
  {
    v14 = *((unsigned __int8 *)v12 + 1);
    v12 = (_DWORD *)((char *)v12 + 1);
    v13 += v14;
  }
  while ( (_BYTE **)((char *)&v34 + v11 + 1) != v12 );
  v15 = (char *)v35;
  *((_BYTE *)&v35[-1] + v11) = HIBYTE(v13);
  *((_BYTE *)&v34 + v11 + 3) = v13;
  sub_1139BC((int)"pic tx", (int)v35, v11);
  pthread_mutex_lock(&i2c_mutex_all);
  v16 = iic_write(g_bitmain_pic_state[2 * a1], (int)v35, v11);
  if ( v16 != v11 )
  {
    V_LOCK(v16);
    v17 = logfmt_raw((int)var1004, 0x1000u);
    v18 = 1;
    V_UNLOCK(v17);
    v34 = var1004;
    v19 = g_zc;
    v20 = 83;
LABEL_12:
    zlog(
      v19,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      180,
      "pic_1704_cmd",
      12,
      v20,
      100,
      v34);
    goto LABEL_13;
  }
  usleep(0x2710u);
  v22 = g_bitmain_pic_state[2 * a1];
  memset(v35, 0, sizeof(v35));
  v23 = (unsigned __int8)(a6 + 5);
  v24 = v23;
  v25 = iic_read(v22, v35, v23);
  if ( v25 != v23 )
  {
    V_LOCK(v25);
    v26 = logfmt_raw((int)var1004, 0x1000u);
    v18 = 2;
    V_UNLOCK(v26);
    v34 = var1004;
    v19 = g_zc;
    v20 = 93;
    goto LABEL_12;
  }
  v28 = sub_1139BC((int)"pic rx", (int)v35, v23);
  if ( LOBYTE(v35[0]) != v23 )
    goto LABEL_18;
  if ( HIBYTE(v35[0]) != a2 )
    goto LABEL_18;
  LOWORD(v30) = LOBYTE(v35[1]);
  if ( LOBYTE(v35[1]) )
    goto LABEL_18;
  v31 = (char *)&v34 + v23 + 1;
  while ( 1 )
  {
    v30 = (unsigned __int16)(v30 + v23);
    if ( v15 == v31 )
      break;
    v32 = (unsigned __int8)*++v15;
    LOWORD(v23) = v32;
  }
  if ( !(v30 ? *((unsigned __int8 *)&v34 + v24 + 3) : *((unsigned __int8 *)&v34 + v24 + 3) | 1) )
  {
LABEL_18:
    V_LOCK(v28);
    v29 = logfmt_raw((int)var1004, 0x1000u);
    v18 = 3;
    V_UNLOCK(v29);
    v34 = var1004;
    v19 = g_zc;
    v20 = 99;
    goto LABEL_12;
  }
  v18 = (int)a5;
  if ( a5 )
    v18 = 1;
  if ( !a6 )
    v18 = 0;
  if ( v18 )
  {
    v18 = 0;
    memcpy(a5, (char *)&v35[1] + 1, a6);
  }
LABEL_13:
  pthread_mutex_unlock(&i2c_mutex_all);
  return v18;
}
