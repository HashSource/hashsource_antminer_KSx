int __fastcall sub_24D8EC(int a1, int a2, int a3, int a4, int a5)
{
  int v8; // r1
  int result; // r0

  if ( a3 == 1114112 || (v8 = (*(int (__fastcall **)(int, int))(a2 + 16))(a1, a3), result = 1, !v8) )
  {
    if ( a4 )
      return (*(int (__fastcall **)(int, int, int))(a2 + 12))(a1, a4, a5);
    else
      return 0;
  }
  return result;
}
