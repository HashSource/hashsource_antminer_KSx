int __fastcall sub_1D3090(int a1, int a2)
{
  _BYTE *v4; // r1
  int result; // r0
  int *v6; // r0
  int v7; // r2
  unsigned int v8; // r6
  unsigned int v9; // r0
  bool v10; // zf
  __int64 v11; // r0
  void *v12; // r6
  unsigned int v13; // r8
  _BYTE *v14; // r7
  int v15; // r1
  int v16; // r2
  int v17; // r7
  char v18; // r0
  _DWORD *v19; // r2
  int v20; // [sp+10h] [bp-60h] BYREF
  int v21; // [sp+14h] [bp-5Ch]
  int v22; // [sp+18h] [bp-58h]
  int v23; // [sp+1Ch] [bp-54h]
  int v24; // [sp+20h] [bp-50h]
  int v25; // [sp+24h] [bp-4Ch]
  int v26; // [sp+28h] [bp-48h]
  int v27; // [sp+2Ch] [bp-44h]
  int v28; // [sp+30h] [bp-40h]
  unsigned int v29; // [sp+34h] [bp-3Ch]
  int v30; // [sp+3Ch] [bp-34h] BYREF
  void *v31; // [sp+40h] [bp-30h]
  unsigned int v32; // [sp+44h] [bp-2Ch]
  int v33[8]; // [sp+48h] [bp-28h] BYREF
  int v34; // [sp+68h] [bp-8h]
  unsigned int v35; // [sp+6Ch] [bp-4h]

  v4 = *(_BYTE **)(a1 + 4);
  **(_BYTE **)a1 = 1;
  if ( *v4 )
    goto LABEL_3;
  sub_1D66FC(&v20, (int *)a2);
  if ( v20 == 3 )
    goto LABEL_3;
  v33[0] = v20;
  v33[1] = v21;
  v33[2] = v22;
  v33[3] = v23;
  v33[4] = v24;
  v33[5] = v25;
  v33[6] = v26;
  v33[7] = v27;
  v34 = v28;
  v35 = v29;
  if ( v20 == 2 || (v11 = rustc_demangle::Demangle::as_str((int)v33), !(_DWORD)v11) )
  {
    core::str::converts::from_utf8((int)&v30, v34, v35);
    if ( v30 )
      goto LABEL_3;
    v12 = v31;
    if ( !v31 )
      goto LABEL_3;
    v13 = v32;
    v14 = *(_BYTE **)(a1 + 8);
    if ( !*v14 )
      goto LABEL_25;
  }
  else
  {
    v13 = HIDWORD(v11);
    v12 = (void *)v11;
    v14 = *(_BYTE **)(a1 + 8);
    if ( !*v14 )
      goto LABEL_25;
  }
  if ( sub_19F6AC(aRustBeginShort, 0x1Cu, v12, v13) )
  {
    result = *(_DWORD *)(a1 + 12);
    *(_BYTE *)result = 1;
    return result;
  }
LABEL_25:
  if ( sub_19F6AC(aRustEndShortBa, 0x1Au, v12, v13) )
  {
    *v14 = 1;
    return 1;
  }
LABEL_3:
  result = **(unsigned __int8 **)(a1 + 8);
  if ( **(_BYTE **)(a1 + 8) )
  {
    v6 = *(int **)(a1 + 24);
    v31 = *(void **)(a1 + 20);
    v7 = *v6;
    v8 = v6[1];
    v30 = 0;
    if ( !v7 )
    {
      v33[0] = 0;
      Unwind_VRS_Get(v8, 0, 15, 0, v33);
      v8 = v33[0] & 0xFFFFFFFE;
    }
    sub_1D66FC(v33, (int *)a2);
    v9 = *(_DWORD *)(a2 + 16);
    v10 = v9 == 2;
    if ( v9 != 2 )
      v10 = v9 == 3;
    if ( v10 || !*(_DWORD *)(a2 + 8) )
    {
      v20 = 2;
    }
    else
    {
      v21 = *(_DWORD *)(a2 + 8);
      v15 = *(_DWORD *)(a2 + 12);
      v20 = 0;
      v22 = v15;
    }
    v16 = *(_DWORD *)(a2 + 24);
    v17 = 0;
    if ( v9 < 2 )
      v17 = v9;
    else
      v16 = 0;
    v18 = sub_1D6964(&v30, v8, v33, &v20, v17, *(_DWORD *)(a2 + 20), v16, *(char ***)(a2 + 28));
    v19 = v31;
    **(_BYTE **)(a1 + 16) = v18;
    result = v19[2] + 1;
    v19[2] = result;
  }
  return result;
}
