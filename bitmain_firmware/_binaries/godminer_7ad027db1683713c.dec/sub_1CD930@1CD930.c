int __fastcall sub_1CD930(int a1, int *a2)
{
  int v2; // r7
  _BOOL4 v5; // r0
  int v6; // r2
  bool v7; // zf
  bool v8; // zf
  int v9; // r6
  unsigned int v10; // r1
  unsigned int v11; // r0
  int v12; // r3
  int v13; // r7
  unsigned int v14; // r6
  _BYTE *v15; // r2
  int v16; // r4
  int v17; // r2
  int v18; // r3
  int result; // r0
  char v20; // r1
  bool v21; // zf

  v2 = *((unsigned __int8 *)a2 + 28);
  v5 = 0;
  v6 = v2 != 1;
  if ( !*((_BYTE *)a2 + 28) )
    v6 = -1;
  v7 = v6 == -1;
  if ( v6 != -1 )
    v7 = (unsigned __int8)v6 == 0;
  if ( v7 )
  {
    v8 = (unsigned __int8)v6 == 255;
    v9 = *((unsigned __int8 *)a2 + 30);
    if ( (unsigned __int8)v6 != 255 )
      v8 = (unsigned __int8)v6 == 0;
    if ( v8 )
      v5 = sub_1CD7F8((int)a2);
    if ( v2 )
      goto LABEL_16;
    goto LABEL_14;
  }
  v9 = 0;
  if ( !*((_BYTE *)a2 + 28) )
  {
LABEL_14:
    if ( *((_BYTE *)a2 + 8) != 6 )
      __asm { ADD             PC, R7, R3 }
  }
LABEL_16:
  v10 = a2[1];
  v11 = v5 + v9;
  if ( v10 < v11 )
    core::slice::index::slice_start_index_len_fail(v11, v10, (int)&off_2C9F1C);
  v12 = *a2;
  v13 = -1;
  v14 = v11;
  v15 = (_BYTE *)(*a2 + v11);
  while ( v10 != v14 )
  {
    v16 = v12 + v10;
    ++v13;
    ++v14;
    --v12;
    if ( *(_BYTE *)(v16 - 1) == 47 )
    {
      if ( v10 < v10 - v13 )
        core::slice::index::slice_start_index_len_fail(v10 - v13, v10, (int)&off_2C9F2C);
      v17 = v12 + v10;
      v18 = 1;
      v15 = (_BYTE *)(v17 + 1);
      result = v13;
      if ( !v13 )
        goto LABEL_22;
      goto LABEL_24;
    }
  }
  v18 = 0;
  result = v10 - v11;
  if ( !result )
  {
LABEL_22:
    v20 = 10;
    goto LABEL_35;
  }
LABEL_24:
  v20 = 9;
  if ( result == 2 )
  {
    if ( *v15 == 46 )
    {
      v20 = 9;
      if ( v15[1] == 46 )
        v20 = 8;
    }
  }
  else
  {
    v21 = result == 1;
    if ( result == 1 )
      v21 = *v15 == 46;
    if ( v21 )
    {
      v20 = 10;
      if ( *((unsigned __int8 *)a2 + 8) < 3u )
        v20 = 7;
    }
  }
LABEL_35:
  *(_BYTE *)(a1 + 12) = v20;
  *(_DWORD *)a1 = result + v18;
  *(_DWORD *)(a1 + 4) = v15;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
