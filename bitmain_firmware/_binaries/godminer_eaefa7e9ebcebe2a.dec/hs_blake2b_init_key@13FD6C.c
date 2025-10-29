int __fastcall hs_blake2b_init_key(_DWORD *a1, int a2, const void *a3, size_t a4)
{
  unsigned __int8 v9[4]; // [sp+0h] [bp-D8h] BYREF
  int v10; // [sp+4h] [bp-D4h]
  int v11; // [sp+8h] [bp-D0h]
  int v12; // [sp+Ch] [bp-CCh]
  char v13; // [sp+10h] [bp-C8h]
  char v14; // [sp+11h] [bp-C7h]
  _BYTE v15[14]; // [sp+12h] [bp-C6h] BYREF
  __int64 v16; // [sp+20h] [bp-B8h]
  __int64 v17; // [sp+28h] [bp-B0h]
  __int64 v18; // [sp+30h] [bp-A8h]
  __int64 v19; // [sp+38h] [bp-A0h]
  __int64 s[19]; // [sp+40h] [bp-98h] BYREF

  if ( (unsigned int)(a2 - 1) > 0x3F )
    return -1;
  if ( a4 - 1 > 0x3F || a3 == 0 )
    return -1;
  v9[0] = a2;
  memset(v15, 0, sizeof(v15));
  v16 = 0;
  v17 = 0;
  v9[1] = a4;
  v10 = 0;
  v18 = 0;
  v19 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v9[2] = 1;
  v9[3] = 1;
  if ( hs_blake2b_init_param(a1, v9) < 0 )
    return -1;
  memset(s, 0, 0x80u);
  memcpy(s, a3, a4);
  sub_13FB3C((int)a1, s, 0x80u);
  off_2E7C28(s, 0, 0x80u);
  return 0;
}
