int __fastcall sub_259F10(unsigned int a1, int a2, int a3, _DWORD *a4)
{
  unsigned int v5; // lr
  int v6; // r3
  unsigned int v7; // r7
  __int64 v8; // kr00_8
  unsigned int v9; // r9
  unsigned int v10; // r6
  unsigned int v11; // r5
  bool v12; // cc
  unsigned int v13; // r5
  unsigned int v14; // r0
  int v15; // r3
  unsigned int v16; // r5
  unsigned int v17; // r6
  int v18; // r5
  unsigned int v19; // r2
  _DWORD *v20; // lr
  int v21; // r5
  _WORD *v22; // r12
  unsigned int v23; // r7
  unsigned int v24; // r0
  unsigned int v25; // r4
  char v26; // r6
  bool v27; // zf
  bool v28; // zf
  char v29; // r0
  int v30; // r0
  int v31; // r1
  const char *v32; // r0
  int v34; // [sp+0h] [bp-64h]
  _BYTE v35[40]; // [sp+5h] [bp-5Fh] BYREF
  char v36; // [sp+2Dh] [bp-37h] BYREF
  unsigned __int16 v37; // [sp+2Eh] [bp-36h]
  __int16 v38; // [sp+30h] [bp-34h] BYREF
  _BYTE *v39; // [sp+34h] [bp-30h]
  int v40; // [sp+38h] [bp-2Ch]
  __int16 v41; // [sp+3Ch] [bp-28h]
  unsigned int v42; // [sp+40h] [bp-24h]
  __int16 v43; // [sp+48h] [bp-1Ch]
  char *v44; // [sp+4Ch] [bp-18h]
  int v45; // [sp+50h] [bp-14h]
  const char *v46[4]; // [sp+54h] [bp-10h] BYREF

  v5 = 0;
  if ( a1 < 0xA || a1 != 10 * (a1 / 0xA) )
  {
    v6 = 0;
    v7 = a1;
    if ( a4[4] == 1 )
      goto LABEL_9;
LABEL_26:
    v17 = v7;
    goto LABEL_27;
  }
  v6 = 0;
  do
  {
    ++v6;
    v7 = a1 / 0xA;
    v8 = 3435973837LL * (a1 / 0xA);
    if ( a1 < 0x64 )
      break;
    a1 /= 0xAu;
  }
  while ( v7 == 10 * (HIDWORD(v8) >> 3) );
  if ( a4[4] != 1 )
    goto LABEL_26;
LABEL_9:
  v9 = a4[5];
  v10 = 0;
  if ( v7 >= 0xA )
  {
    v10 = 0;
    v11 = v7;
    do
    {
      ++v10;
      v12 = v11 > 0x63;
      v11 /= 0xAu;
    }
    while ( v12 );
  }
  v13 = v10 - v9;
  if ( v10 < v9 )
    v13 = 0;
  v5 = v9 - v10;
  if ( v9 < v10 )
    v5 = 0;
  if ( v13 >= 2 )
  {
    v14 = a4[5];
    if ( v10 < v9 )
      v14 = v10;
    v15 = v13 + v6;
    v16 = ~v14 + v10;
    do
    {
      --v16;
      v7 /= 0xAu;
    }
    while ( v16 );
    v6 = v15 - 1;
  }
  if ( v10 <= v9 )
    goto LABEL_26;
  ++v6;
  v17 = v7 / 0xA;
  if ( v7 % 0xA > 4 )
    v17 = v7 / 0xA + 1;
LABEL_27:
  v18 = 40;
  if ( v17 < 0x64 )
  {
    v25 = v6;
    LOBYTE(v23) = v17;
    if ( v17 <= 9 )
      goto LABEL_31;
LABEL_37:
    --v18;
    ++v25;
    v26 = (unsigned __int8)v23 / 0xAu;
    v35[v18] = ((unsigned __int8)v23 % 0xAu) | 0x30;
    v28 = v25 == v6;
    if ( v25 == v6 )
      v28 = v5 == 0;
    if ( !v28 )
      goto LABEL_40;
    goto LABEL_41;
  }
  v34 = a3;
  v19 = v5;
  v20 = a4;
  v21 = 0;
  do
  {
    v22 = &v35[v21 + 38];
    v21 -= 2;
    v12 = v17 > 0x270F;
    v23 = v17 / 0x64;
    v24 = v17 - 100 * v23;
    v17 = v23;
    *v22 = word_2B3EB7[v24];
  }
  while ( v12 );
  a4 = v20;
  v5 = v19;
  a3 = v34;
  v25 = v6 - v21;
  v18 = v21 + 40;
  if ( v23 > 9 )
    goto LABEL_37;
LABEL_31:
  v26 = v23;
  v27 = v25 == v6;
  if ( v25 == v6 )
    v27 = v5 == 0;
  if ( !v27 )
LABEL_40:
    v35[--v18] = 46;
LABEL_41:
  v35[v18 - 1] = v26 + 48;
  v29 = 101;
  if ( a3 )
    v29 = 69;
  v36 = v29;
  if ( v25 >= 0xA )
  {
    v37 = word_2B3EB7[v25];
    v30 = 3;
  }
  else
  {
    LOBYTE(v37) = v25 + 48;
    v30 = 2;
  }
  v45 = v30;
  v44 = &v36;
  v43 = 2;
  v42 = v5;
  v41 = 0;
  v40 = 41 - v18;
  v39 = &v35[v18 - 1];
  v38 = 2;
  if ( a2 )
  {
    v31 = a4[6] & 1;
    v32 = aLibraryCoreSrc;
    if ( v31 )
      v32 = (const char *)&unk_2B370B;
  }
  else
  {
    v31 = 1;
    v32 = asc_2B370A;
  }
  v46[3] = (const char *)3;
  v46[0] = v32;
  v46[1] = (const char *)v31;
  v46[2] = (const char *)&v38;
  return sub_249F14(a4, v46);
}
