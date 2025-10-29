int __fastcall object::read::pe::import::ImportTable::hint_name(_DWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v4; // r0
  unsigned int v5; // r2
  int v6; // r1
  const char *v7; // r0
  unsigned int v8; // r0
  unsigned int v9; // r5
  __int16 *v10; // r2
  _WORD *v11; // r6
  __int16 v12; // r7
  int v13; // r0
  unsigned int v14; // r1
  bool v15; // cc

  v4 = a2[1];
  v5 = a3 - a2[2];
  if ( v4 < v5 )
  {
    v6 = 31;
    v7 = aInvalidPeImpor_0;
LABEL_11:
    a1[1] = v7;
    a1[2] = v6;
    *a1 = 1;
    return 1;
  }
  v8 = v4 - v5;
  v9 = v8 - 2;
  v10 = (__int16 *)(*a2 + v5);
  v11 = v10 + 1;
  if ( v8 < 2 )
  {
    v7 = (const char *)&unk_29437F;
LABEL_10:
    v6 = 28;
    goto LABEL_11;
  }
  if ( v8 == 2 )
    goto LABEL_9;
  v12 = *v10;
  v13 = memchr::memchr::fallback::memchr(0, v10 + 1, v9);
  v15 = v13 != 0;
  if ( v13 )
    v15 = v9 > v14;
  if ( !v15 )
  {
LABEL_9:
    v7 = aMissingPeImpor;
    goto LABEL_10;
  }
  a1[2] = v11;
  a1[3] = v14;
  *((_WORD *)a1 + 2) = v12;
  *a1 = 0;
  return 0;
}
