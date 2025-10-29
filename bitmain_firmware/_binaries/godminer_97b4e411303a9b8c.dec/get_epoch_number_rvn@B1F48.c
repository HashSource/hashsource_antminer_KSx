int __fastcall get_epoch_number_rvn(const void *a1)
{
  int v2; // r4
  __int64 v4; // [sp+0h] [bp-44h] BYREF
  __int64 v5; // [sp+8h] [bp-3Ch]
  double v6; // [sp+10h] [bp-34h]
  double v7; // [sp+18h] [bp-2Ch]
  _QWORD v8[4]; // [sp+20h] [bp-24h] BYREF

  v2 = 1;
  v4 = 0;
  v5 = 0;
  v6 = 0.0;
  v7 = 0.0;
  while ( 1 )
  {
    eth_sha3_256(v8, 32, &v4);
    v4 = v8[0];
    v5 = v8[1];
    v6 = *(double *)&v8[2];
    v7 = *(double *)&v8[3];
    if ( !memcmp(&v4, a1, 0x20u) )
      break;
    if ( ++v2 == 2048 )
      return 0;
  }
  if ( v2 > 525 )
    v2 >>= 1;
  return v2;
}
