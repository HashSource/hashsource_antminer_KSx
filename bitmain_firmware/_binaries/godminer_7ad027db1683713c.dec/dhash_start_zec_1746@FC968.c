int __fastcall dhash_start_zec_1746(int a1)
{
  void (__fastcall *v2)(int, int *); // r2
  int v3; // r3
  int result; // r0
  _DWORD v5[7]; // [sp+28h] [bp-1020h] BYREF
  int v6; // [sp+44h] [bp-1004h]
  int v7; // [sp+48h] [bp-1000h] BYREF
  _BYTE v8[12]; // [sp+4Ch] [bp-FFCh]

  V_LOCK();
  V_INT((int)v5, "chain", *(int *)(a1 + 232));
  logfmt_raw((char *)&v7, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "dhash_start_zec_1746");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    187,
    "dhash_start_zec_1746",
    20,
    707,
    40,
    &v7);
  *(_QWORD *)v8 = 0;
  v2 = *(void (__fastcall **)(int, int *))(a1 + 248);
  *(_QWORD *)&v8[4] = 2621441;
  v7 = (int)&elf_hash_chain[398];
  v2(a1, &v7);
  *(_DWORD *)v8 = 0;
  *(_QWORD *)&v8[4] = 5242881;
  v7 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 248))(a1, &v7);
  *(_DWORD *)v8 = 0;
  *(_QWORD *)&v8[4] = 5767169;
  v7 = 2;
  (*(void (__fastcall **)(int, int *))(a1 + 248))(a1, &v7);
  (*(void (__fastcall **)(int))(a1 + 148))(a1);
  v3 = *(unsigned __int8 *)(a1 + 436);
  result = 0;
  *(_BYTE *)(a1 + 237) = 1;
  if ( !v3 )
    *(_DWORD *)(a1 + 440) = (int)*(float *)(a1 + 940);
  return result;
}
