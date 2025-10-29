int __fastcall work_2_packet_zec_1746(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r5
  int v7; // r0
  const void *v8; // r7
  int v9; // r12
  _DWORD *v10; // r2
  int v11; // r10
  int v12; // lr
  int v13; // r12
  int v14; // r12
  int v15; // r11
  int v16; // r10
  char v17; // r12
  __int16 v18; // r0
  int v19; // r3
  int v21; // r0
  _BYTE v23[4100]; // [sp+18h] [bp-1004h] BYREF

  v5 = *(_DWORD *)(a1 + 816);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  if ( *(_DWORD *)(a1 + 484) == 1 )
    a3[2] = 48;
  v7 = *(unsigned __int8 *)(v5 + 27648);
  v8 = (const void *)(a2 + 40);
  v9 = *(_DWORD *)(a2 + 180);
  *(_QWORD *)(v5 + 8 * v7) = *(_QWORD *)a2;
  *(_DWORD *)(v5 + 4 * (v7 + 5760)) = v9;
  v10 = (_DWORD *)(v5 + 32 * (v7 + 736));
  v11 = *(_DWORD *)(a2 + 188);
  v12 = *(_DWORD *)(a2 + 192);
  v13 = *(_DWORD *)(a2 + 196);
  *v10 = *(_DWORD *)(a2 + 184);
  v10[1] = v11;
  v10[2] = v12;
  v10[3] = v13;
  v14 = *(_DWORD *)(a2 + 212);
  v15 = *(_DWORD *)(a2 + 200);
  v16 = *(_DWORD *)(a2 + 204);
  v10[6] = *(_DWORD *)(a2 + 208);
  v10[7] = v14;
  v10[4] = v15;
  v10[5] = v16;
  strcpy((char *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 27648) + 32)), (const char *)(a2 + 8));
  memcpy((void *)(v5 + 140 * *(unsigned __int8 *)(v5 + 27648) + 5120), v8, 0x8Cu);
  v17 = *(_BYTE *)(v5 + 27648);
  a3[3] = v17;
  *(_BYTE *)(v5 + 27648) = (v17 + 1) & 0x7F;
  if ( !memcmp(&last_header_zec, v8, 0x8Cu) )
  {
    V_LOCK(0);
    v21 = logfmt_raw((int)v23, 0x1000u);
    V_UNLOCK(v21);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_zec_1746/backend_zec_1746.c",
      192,
      "work_2_packet_zec_1746",
      22,
      260,
      80,
      v23);
  }
  else
  {
    memcpy(&last_header_zec, v8, 0x8Cu);
  }
  memcpy(a3 + 4, v8, 0x8Cu);
  v18 = BM_CRC16(a3 + 2, 142);
  a3[145] = v18;
  a3[144] = HIBYTE(v18);
  v19 = *(unsigned __int8 *)(a1 + 249);
  *a4 = 146;
  if ( !v19 || !*(_BYTE *)(a1 + 250) )
    return 0;
  memset(*(void **)(a1 + 448), 0, 48 * *(_DWORD *)(a1 + 328));
  sub_10CA4C(a1, 18);
  usleep(0x64u);
  *(_BYTE *)(a1 + 249) = 0;
  return 0;
}
