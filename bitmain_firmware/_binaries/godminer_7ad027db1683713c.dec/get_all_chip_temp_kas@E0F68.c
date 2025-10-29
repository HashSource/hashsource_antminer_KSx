int __fastcall get_all_chip_temp_kas(_DWORD *a1)
{
  void (__fastcall *v2)(_DWORD *, _DWORD *); // r3
  int v3; // r11
  char *v4; // r0
  void (__fastcall *v5)(_DWORD *, _QWORD *, int, char *, int *); // r10
  char *v6; // r4
  char *v7; // r12
  char *v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // r1
  int v11; // r2
  __int16 v12; // r1
  int v13; // r0
  bool v14; // zf
  char *v15; // r1
  double *v16; // r2
  unsigned __int8 *v17; // r6
  double *v18; // r7
  unsigned __int8 *v19; // r11
  unsigned __int8 *v20; // r4
  double *v21; // r8
  int v22; // r5
  double v23; // d16
  int v24; // t1
  size_t v25; // r1
  char *v26; // r0
  FILE *v27; // r5
  double v28; // r2
  int v31; // [sp+4h] [bp-B70h]
  int v32; // [sp+10h] [bp-B64h] BYREF
  _DWORD v33[2]; // [sp+14h] [bp-B60h] BYREF
  __int64 v34; // [sp+1Ch] [bp-B58h] BYREF
  _QWORD v35[2]; // [sp+24h] [bp-B50h] BYREF
  _BYTE s[92]; // [sp+34h] [bp-B40h] BYREF
  _DWORD v37[697]; // [sp+90h] [bp-AE4h] BYREF

  memset(s, 0, sizeof(s));
  v33[1] = 0;
  v33[0] = -2147424757;
  v34 = 0;
  v2 = (void (__fastcall *)(_DWORD *, _DWORD *))a1[62];
  strcpy((char *)&v34 + 2, "l");
  LOBYTE(v34) = 1;
  v2(a1, v33);
  v3 = a1[78];
  v4 = (char *)malloc(12 * v3);
  v5 = (void (__fastcall *)(_DWORD *, _QWORD *, int, char *, int *))a1[67];
  v35[0] = 0;
  v35[1] = 7340033;
  v6 = v4;
  v5(a1, v35, v3, v4, &v32);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  ((void (__fastcall *)(_DWORD *, _QWORD *, int, char *, int *, int, int, _DWORD))a1[67])(
    a1,
    v35,
    v3,
    v6,
    &v32,
    v31,
    2000,
    0);
  if ( v32 > 0 )
  {
    v7 = &v6[12 * v32];
    v8 = v6;
    do
    {
      v9 = (unsigned __int8)v8[4];
      v10 = *(_DWORD *)v8;
      v8 += 12;
      v11 = v9 >> 1;
      v12 = bswap32(v10);
      v13 = v12 & 0x1FFF;
      if ( v3 <= v11 )
        v11 = 0;
      v14 = (v12 & 0x4000) == 0;
      v15 = (char *)&v37[696] + v11;
      v16 = (double *)&v37[2 * v11];
      if ( !v14 )
      {
        *(v15 - 2876) = 1;
        *v16 = ((double)v13 - 369.43) / 1.3506;
      }
    }
    while ( v7 != v8 );
  }
  if ( v3 <= 0 )
  {
    v27 = (FILE *)fopen64("/tmp/temp.txt", "a+");
  }
  else
  {
    v17 = s;
    v18 = (double *)v37;
    v19 = &s[v3];
    v20 = s;
    v21 = (double *)v37;
    v22 = 0;
    do
    {
      while ( 1 )
      {
        v24 = *v20++;
        v25 = 2048 - v22;
        v26 = (char *)&v37[184] + v22;
        if ( !v24 )
          break;
        v23 = *v21++;
        v22 += snprintf(v26, v25, "%5.2f", v23);
        if ( v20 == v19 )
          goto LABEL_13;
      }
      v22 += 5;
      snprintf(v26, v25, "  XXX");
      ++v21;
    }
    while ( v20 != v19 );
LABEL_13:
    v27 = (FILE *)fopen64("/tmp/temp.txt", "a+");
    do
    {
      while ( *v17++ )
      {
        v28 = *v18++;
        fprintf(v27, "%5.2f ", v28);
        if ( v20 == v17 )
          goto LABEL_17;
      }
      fwrite("XXX  ", 1u, 5u, v27);
      ++v18;
    }
    while ( v20 != v17 );
  }
LABEL_17:
  fputc(10, v27);
  fflush(v27);
  return 0;
}
