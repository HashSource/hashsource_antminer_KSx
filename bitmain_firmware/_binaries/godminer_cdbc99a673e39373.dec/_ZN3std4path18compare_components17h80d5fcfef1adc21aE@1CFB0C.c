int __fastcall std::path::compare_components(int *a1, int *a2)
{
  int v2; // r2
  _DWORD *v4; // r0
  int v5; // r4
  int v6; // r5
  int v7; // r6
  int v8; // r7
  int v9; // r5
  int v10; // r6
  int v11; // r7
  _DWORD *v12; // r1
  int v13; // r3
  int v14; // r5
  int v15; // r6
  int v16; // r7
  int v17; // r5
  int v18; // r6
  int v19; // r7
  size_t v20; // r2
  int v21; // r8
  int v22; // r0
  int v23; // r2
  _BOOL4 v25; // r8
  const void *v27; // r4
  size_t v28; // r11
  int v35; // r1
  int v37; // r5
  unsigned int v38; // lr
  unsigned int v39; // r3
  int v40; // r2
  int v41; // r4
  unsigned int v42; // r8
  int v43; // r6
  int v44; // r7
  int v45; // r2
  int v46; // r7
  _DWORD v47[8]; // [sp+8h] [bp-7Ch] BYREF
  _DWORD v48[9]; // [sp+28h] [bp-5Ch] BYREF
  _DWORD v49[2]; // [sp+4Ch] [bp-38h] BYREF
  unsigned __int8 v50; // [sp+54h] [bp-30h]
  void *s2; // [sp+68h] [bp-1Ch] BYREF
  size_t v52; // [sp+6Ch] [bp-18h]
  unsigned __int8 v53; // [sp+70h] [bp-14h]

  v2 = *((unsigned __int8 *)a1 + 8);
  _ZF = v2 == 6;
  if ( v2 == 6 )
    _ZF = *((_BYTE *)a2 + 8) == 6;
  if ( _ZF && *((unsigned __int8 *)a1 + 28) == *((unsigned __int8 *)a2 + 28) )
  {
    v37 = *a2;
    v38 = a2[1];
    v39 = v38;
    v40 = 0;
    v41 = *a1;
    v42 = a1[1];
    if ( v42 < v38 )
      v39 = a1[1];
    while ( v39 != v40 )
    {
      v43 = *(unsigned __int8 *)(v37 + v40);
      v44 = *(unsigned __int8 *)(v41 + v40++);
      if ( v44 != v43 )
      {
        v39 = v40 - 1;
        if ( v40 - 1 > v42 )
          core::slice::index::slice_end_index_len_fail();
        goto LABEL_33;
      }
    }
    v23 = 0;
    if ( v42 == v38 )
      return v23;
LABEL_33:
    v45 = -v39;
    while ( v45 )
    {
      v46 = *(unsigned __int8 *)(v41 - 1 - v45++);
      if ( v46 == 47 )
      {
        if ( v42 < 1 - v45 )
          core::slice::index::slice_start_index_len_fail();
        *((_BYTE *)a1 + 28) = 2;
        *a1 = v41 - v45 + 1;
        a1[1] = v42 + v45 - 1;
        if ( v38 < 1 - v45 )
          core::slice::index::slice_start_index_len_fail();
        *((_BYTE *)a2 + 28) = 2;
        *a2 = v37 - v45 + 1;
        a2[1] = v38 + v45 - 1;
        break;
      }
    }
  }
  v5 = *a1;
  v6 = a1[1];
  v7 = a1[2];
  v8 = a1[3];
  v4 = a1 + 4;
  v47[0] = v5;
  v47[1] = v6;
  v47[2] = v7;
  v47[3] = v8;
  v9 = v4[1];
  v10 = v4[2];
  v11 = v4[3];
  v47[4] = *v4;
  v47[5] = v9;
  v47[6] = v10;
  v47[7] = v11;
  v13 = *a2;
  v14 = a2[1];
  v15 = a2[2];
  v16 = a2[3];
  v12 = a2 + 4;
  v48[0] = v13;
  v48[1] = v14;
  v48[2] = v15;
  v48[3] = v16;
  v17 = v12[1];
  v18 = v12[2];
  v19 = v12[3];
  v48[4] = *v12;
  v48[5] = v17;
  v48[6] = v18;
  v48[7] = v19;
  do
  {
    while ( 1 )
    {
      <std::path::Components as core::iter::traits::iterator::Iterator>::next((int)v49, (int)v47);
      _R5 = v50;
      if ( v50 == 10 )
      {
        <std::path::Components as core::iter::traits::iterator::Iterator>::next((int)&s2, (int)v48);
        v23 = v53 - 10;
        if ( v53 != 10 )
          return -1;
        return v23;
      }
      v27 = (const void *)v49[0];
      v28 = v49[1];
      <std::path::Components as core::iter::traits::iterator::Iterator>::next((int)&s2, (int)v48);
      _R0 = v53;
      v23 = 1;
      if ( v53 == 10 )
        return v23;
      _R1 = 5;
      __asm
      {
        UQSUB8          R3, R0, R1
        UQSUB8          R1, R5, R1
      }
      if ( (unsigned __int8)_R1 < (unsigned int)(unsigned __int8)_R3 )
        return 255;
      if ( (unsigned __int8)_R1 != (unsigned __int8)_R3 )
        return v23;
      v35 = _R1 & 0xF;
      if ( v35 != 4 )
        break;
      v20 = v52;
      v21 = v28 - v52;
      if ( v28 < v52 )
        v20 = v28;
      v22 = memcmp(v27, s2, v20);
      v23 = 255;
      if ( v22 )
        v21 = v22;
      _NF = v21 < 0;
      v25 = v21 != 0;
      if ( _NF )
        return v23;
      if ( (v25 | 2) != 2 )
        return v25;
    }
  }
  while ( v35 || v53 >= 6u );
  if ( (unsigned __int8)_R5 < (unsigned int)v53 )
    return 255;
  if ( (unsigned __int8)_R5 == v53 )
    __asm { ADD             PC, R7, R3 }
  return v23;
}
