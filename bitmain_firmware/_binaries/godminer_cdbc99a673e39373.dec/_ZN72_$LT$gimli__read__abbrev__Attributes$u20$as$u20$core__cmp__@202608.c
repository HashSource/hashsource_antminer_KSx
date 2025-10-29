bool __fastcall <gimli::read::abbrev::Attributes as core::cmp::PartialEq>::eq(int a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r4
  _BOOL4 result; // r0
  int v5; // r0
  unsigned int v6; // r1
  unsigned int v7; // r3
  int v8; // r7
  int v9; // r2
  bool v10; // zf
  int v11; // r1
  int v12; // r2
  int v13; // r5
  int v14; // r7

  if ( *(_DWORD *)a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)a2 )
      goto LABEL_3;
    goto LABEL_7;
  }
  HIDWORD(v2) = *(_DWORD *)(a1 + 4);
  if ( HIDWORD(v2) >= 6 )
    goto LABEL_19;
  LODWORD(v2) = a1 + 8;
  if ( !*(_DWORD *)a2 )
  {
LABEL_7:
    HIDWORD(v3) = *(_DWORD *)(a2 + 4);
    if ( HIDWORD(v3) < 6 )
    {
      LODWORD(v3) = a2 + 8;
      result = 0;
      if ( HIDWORD(v2) != HIDWORD(v3) )
        return result;
      goto LABEL_9;
    }
LABEL_19:
    core::slice::index::slice_end_index_len_fail();
  }
LABEL_3:
  v3 = *(_QWORD *)(a2 + 8);
  result = 0;
  if ( HIDWORD(v2) != HIDWORD(v3) )
    return result;
LABEL_9:
  v5 = 0;
  v6 = 0;
  while ( HIDWORD(v2) != v6 )
  {
    v7 = v6;
    v8 = *(unsigned __int16 *)(v3 + v5 + 8);
    v9 = *(unsigned __int16 *)(v2 + v5 + 8);
    v10 = v9 == v8;
    if ( v9 == v8 )
      v10 = *(unsigned __int16 *)(v2 + v5 + 10) == *(unsigned __int16 *)(v3 + v5 + 10);
    if ( v10 )
    {
      v11 = v3 + v5;
      v12 = *(_DWORD *)(v3 + v5);
      v14 = v2 + v5;
      v13 = *(_DWORD *)(v2 + v5);
      v5 += 16;
      v10 = (v13 ^ v12 | *(_DWORD *)(v14 + 4) ^ *(_DWORD *)(v11 + 4)) == 0;
      v6 = v7 + 1;
      if ( v10 )
        continue;
    }
    return v7 >= HIDWORD(v2);
  }
  v7 = HIDWORD(v2);
  return v7 >= HIDWORD(v2);
}
