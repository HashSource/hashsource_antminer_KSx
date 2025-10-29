int __fastcall hs_blake2b_init_key(_DWORD *a1, int a2, const void *a3, size_t a4)
{
  unsigned int v4; // r5
  unsigned int v5; // r6
  int v6; // r7
  unsigned __int8 v12[4]; // [sp+0h] [bp-D8h] BYREF
  int v13; // [sp+4h] [bp-D4h]
  int v14; // [sp+8h] [bp-D0h]
  int v15; // [sp+Ch] [bp-CCh]
  char v16; // [sp+10h] [bp-C8h]
  char v17; // [sp+11h] [bp-C7h]
  _BYTE v18[14]; // [sp+12h] [bp-C6h] BYREF
  __int64 v19; // [sp+20h] [bp-B8h]
  __int64 v20; // [sp+28h] [bp-B0h]
  __int64 v21; // [sp+30h] [bp-A8h]
  __int64 v22; // [sp+38h] [bp-A0h]
  __int64 s[19]; // [sp+40h] [bp-98h] BYREF

  if ( (unsigned int)(a2 - 1) > 0x3F )
    return -1;
  s[17] = __PAIR64__(v5, v4);
  LODWORD(s[18]) = v6;
  if ( a4 - 1 > 0x3F || a3 == 0 )
    return -1;
  v12[0] = a2;
  memset(v18, 0, sizeof(v18));
  v19 = 0;
  v20 = 0;
  v12[1] = a4;
  v13 = 0;
  v21 = 0;
  v22 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v12[2] = 1;
  v12[3] = 1;
  if ( hs_blake2b_init_param(a1, v12) < 0 )
    return -1;
  memset(s, 0, 0x80u);
  memcpy(s, a3, a4);
  sub_12E25C((int)a1, s, 0x80u);
  off_2D2044(s, 0, 0x80u);
  return 0;
}
