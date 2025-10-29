const char *__fastcall sub_1ECBF8(int a1)
{
  unsigned int v1; // r4
  int v2; // r1
  _DWORD *v3; // lr
  __int64 v4; // kr00_8
  int bytes_at; // r0
  unsigned int v6; // r1
  unsigned int v7; // r6
  unsigned int v8; // r1
  const char *v9; // r9
  int v10; // r0
  int v11; // r5
  size_t v12; // r2
  const char *v13; // r7
  int v14; // r1
  _BYTE *v15; // r0
  const char *v16; // r11
  unsigned int v17; // r8
  bool v18; // cf
  unsigned int v19; // r3
  unsigned int v20; // r10
  unsigned int v21; // r3
  int v22; // r5
  size_t v23; // r5
  int v24; // r0
  bool v25; // zf
  bool v26; // cc
  _DWORD *v28; // [sp+18h] [bp-1Ch]
  int v29; // [sp+20h] [bp-14h]
  int v30; // [sp+24h] [bp-10h]
  int v31; // [sp+28h] [bp-Ch]
  _DWORD *v32; // [sp+2Ch] [bp-8h]
  unsigned int v33; // [sp+30h] [bp-4h]

  v2 = *(_DWORD *)(a1 + 28);
  if ( v2 )
  {
    v3 = *(_DWORD **)(a1 + 24);
    v28 = &v3[10 * v2];
    v4 = *(_QWORD *)(a1 + 56);
    while ( 1 )
    {
      if ( v3[1] == 7 )
      {
        v32 = v3;
        bytes_at = <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(v4, HIDWORD(v4), v3[4], 0, v3[5], 0);
        v3 = v32;
        if ( bytes_at )
        {
          v7 = v6;
          v8 = v32[8];
          v9 = (const char *)bytes_at;
          v10 = 4;
          if ( v8 < 5 || (v10 = 8, v8 == 8) )
          {
            if ( v7 )
              break;
          }
        }
      }
LABEL_3:
      v3 += 10;
      if ( v3 == v28 )
        return 0;
    }
    v11 = -v10;
    v29 = -v10;
    v12 = dword_2CB304;
    v30 = v10 - 1;
    v31 = v10 + 11;
    while ( 1 )
    {
      v13 = v9;
      if ( v7 < 0xC )
        goto LABEL_3;
      v14 = *(_DWORD *)v9;
      v15 = v9 + 12;
      v16 = v9;
      if ( v7 - 12 < *(_DWORD *)v9 )
        goto LABEL_3;
      v17 = (v31 + v14) & v11;
      v18 = v7 >= v17;
      v19 = v7 - v17;
      if ( v7 < v17 )
        v19 = 0;
      else
        v1 = *((_DWORD *)v9 + 1);
      if ( v7 >= v17 )
        v18 = v19 >= v1;
      if ( !v18 )
        goto LABEL_3;
      v20 = (v30 + v17 + v1) & v11;
      v21 = v7 - v20;
      if ( v7 < v20 )
        v21 = 0;
      v33 = v21;
      v9 = aRustc9eb3afe9e;
      if ( v7 >= v20 )
        v9 = &v16[v20];
      if ( v14 )
      {
        v22 = v14 - 1;
        if ( v15[v14 - 1] )
          v22 = v14;
        if ( v22 != v12 )
          goto LABEL_33;
      }
      else if ( v12 )
      {
        goto LABEL_33;
      }
      v23 = v12;
      v24 = bcmp(v15, &unk_292F76, v12);
      v25 = v24 == 0;
      v3 = v32;
      if ( !v24 )
        v24 = *((_DWORD *)v13 + 2);
      v12 = v23;
      if ( v25 && v24 == 3 )
        return &v16[v17];
LABEL_33:
      v26 = v7 > v20;
      v11 = v29;
      v7 = v33;
      if ( !v26 )
        goto LABEL_3;
    }
  }
  return 0;
}
