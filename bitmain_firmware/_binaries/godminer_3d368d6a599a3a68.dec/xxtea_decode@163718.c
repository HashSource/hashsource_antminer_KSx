int __fastcall xxtea_decode(unsigned int *a1, unsigned int a2, int a3)
{
  int v6; // r0
  unsigned int v7; // r2
  unsigned int v8; // r3
  int v9; // r11
  unsigned int v10; // r5
  unsigned int v11; // r9
  unsigned int *v12; // r6
  unsigned int v13; // t1
  int v14; // lr
  int v15; // lr
  int result; // r0
  char v17[4100]; // [sp+18h] [bp-1004h] BYREF

  if ( a2 <= 1 )
  {
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, " xxtea decode input data length <= 1");
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/common/general/xxtea.c",
             171,
             "xxtea_decode",
             12,
             53,
             100,
             v17);
  }
  else
  {
    v6 = sub_26D720(52, a2);
    v7 = -1640531527 * (v6 + 6);
    v8 = *a1;
    v9 = v7 + 1640531527 * v6 + 1253254570;
    do
    {
      v10 = a2 - 1;
      v11 = v7 >> 2;
      v12 = &a1[a2 - 1];
      do
      {
        v13 = *--v12;
        v14 = ((unsigned __int8)v11 ^ (unsigned __int8)v10--) & 3;
        v8 = v12[1]
           - (((v13 ^ *(_DWORD *)(a3 + 4 * v14)) + (v7 ^ v8)) ^ (((4 * v8) ^ (v13 >> 5)) + ((16 * v13) ^ (v8 >> 3))));
        v12[1] = v8;
      }
      while ( v10 );
      v15 = v7 ^ v8;
      v7 += 1640531527;
      result = *a1;
      v8 = *a1
         - (((a1[a2 - 1] ^ *(_DWORD *)(a3 + 4 * (v11 & 3))) + v15)
          ^ (((4 * v8) ^ (a1[a2 - 1] >> 5)) + ((16 * a1[a2 - 1]) ^ (v8 >> 3))));
      *a1 = v8;
    }
    while ( v7 != v9 );
  }
  return result;
}
