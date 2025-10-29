int __fastcall check_core_reg_with_expect_data_eth(int a1, int a2, unsigned __int16 a3, __int16 a4, unsigned int a5)
{
  char *v6; // r4
  int v7; // r7
  unsigned int v8; // r10
  int v10; // [sp+44h] [bp-1038h]
  char *ptr; // [sp+48h] [bp-1034h]
  int v12; // [sp+4Ch] [bp-1030h]
  int v13; // [sp+50h] [bp-102Ch]
  _DWORD v15[7]; // [sp+58h] [bp-1024h] BYREF
  int v16; // [sp+74h] [bp-1008h]
  char var1004[4104]; // [sp+78h] [bp-1004h] BYREF

  v13 = a3;
  v12 = 5;
  ptr = (char *)malloc(0x600u);
  while ( 1 )
  {
    v10 = sub_CF470(a1, v13, a4, ptr);
    if ( !v10 )
    {
LABEL_10:
      free(ptr);
      return 22;
    }
    v6 = ptr;
    v7 = 0;
    v8 = bswap32(a5);
    do
    {
      if ( (v8 & ~*(_DWORD *)v6) != 0 )
      {
        V_LOCK();
        V_INT((int)v15, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          var1004,
          0x1000u,
          0,
          v16,
          v15[0],
          v15[1],
          v15[2],
          v15[3],
          v15[4],
          v15[5],
          v15[6],
          v16,
          "[REG READ ERR] chip %02x core %02x reg %04x rdata %08x",
          (unsigned __int8)v6[4],
          (unsigned __int8)v6[8],
          (unsigned __int16)__rev16(*((unsigned __int16 *)v6 + 3)),
          bswap32(*(_DWORD *)v6));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
          190,
          "check_core_reg_with_expect_data_eth",
          35,
          760,
          100,
          var1004);
      }
      else
      {
        ++v7;
      }
      v6 += 12;
    }
    while ( &ptr[12 * v10] != v6 );
    if ( v7 == v10 )
      break;
    usleep(0x7A120u);
    if ( !--v12 )
      goto LABEL_10;
  }
  free(ptr);
  return 0;
}
