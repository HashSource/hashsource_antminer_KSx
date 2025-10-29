int __fastcall blake2s_init_key(int *a1, int a2, const void *a3, size_t a4)
{
  __int64 v4; // d8
  double *v9; // r3
  int v11; // [sp+0h] [bp-80h] BYREF
  __int16 v12; // [sp+4h] [bp-7Ch]
  __int16 v13; // [sp+6h] [bp-7Ah]
  __int16 v14; // [sp+8h] [bp-78h]
  __int16 v15; // [sp+Ah] [bp-76h]
  __int16 v16; // [sp+Ch] [bp-74h]
  __int16 v17; // [sp+Eh] [bp-72h]
  double v18; // [sp+10h] [bp-70h]
  double v19; // [sp+18h] [bp-68h]
  double dest[8]; // [sp+20h] [bp-60h] BYREF
  char v21; // [sp+60h] [bp-20h] BYREF
  __int64 v22; // [sp+64h] [bp-1Ch]

  if ( (unsigned int)(a2 - 1) > 0x1F )
    return -1;
  v22 = v4;
  if ( a4 - 1 > 0x1F || a3 == 0 )
    return -1;
  LOBYTE(v11) = a2;
  BYTE1(v11) = a4;
  v12 = 0;
  v18 = 0.0;
  v13 = 0;
  v19 = 0.0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  HIWORD(v11) = 257;
  if ( blake2s_init_param(a1, &v11) < 0 )
    return -1;
  memset(dest, 0, sizeof(dest));
  memcpy(dest, a3, a4);
  blake2s_update(a1, (char *)dest, 64);
  v9 = dest;
  do
  {
    *(_BYTE *)v9 = 0;
    v9 = (double *)((char *)v9 + 1);
  }
  while ( v9 != (double *)&v21 );
  return 0;
}
