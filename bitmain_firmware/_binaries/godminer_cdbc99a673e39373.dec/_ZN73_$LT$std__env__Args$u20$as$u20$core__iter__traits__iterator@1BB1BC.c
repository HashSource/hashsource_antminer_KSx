int __fastcall <std::env::Args as core::iter::traits::iterator::Iterator>::next(_DWORD *a1, int a2)
{
  int *v3; // r0
  int v4; // r5
  int v5; // r6
  int v6; // r7
  int result; // r0
  bool v8; // zf
  int v9; // [sp+8h] [bp-38h] BYREF
  int v10; // [sp+Ch] [bp-34h]
  int v11; // [sp+10h] [bp-30h]
  int v12; // [sp+18h] [bp-28h]
  int v13; // [sp+1Ch] [bp-24h]
  int v14; // [sp+20h] [bp-20h]
  int v15; // [sp+28h] [bp-18h] BYREF
  int v16; // [sp+2Ch] [bp-14h]
  int v17; // [sp+30h] [bp-10h]
  int v18; // [sp+34h] [bp-Ch]
  int v19; // [sp+38h] [bp-8h]

  v3 = *(int **)(a2 + 4);
  if ( v3 == *(int **)(a2 + 8) || (v4 = v3[1], v5 = v3[2], v6 = *v3, *(_DWORD *)(a2 + 4) = v3 + 3, !v4) )
  {
    a1[1] = 0;
    return 0;
  }
  else
  {
    v14 = v5;
    v13 = v4;
    v12 = v6;
    core::str::converts::from_utf8(&v15, v4);
    result = v15;
    v8 = v15 == 0;
    if ( v15 )
    {
      result = v17;
      v8 = (unsigned __int8)v17 == 2;
    }
    if ( !v8 )
    {
      v15 = v16;
      v16 = result;
      v19 = v5;
      v18 = v4;
      v17 = v6;
      alloc::ffi::c_str::FromVecWithNulError::into_bytes(&v9, &v15);
      v12 = v9;
      v13 = v10;
      v14 = v11;
      v15 = v9;
      v16 = v10;
      v17 = v11;
      core::result::unwrap_failed((int)&unk_290C2A, 43, (int)&v15, (int)&off_2CA93C, (int)&off_2CA8DC);
    }
    v12 = v6;
    v13 = v4;
    v14 = v5;
    *a1 = v6;
    a1[1] = v4;
    a1[2] = v5;
  }
  return result;
}
