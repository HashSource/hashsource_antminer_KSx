int __fastcall object::read::util::data_range(
        int a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6)
{
  int result; // r0
  bool v9; // cf
  int v10; // r1
  bool v11; // zf

  result = 0;
  if ( a4 >= a3 )
  {
    v9 = (unsigned int)a4 >= (unsigned int)a3;
    v10 = (a4 - a3) >> 32;
    LODWORD(a3) = a4 - a3;
    v11 = HIDWORD(a4) == HIDWORD(a3) + !v9;
    if ( !v10 )
      v11 = a6 == 0;
    if ( v11 && (unsigned int)a3 <= a2 )
    {
      result = a1 + a3;
      if ( a2 - (unsigned int)a3 < a5 )
        return 0;
    }
  }
  return result;
}
