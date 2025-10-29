int __fastcall sub_1D77B8(int a1, int a2, int a3)
{
  int v5; // r4
  int v7; // r7
  int v8; // r6
  int v10; // [sp+4h] [bp-28h] BYREF
  int v11; // [sp+8h] [bp-24h] BYREF
  _DWORD v12[2]; // [sp+Ch] [bp-20h] BYREF
  char **v13; // [sp+14h] [bp-18h]
  int v14; // [sp+18h] [bp-14h]
  int **v15; // [sp+1Ch] [bp-10h]
  int v16; // [sp+20h] [bp-Ch]
  int *v17; // [sp+24h] [bp-8h] BYREF
  int (__fastcall *v18)(_DWORD *, int); // [sp+28h] [bp-4h]

  if ( !a3 )
    return 0;
  v18 = sub_1ACB54;
  v13 = &off_2DE980;
  v12[0] = 0;
  v5 = 1;
  v17 = &v10;
  v10 = a2;
  v14 = 1;
  v16 = 1;
  v15 = &v17;
  if ( core::fmt::Formatter::write_fmt(a1, v12) )
    return v5;
  v7 = a2 + 2;
  v8 = v7 + 2 * (a3 - 1);
  if ( v7 == v8 )
    return 0;
  while ( 1 )
  {
    v11 = v7;
    if ( <core::fmt::Formatter as core::fmt::Write>::write_char(a1, 58) )
      break;
    v14 = 1;
    v16 = 1;
    v15 = &v17;
    v12[0] = 0;
    v17 = &v11;
    v18 = sub_1ACB54;
    v13 = &off_2DE980;
    if ( core::fmt::Formatter::write_fmt(a1, v12) )
      break;
    v7 += 2;
    if ( v7 == v8 )
      return 0;
  }
  return v5;
}
