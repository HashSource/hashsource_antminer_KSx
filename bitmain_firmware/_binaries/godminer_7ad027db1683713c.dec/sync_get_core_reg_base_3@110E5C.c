int __fastcall sync_get_core_reg_base_3(
        pthread_mutex_t *a1,
        int a2,
        int a3,
        int a4,
        int *a5,
        int a6,
        unsigned int a7,
        unsigned int a8)
{
  int v9; // r6
  char v13; // r1
  char v14; // r3
  __int16 v15; // r12
  char v16; // r0
  int v17; // r2
  int v18; // r2
  int v19; // r11
  int v21; // r3
  int v22; // r0
  __int16 v23; // r1
  char v24; // r2
  int v25; // r3
  int v26; // r0
  int v27; // [sp+24h] [bp-1030h]
  int v28; // [sp+2Ch] [bp-1028h]
  _BYTE v29[2]; // [sp+34h] [bp-1020h] BYREF
  int v30; // [sp+36h] [bp-101Eh] BYREF
  __int16 v31; // [sp+3Ah] [bp-101Ah]
  int v32[2]; // [sp+3Ch] [bp-1018h] BYREF
  unsigned __int8 v33; // [sp+44h] [bp-1010h] BYREF
  unsigned __int8 v34; // [sp+45h] [bp-100Fh]
  char v35; // [sp+46h] [bp-100Eh] BYREF
  unsigned __int8 v36; // [sp+47h] [bp-100Dh]
  unsigned __int8 v37; // [sp+48h] [bp-100Ch]
  unsigned __int8 v38; // [sp+49h] [bp-100Bh]
  unsigned __int8 v39; // [sp+4Ah] [bp-100Ah]
  unsigned __int8 v40; // [sp+4Bh] [bp-1009h]
  char v41; // [sp+4Ch] [bp-1008h]
  char v42[4080]; // [sp+50h] [bp-1004h] BYREF

  if ( !a1[9].__size[20] )
    return 4;
  v30 = 0;
  v13 = *(_BYTE *)(a2 + 8);
  v31 = 0;
  v14 = *(_BYTE *)(a2 + 12);
  v29[0] = 85;
  v29[1] = -86;
  v15 = *(_WORD *)(a2 + 10);
  v30 = (16 * (v13 & 1)) & 0x1A | 0x45;
  LOBYTE(v31) = v14;
  BYTE1(v30) = 6;
  HIBYTE(v30) = v15;
  v16 = BM_CRC5(&v30, 40);
  v17 = *(unsigned __int8 *)(a2 + 8);
  HIBYTE(v31) = HIBYTE(v31) & 0xE0 | v16 & 0x1F;
  if ( !v17 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v28 = a4;
  pthread_mutex_lock(a1 + 36);
  v9 = 0;
  queue_clear(a1[35].__lock);
  send_command_packet(a1, (int)v29, 8u);
  sub_25A4F8(a7, a8, 0x3E8u);
  v27 = 0;
  v32[1] = 1000000 * v18;
  v32[0] = sub_25A4F8(a7, a8, 0x3E8u);
  while ( v27 < a3 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(a1[35].__lock, (char *)&v33, 9u, v32) == 110 )
      {
        v9 = 3;
        goto LABEL_14;
      }
      V_LOCK();
      logfmt_raw(
        v42,
        0x1000u,
        0,
        "core reg: %02x %02x chip addr %02x reg addr %02x reg value %02x%02x%02x",
        v33,
        v34,
        v39,
        v40,
        v36,
        v37,
        v38);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/chip_reg_io_base.c",
        170,
        "sync_get_core_reg_base_3",
        24,
        544,
        20,
        v42);
      if ( v33 != 170 || v34 != 85 || (v41 & 0x40) == 0 )
      {
        v9 = 1;
        goto LABEL_14;
      }
      v19 = v41 & 0x1F;
      if ( v19 == BM_CRC5(&v35, 51) )
        break;
      v9 = 2;
    }
    v21 = v37;
    ++v27;
    v22 = v38;
    v23 = v40;
    *(_BYTE *)(v28 + 4) = v39;
    v24 = v35;
    v25 = (v21 << 16) | (v22 << 24);
    v26 = v36;
    *(_WORD *)(v28 + 6) = v23;
    *(_BYTE *)(v28 + 8) = v24;
    *(_DWORD *)v28 = v25 | v26;
    v28 += 12;
  }
LABEL_14:
  *a5 = v27;
  pthread_mutex_unlock(a1 + 36);
  return v9;
}
