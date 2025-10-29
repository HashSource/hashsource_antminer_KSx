int __fastcall hs_header_pow(int a1, void *a2)
{
  char *v2; // r2
  char *v3; // lr
  char *v4; // r12
  char v6; // r3
  char v7; // t1
  char v8; // t1
  int v9; // r12
  char *v10; // r2
  int v11; // r1
  char v12; // r3
  char v13; // t1
  char v14; // t1
  __int64 *v16; // [sp+4h] [bp-480h] BYREF
  int v17; // [sp+8h] [bp-47Ch] BYREF
  char v18; // [sp+Fh] [bp-475h] BYREF
  __int64 v19[3]; // [sp+10h] [bp-474h] BYREF
  char v20; // [sp+2Fh] [bp-455h] BYREF
  __int64 v21[4]; // [sp+30h] [bp-454h] BYREF
  __int64 v22[8]; // [sp+50h] [bp-434h] BYREF
  __int64 v23[16]; // [sp+90h] [bp-3F4h] BYREF
  _DWORD v24[60]; // [sp+110h] [bp-374h] BYREF
  _DWORD v25[60]; // [sp+200h] [bp-284h] BYREF
  _BYTE v26[404]; // [sp+2F0h] [bp-194h] BYREF

  v2 = (char *)(a1 + 36);
  v3 = (char *)&v16 + 3;
  v4 = (char *)(a1 + 68);
  do
  {
    v7 = *v2++;
    v6 = v7;
    v8 = *v4++;
    *++v3 = v6 ^ v8;
  }
  while ( v2 != (char *)(a1 + 44) );
  v9 = a1 + 35;
  v10 = &v18;
  v11 = a1 + 67;
  do
  {
    v13 = *(_BYTE *)++v9;
    v12 = v13;
    v14 = *(_BYTE *)++v11;
    *++v10 = v12 ^ v14;
  }
  while ( v10 != &v20 );
  v16 = v23;
  hs_header_share_write(a1, (int *)&v16);
  hs_blake2b_init(v24, 64);
  hs_blake2b_update((int)v24, v23, 0x80u);
  hs_blake2b_final((int)v24, v22, 0x40u);
  hs_sha3_256_init(v26);
  hs_sha3_update(v26, v23, 128);
  hs_sha3_update(v26, &v17, 8);
  hs_sha3_final(v26, v21);
  hs_blake2b_init(v25, 32);
  hs_blake2b_update((int)v25, v22, 0x40u);
  hs_blake2b_update((int)v25, v19, 0x20u);
  hs_blake2b_update((int)v25, v21, 0x20u);
  return hs_blake2b_final((int)v25, a2, 0x20u);
}
