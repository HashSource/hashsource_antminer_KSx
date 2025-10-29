int __fastcall sub_122138(int a1, int a2, int a3, _DWORD *a4, unsigned int a5)
{
  int v7; // r10
  int v8; // r0
  unsigned int v9; // r0
  int v10; // r0
  int *v12; // r7
  int v13; // r0
  int v14; // r0
  int v15; // [sp+14h] [bp-10B0h]
  pthread_mutex_t *mutex; // [sp+1Ch] [bp-10A8h]
  int v19; // [sp+24h] [bp-10A0h]
  int v20[2]; // [sp+2Ch] [bp-1098h] BYREF
  char v21[2]; // [sp+34h] [bp-1090h] BYREF
  unsigned __int8 v22[2]; // [sp+36h] [bp-108Eh] BYREF
  int v23; // [sp+38h] [bp-108Ch]
  _BYTE v24[128]; // [sp+3Ch] [bp-1088h] BYREF
  unsigned __int16 v25; // [sp+BCh] [bp-1008h]
  _BYTE v26[4096]; // [sp+C0h] [bp-1004h] BYREF

  mutex = (pthread_mutex_t *)(a1 + 900);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 900));
  queue_clear(*(_DWORD *)(a1 + 868));
  v7 = 0;
  v19 = a3;
  v15 = 0;
  v20[0] = a5 / 0x3E8;
  v20[1] = 1000000 * (a5 % 0x3E8);
  while ( a2 > v15 )
  {
    while ( 1 )
    {
      v10 = queue_dequeue_for(*(_DWORD *)(a1 + 868), v21, 0x8Au, v20);
      if ( v10 == 110 )
      {
        v7 = 3;
        goto LABEL_10;
      }
      V_LOCK(v10);
      v8 = logfmt_raw((int)v26, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/chip_reg_io_base.c",
        170,
        "sync_get_dag_base_2282",
        22,
        360,
        20,
        v26);
      if ( (unsigned __int8)v21[0] != 170 || v21[1] != 85 )
      {
        v7 = 1;
        goto LABEL_10;
      }
      v9 = BM_CRC16(v22, 134);
      if ( v25 == (unsigned __int16)__rev16(v9) )
        break;
      v7 = 2;
    }
    v12 = (int *)v19;
    *(_BYTE *)(v19 + 4) = v22[1];
    ++v15;
    v19 += 140;
    v13 = reverse_byte_order_32(v23);
    *v12 = v13;
    V_LOCK(v13);
    reverse_byte_order_32(v23);
    v14 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/chip_reg_io_base.c",
      170,
      "sync_get_dag_base_2282",
      22,
      374,
      40,
      v26);
    memcpy((char *)v12 + 10, v24, 0x80u);
  }
LABEL_10:
  *a4 = v15;
  pthread_mutex_unlock(mutex);
  return v7;
}
