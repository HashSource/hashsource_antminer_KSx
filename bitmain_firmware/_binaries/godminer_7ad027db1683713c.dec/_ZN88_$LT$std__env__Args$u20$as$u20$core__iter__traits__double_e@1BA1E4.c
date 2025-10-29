unsigned int __fastcall <std::env::Args as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(
        unsigned int *a1,
        int a2)
{
  int v3; // r0
  int v4; // r0
  unsigned int v5; // r7
  unsigned int v6; // t1
  int v7; // r5
  unsigned int v8; // r6
  unsigned int result; // r0
  bool v10; // zf
  unsigned int v11; // [sp+8h] [bp-38h] BYREF
  unsigned int v12; // [sp+Ch] [bp-34h]
  unsigned int v13; // [sp+10h] [bp-30h]
  unsigned int v14; // [sp+18h] [bp-28h]
  int v15; // [sp+1Ch] [bp-24h]
  unsigned int v16; // [sp+20h] [bp-20h]
  unsigned int v17; // [sp+28h] [bp-18h] BYREF
  unsigned int v18; // [sp+2Ch] [bp-14h]
  unsigned int v19; // [sp+30h] [bp-10h]
  int v20; // [sp+34h] [bp-Ch]
  unsigned int v21; // [sp+38h] [bp-8h]

  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 == *(_DWORD *)(a2 + 4)
    || (v6 = *(_DWORD *)(v3 - 12),
        v4 = v3 - 12,
        v5 = v6,
        *(_DWORD *)(a2 + 8) = v4,
        v7 = *(_DWORD *)(v4 + 4),
        v8 = *(_DWORD *)(v4 + 8),
        !v7) )
  {
    a1[1] = 0;
    return 0;
  }
  else
  {
    v16 = *(_DWORD *)(v4 + 8);
    v15 = v7;
    v14 = v5;
    core::str::converts::from_utf8((int)&v17, v7, v8);
    result = v17;
    v10 = v17 == 0;
    if ( v17 )
    {
      result = v19;
      v10 = (unsigned __int8)v19 == 2;
    }
    if ( !v10 )
    {
      v17 = v18;
      v18 = result;
      v21 = v8;
      v20 = v7;
      v19 = v5;
      alloc::ffi::c_str::FromVecWithNulError::into_bytes(&v11, &v17);
      v14 = v11;
      v15 = v12;
      v16 = v13;
      v17 = v11;
      v18 = v12;
      v19 = v13;
      core::result::unwrap_failed((int)&unk_28F6DA, 43, (int)&v17, (int)&off_2C993C, (int)&off_2C98EC);
    }
    v14 = v5;
    v15 = v7;
    v16 = v8;
    *a1 = v5;
    a1[1] = v7;
    a1[2] = v8;
  }
  return result;
}
