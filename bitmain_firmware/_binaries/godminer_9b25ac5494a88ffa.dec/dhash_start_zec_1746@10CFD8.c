int __fastcall dhash_start_zec_1746(int a1)
{
  int v2; // r0
  void (__fastcall *v3)(int, int *); // r2
  int v4; // r3
  int result; // r0
  int v6; // [sp+28h] [bp-1020h] BYREF
  int v7; // [sp+48h] [bp-1000h] BYREF
  _BYTE v8[12]; // [sp+4Ch] [bp-FFCh]

  V_LOCK(a1);
  V_INT((int)&v6, "chain");
  v2 = logfmt_raw((int)&v7, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_zec_1746/backend_zec_1746.c",
    192,
    "dhash_start_zec_1746",
    20,
    707,
    40,
    &v7);
  *(_QWORD *)v8 = 0;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 260);
  *(_QWORD *)&v8[4] = 2621441;
  v7 = (int)&elf_hash_chain[398];
  v3(a1, &v7);
  *(_DWORD *)v8 = 0;
  *(_QWORD *)&v8[4] = 5242881;
  v7 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 260))(a1, &v7);
  *(_DWORD *)v8 = 0;
  *(_QWORD *)&v8[4] = 5767169;
  v7 = 2;
  (*(void (__fastcall **)(int, int *))(a1 + 260))(a1, &v7);
  (*(void (__fastcall **)(int))(a1 + 148))(a1);
  v4 = *(unsigned __int8 *)(a1 + 452);
  result = 0;
  *(_BYTE *)(a1 + 249) = 1;
  if ( !v4 )
    *(_DWORD *)(a1 + 456) = (int)*(float *)(a1 + 956);
  return result;
}
