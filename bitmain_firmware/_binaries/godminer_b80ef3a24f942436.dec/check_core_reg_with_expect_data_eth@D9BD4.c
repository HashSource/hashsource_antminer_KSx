int __fastcall check_core_reg_with_expect_data_eth(int a1, int a2, unsigned __int16 a3, __int16 a4, unsigned int a5)
{
  int v6; // r0
  char *v7; // r4
  int v8; // r7
  unsigned int v9; // r10
  char *v10; // r8
  int v11; // r0
  int v13; // [sp+44h] [bp-1038h]
  char *ptr; // [sp+48h] [bp-1034h]
  int v15; // [sp+4Ch] [bp-1030h]
  int v16; // [sp+50h] [bp-102Ch]
  int v18; // [sp+58h] [bp-1024h] BYREF
  _BYTE var1004[4104]; // [sp+78h] [bp-1004h] BYREF

  v16 = a3;
  v15 = 5;
  ptr = (char *)malloc(0x600u);
  while ( 1 )
  {
    v6 = sub_D85FC(a1, v16, a4, ptr);
    v13 = v6;
    if ( !v6 )
    {
LABEL_10:
      free(ptr);
      return 22;
    }
    v7 = ptr;
    v8 = 0;
    v9 = bswap32(a5);
    v10 = &ptr[12 * v6];
    do
    {
      if ( (v9 & ~*(_DWORD *)v7) != 0 )
      {
        V_LOCK(v6);
        V_INT((int)&v18, "chain", *(int *)(a1 + 248));
        v11 = logfmt_raw((int)var1004, 0x1000u);
        V_UNLOCK(v11);
        v6 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
               190,
               "check_core_reg_with_expect_data_eth",
               35,
               1614,
               100,
               var1004);
      }
      else
      {
        ++v8;
      }
      v7 += 12;
    }
    while ( v10 != v7 );
    if ( v8 == v13 )
      break;
    usleep(0x7A120u);
    if ( !--v15 )
      goto LABEL_10;
  }
  free(ptr);
  return 0;
}
