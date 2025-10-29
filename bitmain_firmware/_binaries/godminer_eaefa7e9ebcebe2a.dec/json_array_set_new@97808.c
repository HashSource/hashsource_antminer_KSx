int __fastcall json_array_set_new(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  _BOOL4 v4; // r3
  unsigned int *v6; // r3
  unsigned int v7; // r1
  unsigned int v8; // r1
  int v9; // r5
  _DWORD **v10; // r12
  _DWORD *v11; // r0
  unsigned int *v12; // r3
  unsigned int v13; // r1
  unsigned int v14; // r1
  _DWORD *v15; // [sp+4h] [bp-14h]

  if ( !a3 )
    return -1;
  if ( !a1 )
    goto LABEL_6;
  v4 = a3 == a1;
  if ( *a1 != 1 )
    v4 = 1;
  if ( v4 || a1[3] <= a2 )
  {
LABEL_6:
    if ( a3[1] != -1 )
    {
      v6 = a3 + 1;
      __dmb(0xBu);
      do
      {
        v7 = __ldrex(v6);
        v8 = v7 - 1;
      }
      while ( __strex(v8, v6) );
      if ( !v8 )
        json_delete(a3);
    }
    return -1;
  }
  else
  {
    v9 = 4 * a2;
    v10 = (_DWORD **)(a1[4] + 4 * a2);
    v11 = *v10;
    if ( *v10 && v11[1] != -1 )
    {
      v12 = v11 + 1;
      __dmb(0xBu);
      do
      {
        v13 = __ldrex(v12);
        v14 = v13 - 1;
      }
      while ( __strex(v14, v12) );
      if ( !v14 )
      {
        v15 = a3;
        json_delete(v11);
        a3 = v15;
      }
      v10 = (_DWORD **)(a1[4] + v9);
    }
    *v10 = a3;
    return 0;
  }
}
