bool __fastcall <std::sys::unix::process::process_inner::ExitStatus as core::fmt::Display>::fmt(_DWORD *a1, int *a2)
{
  const char *v3; // r1
  int v4; // r2
  unsigned int v5; // r2
  const char *v6; // r0
  int v7; // r1
  int v8; // r2
  const char *v9; // r1
  int v10; // r2
  int v12; // [sp+4h] [bp-34h] BYREF
  const char *v13; // [sp+8h] [bp-30h] BYREF
  int v14; // [sp+Ch] [bp-2Ch]
  int v15[2]; // [sp+10h] [bp-28h] BYREF
  char **v16; // [sp+18h] [bp-20h]
  int v17; // [sp+1Ch] [bp-1Ch]
  const char ***v18; // [sp+20h] [bp-18h]
  int v19; // [sp+24h] [bp-14h]
  const char **v20; // [sp+28h] [bp-10h] BYREF
  int (__fastcall *v21)(unsigned int *, int); // [sp+2Ch] [bp-Ch]
  const char **v22; // [sp+30h] [bp-8h]
  void *v23; // [sp+34h] [bp-4h]

  v3 = (const char *)*a1;
  v4 = *a1 & 0x7F;
  if ( !v4 )
  {
    v13 = (const char *)(unsigned __int8)BYTE1(*a1);
    v16 = &off_2CADB0;
    v18 = &v20;
    v17 = 1;
    v19 = 1;
    v15[0] = 0;
    v21 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v20 = &v13;
    return core::fmt::Formatter::write_fmt(a2, v15);
  }
  if ( (char)(v4 + 1) >= 2 )
  {
    v12 = *a1 & 0x7F;
    v5 = v4 - 1;
    if ( v5 > 0x1E )
    {
      v14 = 0;
      v13 = aRustc9eb3afe9e;
      if ( ((unsigned __int8)v3 & 0x80) != 0 )
        goto LABEL_5;
    }
    else
    {
      v6 = (const char *)*(&off_2CB024 + v5);
      v14 = dword_29276C[v5];
      v13 = v6;
      if ( ((unsigned __int8)v3 & 0x80) != 0 )
      {
LABEL_5:
        v17 = 3;
        v19 = 2;
        v18 = &v20;
        v23 = sub_19A74C;
        v15[0] = 0;
        v22 = &v13;
        v21 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v20 = (const char **)&v12;
        v16 = &off_2CAD88;
        return core::fmt::Formatter::write_fmt(a2, v15);
      }
    }
    v17 = 2;
    v19 = 2;
    v18 = &v20;
    v23 = sub_19A74C;
    v15[0] = 0;
    v22 = &v13;
    v21 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v20 = (const char **)&v12;
    v16 = &off_2CADA0;
    return core::fmt::Formatter::write_fmt(a2, v15);
  }
  if ( (unsigned __int8)v3 == 127 )
  {
    v7 = ((unsigned int)v3 >> 8) - 1;
    v12 = (unsigned __int8)BYTE1(*a1);
    if ( (unsigned __int8)v7 > 0x1Eu )
    {
      v10 = 0;
      v9 = aRustc9eb3afe9e;
    }
    else
    {
      v8 = (char)v7;
      v9 = (const char *)*(&off_2CB024 + (char)v7);
      v10 = dword_29276C[v8];
    }
    v13 = v9;
    v16 = &off_2CAD78;
    v18 = &v20;
    v14 = v10;
    v17 = 2;
    v19 = 2;
    v15[0] = 0;
    v23 = sub_19A74C;
    v22 = &v13;
    v21 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v20 = (const char **)&v12;
  }
  else if ( v3 == (const char *)0xFFFF )
  {
    v17 = 1;
    v19 = 0;
    v15[0] = 0;
    v16 = &off_2CAD60;
    v18 = (const char ***)aRustc9eb3afe9e;
  }
  else
  {
    v17 = 2;
    v19 = 2;
    v18 = &v20;
    v15[1] = 2;
    v23 = core::fmt::num::<impl core::fmt::LowerHex for usize>::fmt;
    v22 = (const char **)a1;
    v21 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v20 = (const char **)a1;
    v16 = &off_2CAD68;
    v15[0] = (int)&unk_2922C8;
  }
  return core::fmt::Formatter::write_fmt(a2, v15);
}
