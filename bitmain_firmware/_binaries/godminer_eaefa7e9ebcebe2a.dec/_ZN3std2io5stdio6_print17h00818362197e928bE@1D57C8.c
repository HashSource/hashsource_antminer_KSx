int __fastcall std::io::stdio::_print(int *a1)
{
  int v1; // r3
  char **v2; // r4
  int v3; // r5
  unsigned int ***v4; // r6
  int v5; // r7
  int result; // r0
  int v7; // r0
  int v8; // [sp+0h] [bp-60h]
  int v9; // [sp+4h] [bp-5Ch]
  char **v10; // [sp+8h] [bp-58h]
  int v11; // [sp+Ch] [bp-54h]
  unsigned int ***v12; // [sp+10h] [bp-50h]
  int v13; // [sp+14h] [bp-4Ch]
  _DWORD v14[2]; // [sp+18h] [bp-48h] BYREF
  _DWORD v15[3]; // [sp+20h] [bp-40h] BYREF
  unsigned int *v16; // [sp+2Ch] [bp-34h] BYREF
  _DWORD v17[2]; // [sp+30h] [bp-30h] BYREF
  unsigned int **v18[4]; // [sp+38h] [bp-28h] BYREF
  int v19; // [sp+48h] [bp-18h] BYREF
  int v20; // [sp+4Ch] [bp-14h]
  char **v21; // [sp+50h] [bp-10h]
  int v22; // [sp+54h] [bp-Ch]
  unsigned int ***v23; // [sp+58h] [bp-8h]
  int v24; // [sp+5Ch] [bp-4h]

  v8 = *a1;
  v9 = a1[1];
  v10 = (char **)a1[2];
  v11 = a1[3];
  v12 = (unsigned int ***)a1[4];
  v13 = a1[5];
  v14[1] = 6;
  v14[0] = aStdout_0;
  v1 = a1[1];
  v2 = (char **)a1[2];
  v3 = a1[3];
  v4 = (unsigned int ***)a1[4];
  v5 = a1[5];
  v19 = *a1;
  v20 = v1;
  v21 = v2;
  v22 = v3;
  v23 = v4;
  v24 = v5;
  result = sub_1D54A0(&v19);
  if ( !result )
  {
    v7 = dword_307CC0;
    __dmb(0xBu);
    if ( v7 != 4 )
      sub_79E9C();
    v16 = &dword_307CA0;
    v18[0] = &v16;
    v19 = v8;
    v20 = v9;
    v21 = v10;
    v22 = v11;
    v23 = v12;
    v24 = v13;
    <&std::io::stdio::Stdout as std::io::Write>::write_fmt(v15, v18, &v19);
    result = LOBYTE(v15[0]);
    if ( LOBYTE(v15[0]) != 4 )
    {
      v17[0] = v15[0];
      v21 = &off_2DEB94;
      v22 = 2;
      v23 = v18;
      v17[1] = v15[1];
      v24 = 2;
      v19 = 0;
      v18[3] = (unsigned int **)<std::io::error::Error as core::fmt::Display>::fmt;
      v18[2] = (unsigned int **)v17;
      v18[1] = (unsigned int **)sub_1ACB10;
      v18[0] = (unsigned int **)v14;
      core::panicking::panic_fmt((int)&v19, (int)&off_2DEBA4);
    }
  }
  return result;
}
