bool __fastcall object::read::ObjectMap::get(int a1, unsigned __int64 a2)
{
  unsigned int v3; // r12
  int v4; // lr
  unsigned int v5; // r0
  unsigned int v6; // r4
  unsigned int v7; // r8
  bool v8; // cf
  unsigned int v9; // r4
  unsigned __int64 v10; // r6
  int v11; // r5
  _BOOL4 result; // r0
  _QWORD *v13; // r1
  unsigned __int64 v14; // r4

  v3 = *(_DWORD *)(a1 + 8);
  if ( !v3 )
    return 0;
  v4 = *(_DWORD *)(a1 + 4);
  v5 = 0;
  v6 = v3;
  v7 = v3;
  do
  {
    while ( 1 )
    {
      v9 = v5 + (v6 >> 1);
      v10 = *(_QWORD *)(v4 + 32 * v9);
      v11 = v10 ^ a2 | HIDWORD(v10) ^ HIDWORD(a2);
      if ( v10 != a2 )
        v11 = 1;
      if ( v10 < a2 )
        v11 = -1;
      if ( v11 != 1 )
        break;
      v7 = v9;
      v8 = v9 >= v5;
      v6 = v9 - v5;
      if ( v6 == 0 || !v8 )
        goto LABEL_12;
    }
    if ( (unsigned __int8)v11 != 255 )
      goto LABEL_14;
    v5 = v9 + 1;
    v8 = v7 >= v9 + 1;
    v6 = v7 - (v9 + 1);
  }
  while ( v6 != 0 && v8 );
LABEL_12:
  if ( !v5 )
    return 0;
  v9 = v5 - 1;
LABEL_14:
  result = 0;
  if ( v9 < v3 )
  {
    v13 = (_QWORD *)(v4 + 32 * v9);
    v14 = v13[1];
    if ( v14 )
    {
      result = a2 - *v13 < v14;
      if ( a2 - *v13 < v14 )
        return (bool)v13;
    }
    else
    {
      return (bool)v13;
    }
  }
  return result;
}
