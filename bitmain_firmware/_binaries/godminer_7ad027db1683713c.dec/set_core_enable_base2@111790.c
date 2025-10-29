int __fastcall set_core_enable_base2(int a1, int a2, __useconds_t a3)
{
  unsigned int v6; // r3
  int v7; // r4
  char *v8; // r2
  char v10[4096]; // [sp+18h] [bp-1000h] BYREF

  puts("set_core_enable_base2");
  v6 = *(unsigned __int8 *)(a2 + 13);
  if ( !*(_BYTE *)(a2 + 13) )
    return 0;
  v7 = 0;
  v8 = v10;
  while ( 1 )
  {
    if ( (v7 & 0x1F) == 0 )
    {
      v8 = (char *)(*(unsigned __int16 *)(a2 + 10) + (v7 >> 5));
      *(_WORD *)(a2 + 10) = (_WORD)v8;
    }
    if ( v6 > 1 )
      *(_BYTE *)(a2 + 12) = v7;
    if ( (*(int (__fastcall **)(int, int, char *))(a1 + 256))(a1, a2, v8) < 0 )
      break;
    usleep(a3);
    ++v7;
    (*(void (__fastcall **)(int, int))(a1 + 276))(a1, a2);
    v6 = *(unsigned __int8 *)(a2 + 13);
    if ( (int)v6 <= v7 )
      return 0;
  }
  V_LOCK();
  logfmt_raw(
    v10,
    0x1000u,
    0,
    "%s failed, reg:%02x, core_id:%d",
    "set_core_enable_base2",
    *(unsigned __int16 *)(a2 + 10),
    v7);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_reg_io_base.c",
    170,
    "set_core_enable_base2",
    21,
    1061,
    100,
    v10);
  return 3;
}
