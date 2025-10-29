const char *__fastcall sub_1EDD68(int a1)
{
  unsigned int v1; // r4
  int v2; // r1
  _DWORD *v3; // lr
  __int64 v4; // kr00_8
  __int64 bytes_at; // r0
  unsigned int v6; // r6
  const char *v7; // r9
  int v9; // r5
  size_t v10; // r2
  const char *v11; // r7
  int v12; // r1
  _BYTE *v13; // r0
  const char *v14; // r11
  unsigned int v15; // r8
  bool v16; // cf
  unsigned int v17; // r3
  unsigned int v18; // r10
  unsigned int v19; // r3
  int v20; // r5
  size_t v21; // r5
  int v22; // r0
  bool v23; // zf
  bool v24; // cc
  _DWORD *v26; // [sp+18h] [bp-1Ch]
  int v27; // [sp+20h] [bp-14h]
  int v28; // [sp+24h] [bp-10h]
  int v29; // [sp+28h] [bp-Ch]
  _DWORD *v30; // [sp+2Ch] [bp-8h]
  unsigned int v31; // [sp+30h] [bp-4h]

  v2 = *(_DWORD *)(a1 + 28);
  if ( v2 )
  {
    v3 = *(_DWORD **)(a1 + 24);
    v26 = &v3[10 * v2];
    v4 = *(_QWORD *)(a1 + 56);
    while ( 1 )
    {
      if ( v3[1] == 7 )
      {
        v30 = v3;
        bytes_at = <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(v4, HIDWORD(v4), v3[4], 0, v3[5], 0);
        v3 = v30;
        if ( (_DWORD)bytes_at )
        {
          v6 = HIDWORD(bytes_at);
          HIDWORD(bytes_at) = v30[8];
          v7 = (const char *)bytes_at;
          LODWORD(bytes_at) = 4;
          if ( HIDWORD(bytes_at) < 5 || (LODWORD(bytes_at) = 8, HIDWORD(bytes_at) == 8) )
          {
            if ( v6 )
              break;
          }
        }
      }
LABEL_3:
      v3 += 10;
      if ( v3 == v26 )
        return 0;
    }
    v9 = -(int)bytes_at;
    v27 = -(int)bytes_at;
    v10 = dword_2CC304;
    v28 = bytes_at - 1;
    v29 = bytes_at + 11;
    while ( 1 )
    {
      v11 = v7;
      if ( v6 < 0xC )
        goto LABEL_3;
      v12 = *(_DWORD *)v7;
      v13 = v7 + 12;
      v14 = v7;
      if ( v6 - 12 < *(_DWORD *)v7 )
        goto LABEL_3;
      v15 = (v29 + v12) & v9;
      v16 = v6 >= v15;
      v17 = v6 - v15;
      if ( v6 < v15 )
        v17 = 0;
      else
        v1 = *((_DWORD *)v7 + 1);
      if ( v6 >= v15 )
        v16 = v17 >= v1;
      if ( !v16 )
        goto LABEL_3;
      v18 = (v28 + v15 + v1) & v9;
      v19 = v6 - v18;
      if ( v6 < v18 )
        v19 = 0;
      v31 = v19;
      v7 = aRustc9eb3afe9e;
      if ( v6 >= v18 )
        v7 = &v14[v18];
      if ( v12 )
      {
        v20 = v12 - 1;
        if ( v13[v12 - 1] )
          v20 = v12;
        if ( v20 != v10 )
          goto LABEL_33;
      }
      else if ( v10 )
      {
        goto LABEL_33;
      }
      v21 = v10;
      v22 = bcmp(v13, &unk_2944C6, v10);
      v23 = v22 == 0;
      v3 = v30;
      if ( !v22 )
        v22 = *((_DWORD *)v11 + 2);
      v10 = v21;
      if ( v23 && v22 == 3 )
        return &v14[v15];
LABEL_33:
      v24 = v6 > v18;
      v9 = v27;
      v6 = v31;
      if ( !v24 )
        goto LABEL_3;
    }
  }
  return 0;
}
