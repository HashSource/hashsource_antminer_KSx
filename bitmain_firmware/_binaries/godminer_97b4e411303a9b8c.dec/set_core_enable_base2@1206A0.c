int __fastcall set_core_enable_base2(int a1, int a2, __useconds_t a3)
{
  unsigned int v6; // r3
  int v7; // r4
  _BYTE *v8; // r2
  int v9; // r0
  _BYTE v11[4096]; // [sp+18h] [bp-1000h] BYREF

  puts("set_core_enable_base2");
  v6 = *(unsigned __int8 *)(a2 + 13);
  if ( !*(_BYTE *)(a2 + 13) )
    return 0;
  v7 = 0;
  v8 = v11;
  while ( 1 )
  {
    if ( (v7 & 0x1F) == 0 )
    {
      v8 = (_BYTE *)(*(unsigned __int16 *)(a2 + 10) + (v7 >> 5));
      *(_WORD *)(a2 + 10) = (_WORD)v8;
    }
    if ( v6 > 1 )
      *(_BYTE *)(a2 + 12) = v7;
    if ( (*(int (__fastcall **)(int, int, _BYTE *))(a1 + 272))(a1, a2, v8) < 0 )
      break;
    usleep(a3);
    ++v7;
    (*(void (__fastcall **)(int, int))(a1 + 296))(a1, a2);
    v6 = *(unsigned __int8 *)(a2 + 13);
    if ( (int)v6 <= v7 )
      return 0;
  }
  V_LOCK(a3);
  v9 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_reg_io_base.c",
    175,
    "set_core_enable_base2",
    21,
    1303,
    100,
    v11);
  return 3;
}
