int __fastcall miniz_oxide::deflate::core::create_comp_flags_from_zip_params(int a1, int a2, int a3)
{
  int v4; // r3
  int v5; // r0
  int result; // r0

  v4 = a1;
  if ( a1 >= 10 )
    v4 = 10;
  if ( a1 <= -1 )
    v4 = 6;
  v5 = dword_29CA4C[v4];
  if ( a1 < 4 )
    v5 |= 0x4000u;
  if ( a2 > 0 )
    v5 |= 0x1000u;
  if ( !a1 )
    return v5 | 0x80000;
  switch ( a3 )
  {
    case 1:
      result = v5 | 0x20000;
      break;
    case 2:
      result = v5 & 0xFFFFF000;
      break;
    case 3:
      result = v5 | 0x10000;
      break;
    case 4:
      result = v5 | 0x40000;
      break;
  }
  return result;
}
