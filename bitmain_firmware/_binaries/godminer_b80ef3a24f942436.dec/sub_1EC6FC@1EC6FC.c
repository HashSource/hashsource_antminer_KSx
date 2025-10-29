int __fastcall sub_1EC6FC(int *a1, int *a2)
{
  int v3; // r5
  unsigned int v4; // r9
  int v5; // r10
  unsigned int v7; // r10
  int v8; // r9
  int v9; // [sp+0h] [bp-40h]
  int v10; // [sp+4h] [bp-3Ch]
  int v11; // [sp+8h] [bp-38h]
  int v12; // [sp+Ch] [bp-34h]
  int v13; // [sp+10h] [bp-30h]
  int v14; // [sp+14h] [bp-2Ch]
  int v15; // [sp+18h] [bp-28h]
  int v16; // [sp+20h] [bp-20h] BYREF
  int v17; // [sp+24h] [bp-1Ch]
  int v18; // [sp+28h] [bp-18h]
  int v19; // [sp+2Ch] [bp-14h]
  int v20; // [sp+30h] [bp-10h]
  int v21; // [sp+34h] [bp-Ch]
  int v22; // [sp+38h] [bp-8h]
  int v23; // [sp+3Ch] [bp-4h]

  v3 = *a2;
  if ( a2[4] == 3 )
  {
    v4 = a2[1];
    core::str::converts::from_utf8((int)&v16, *a2, v4);
    v5 = 2;
    if ( !v16 && v17 )
    {
      rustc_demangle::try_demangle(&v16, v17, v18);
      if ( v16 != 2 )
      {
        v5 = v16;
        v9 = v17;
        v10 = v18;
        v11 = v19;
        v12 = v20;
        v13 = v21;
        v14 = v22;
        v15 = v23;
      }
    }
    a1[1] = v9;
    a1[2] = v10;
    a1[3] = v11;
    a1[4] = v12;
    a1[5] = v13;
    a1[6] = v14;
    a1[7] = v15;
    a1[8] = v3;
    a1[9] = v4;
    *a1 = v5;
    return (int)(a1 + 4);
  }
  else if ( v3 )
  {
    v7 = a2[1];
    core::str::converts::from_utf8((int)&v16, *a2, v7);
    v8 = 2;
    if ( !v16 )
    {
      if ( v17 )
      {
        rustc_demangle::try_demangle(&v16, v17, v18);
        if ( v16 != 2 )
        {
          v8 = v16;
          v9 = v17;
          v10 = v18;
          v11 = v19;
          v12 = v20;
          v13 = v21;
          v14 = v22;
          v15 = v23;
        }
      }
    }
    a1[1] = v9;
    a1[2] = v10;
    a1[3] = v11;
    a1[4] = v12;
    a1[5] = v13;
    a1[6] = v14;
    a1[7] = v15;
    a1[8] = v3;
    a1[9] = v7;
    *a1 = v8;
    return (int)(a1 + 4);
  }
  else
  {
    *a1 = 3;
    return 3;
  }
}
