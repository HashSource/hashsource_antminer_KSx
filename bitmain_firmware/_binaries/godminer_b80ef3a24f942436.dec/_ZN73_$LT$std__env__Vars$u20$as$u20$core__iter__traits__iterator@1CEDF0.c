unsigned int __fastcall <std::env::Vars as core::iter::traits::iterator::Iterator>::next(unsigned int *a1, int a2)
{
  unsigned int *v3; // r0
  int v4; // r5
  unsigned int v5; // r6
  unsigned int v6; // r7
  unsigned int v7; // r1
  int v8; // r2
  unsigned int v9; // r3
  unsigned int v10; // r1
  unsigned int v11; // r2
  unsigned int v12; // r0
  bool v13; // zf
  unsigned int result; // r0
  unsigned int v15; // r1
  unsigned int v16; // r2
  unsigned int v17; // r3
  unsigned int v18; // r6
  unsigned int v19; // r7
  int v20; // r1
  int v21; // [sp+8h] [bp-88h] BYREF
  int v22; // [sp+Ch] [bp-84h]
  unsigned int v23; // [sp+10h] [bp-80h]
  int v24; // [sp+14h] [bp-7Ch]
  unsigned int v25; // [sp+18h] [bp-78h]
  unsigned int v26; // [sp+20h] [bp-70h]
  int v27; // [sp+24h] [bp-6Ch]
  unsigned int v28; // [sp+28h] [bp-68h]
  unsigned int v29; // [sp+30h] [bp-60h]
  unsigned int v30; // [sp+34h] [bp-5Ch]
  unsigned int v31; // [sp+38h] [bp-58h]
  unsigned int v32; // [sp+40h] [bp-50h]
  unsigned int v33; // [sp+44h] [bp-4Ch]
  unsigned int v34; // [sp+48h] [bp-48h]
  unsigned int v35; // [sp+50h] [bp-40h]
  int v36; // [sp+54h] [bp-3Ch]
  unsigned int v37; // [sp+58h] [bp-38h]
  unsigned int v38; // [sp+70h] [bp-20h]
  int v39; // [sp+74h] [bp-1Ch]
  unsigned int v40; // [sp+78h] [bp-18h]
  unsigned int v41; // [sp+80h] [bp-10h] BYREF
  int v42; // [sp+84h] [bp-Ch]
  unsigned int v43; // [sp+88h] [bp-8h]

  v3 = *(unsigned int **)(a2 + 4);
  if ( v3 == *(unsigned int **)(a2 + 8) || (v4 = v3[1], v5 = v3[2], v6 = *v3, *(_DWORD *)(a2 + 4) = v3 + 6, !v4) )
  {
    a1[1] = 0;
    return 0;
  }
  else
  {
    v43 = v5;
    v7 = v3[3];
    v8 = v3[4];
    v9 = v3[5];
    v42 = v4;
    v26 = v7;
    v27 = v8;
    v28 = v9;
    v10 = v3[3];
    v11 = v3[4];
    v31 = v3[5];
    v30 = v11;
    v29 = v10;
    v41 = v6;
    core::str::converts::from_utf8((int)&v21, v4, v5);
    v12 = v21;
    v13 = v21 == 0;
    if ( v21 )
    {
      v12 = v23;
      v13 = (unsigned __int8)v23 == 2;
    }
    if ( !v13 )
    {
      v20 = v22;
      v22 = v12;
      v21 = v20;
      v25 = v5;
      v24 = v4;
      v23 = v6;
      alloc::ffi::c_str::FromVecWithNulError::into_bytes(&v41, &v21);
      v21 = v41;
      v22 = v42;
      v23 = v43;
      core::result::unwrap_failed((int)&unk_2AFC2A, 43, (int)&v21, (int)&off_2E993C, (int)&off_2E9864);
    }
    v34 = v5;
    v33 = v4;
    v32 = v6;
    v41 = v26;
    v42 = v27;
    v43 = v28;
    core::str::converts::from_utf8((int)&v21, v27, v28);
    if ( v21 )
    {
      v38 = v26;
      v39 = v27;
      v40 = v28;
      if ( (unsigned __int8)v23 != 2 )
      {
        v21 = v22;
        v22 = v23;
        v23 = v26;
        v24 = v27;
        v25 = v28;
        alloc::ffi::c_str::FromVecWithNulError::into_bytes(&v41, &v21);
        v35 = v41;
        v36 = v42;
        v37 = v43;
        v21 = v41;
        v22 = v42;
        v23 = v43;
        core::result::unwrap_failed((int)&unk_2AFC2A, 43, (int)&v21, (int)&off_2E993C, (int)&off_2E9874);
      }
    }
    else
    {
      v38 = v26;
      v39 = v27;
      v40 = v28;
    }
    result = v32;
    v15 = v33;
    v16 = v34;
    v17 = v38;
    v18 = v39;
    v19 = v40;
    *a1 = v32;
    a1[1] = v15;
    a1[2] = v16;
    a1[3] = v17;
    a1[4] = v18;
    a1[5] = v19;
  }
  return result;
}
