int __fastcall std::io::stdio::_eprint(int *a1)
{
  int v2; // r3
  char **v3; // r4
  int v4; // r5
  unsigned int ***v5; // r6
  int v6; // r7
  int result; // r0
  int v8; // r2
  char **v9; // r3
  int v10; // r5
  unsigned int ***v11; // r6
  int v12; // r7
  _DWORD v13[2]; // [sp+0h] [bp-48h] BYREF
  _DWORD v14[3]; // [sp+8h] [bp-40h] BYREF
  void *v15; // [sp+14h] [bp-34h] BYREF
  _DWORD v16[2]; // [sp+18h] [bp-30h] BYREF
  unsigned int **v17[4]; // [sp+20h] [bp-28h] BYREF
  int v18; // [sp+30h] [bp-18h] BYREF
  int v19; // [sp+34h] [bp-14h]
  char **v20; // [sp+38h] [bp-10h]
  int v21; // [sp+3Ch] [bp-Ch]
  unsigned int ***v22; // [sp+40h] [bp-8h]
  int v23; // [sp+44h] [bp-4h]

  v13[0] = aStderr_0;
  v13[1] = 6;
  v2 = a1[1];
  v3 = (char **)a1[2];
  v4 = a1[3];
  v5 = (unsigned int ***)a1[4];
  v6 = a1[5];
  v18 = *a1;
  v19 = v2;
  v20 = v3;
  v21 = v4;
  v22 = v5;
  v23 = v6;
  result = sub_1C424C(&v18);
  if ( !result )
  {
    v15 = &unk_2EAAE4;
    v17[0] = (unsigned int **)&v15;
    v8 = a1[1];
    v9 = (char **)a1[2];
    v10 = a1[3];
    v11 = (unsigned int ***)a1[4];
    v12 = a1[5];
    v18 = *a1;
    v19 = v8;
    v20 = v9;
    v21 = v10;
    v22 = v11;
    v23 = v12;
    <&std::io::stdio::Stderr as std::io::Write>::write_fmt(v14, v17, &v18);
    result = LOBYTE(v14[0]);
    if ( LOBYTE(v14[0]) != 4 )
    {
      v16[0] = v14[0];
      v20 = &off_2CAB94;
      v21 = 2;
      v22 = v17;
      v16[1] = v14[1];
      v23 = 2;
      v18 = 0;
      v17[3] = (unsigned int **)<std::io::error::Error as core::fmt::Display>::fmt;
      v17[2] = (unsigned int **)v16;
      v17[1] = (unsigned int **)sub_19B8BC;
      v17[0] = (unsigned int **)v13;
      core::panicking::panic_fmt((int)&v18, (int)&off_2CABA4);
    }
  }
  return result;
}
