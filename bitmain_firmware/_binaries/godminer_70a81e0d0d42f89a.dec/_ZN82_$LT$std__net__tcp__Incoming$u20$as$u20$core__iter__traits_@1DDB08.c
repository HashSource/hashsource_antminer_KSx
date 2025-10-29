int __fastcall <std::net::tcp::Incoming as core::iter::traits::iterator::Iterator>::next(int *a1, int **a2)
{
  int v3; // r2
  int result; // r0
  unsigned __int8 v5; // r1
  int v6; // [sp+4h] [bp-24h] BYREF
  __int16 v7; // [sp+8h] [bp-20h]
  __int64 v8; // [sp+Ch] [bp-1Ch]

  std::net::tcp::TcpListener::accept((int)&v6, *a2);
  if ( v7 == 2 )
  {
    result = HIDWORD(v8);
    v5 = v8;
    v3 = v8 >> 8;
  }
  else
  {
    result = v6;
    v5 = 4;
  }
  a1[1] = result;
  *a1 = v5 | (v3 << 8);
  return result;
}
