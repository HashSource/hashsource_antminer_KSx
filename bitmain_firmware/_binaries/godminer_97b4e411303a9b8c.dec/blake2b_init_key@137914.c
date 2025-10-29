int __fastcall blake2b_init_key(char *a1, int a2, const void *a3, size_t a4)
{
  __int64 v9; // [sp+0h] [bp-D8h] BYREF
  __int16 v10; // [sp+8h] [bp-D0h]
  __int16 v11; // [sp+Ah] [bp-CEh]
  __int16 v12; // [sp+Ch] [bp-CCh]
  __int16 v13; // [sp+Eh] [bp-CAh]
  __int16 v14; // [sp+10h] [bp-C8h]
  _BYTE v15[14]; // [sp+12h] [bp-C6h] BYREF
  __int64 v16; // [sp+20h] [bp-B8h]
  __int64 v17; // [sp+28h] [bp-B0h]
  __int64 v18; // [sp+30h] [bp-A8h]
  __int64 v19; // [sp+38h] [bp-A0h]
  char s[152]; // [sp+40h] [bp-98h] BYREF

  if ( (unsigned int)(a2 - 1) > 0x3F )
    return -1;
  if ( a4 - 1 > 0x3F || a3 == 0 )
    return -1;
  LOBYTE(v9) = a2;
  memset(v15, 0, sizeof(v15));
  v16 = 0;
  v17 = 0;
  BYTE1(v9) = a4;
  v18 = 0;
  v19 = 0;
  HIWORD(v9) = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  *(_DWORD *)((char *)&v9 + 2) = 257;
  if ( blake2b_init_param(a1, &v9) < 0 )
    return -1;
  memset(s, 0, 0x80u);
  memcpy(s, a3, a4);
  equihash_blake2b_update((int)a1, s, 0x80u);
  off_2E8C24(s, 0, 0x80u);
  return 0;
}
