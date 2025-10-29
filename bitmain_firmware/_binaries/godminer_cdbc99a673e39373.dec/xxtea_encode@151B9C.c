int __fastcall xxtea_encode(unsigned int *a1, unsigned int a2, int a3)
{
  unsigned int *v5; // r9
  unsigned int v6; // r4
  unsigned int v7; // r6
  unsigned int v8; // r11
  int result; // r0
  unsigned int *v10; // lr
  int v11; // r12
  unsigned int v12; // r5
  int v13; // r3
  char v14[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( a2 <= 1 )
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, " xxtea encode input data length <= 1");
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/common/general/xxtea.c",
             166,
             "xxtea_encode",
             12,
             24,
             100,
             v14);
  }
  else
  {
    v5 = &a1[a2 - 1];
    v6 = *v5;
    v7 = a2 - 1;
    v8 = 0;
    result = -1640531527 * sub_25BD18(52, a2) - 1253254570;
    do
    {
      v10 = a1;
      v11 = 0;
      v8 -= 1640531527;
      v12 = v8 >> 2;
      do
      {
        v13 = ((unsigned __int8)v12 ^ (unsigned __int8)v11++) & 3;
        v6 = ((((4 * v10[1]) ^ (v6 >> 5)) + ((16 * v6) ^ (v10[1] >> 3)))
            ^ ((*(_DWORD *)(a3 + 4 * v13) ^ v6) + (v8 ^ v10[1])))
           + *v10;
        *v10++ = v6;
      }
      while ( v11 != v7 );
      v6 = (((*(_DWORD *)(a3 + 4 * (((unsigned __int8)v12 ^ (unsigned __int8)v7) & 3)) ^ v6) + (v8 ^ *a1))
          ^ (((4 * *a1) ^ (v6 >> 5)) + ((16 * v6) ^ (*a1 >> 3))))
         + *v5;
      *v5 = v6;
    }
    while ( v8 != result );
  }
  return result;
}
