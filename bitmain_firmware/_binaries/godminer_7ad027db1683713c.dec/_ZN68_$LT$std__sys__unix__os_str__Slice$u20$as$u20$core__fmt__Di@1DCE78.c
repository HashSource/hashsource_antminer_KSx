int __fastcall <std::sys::unix::os_str::Slice as core::fmt::Display>::fmt(int a1, int a2, int *a3)
{
  __int64 v4; // kr00_8
  int v5; // r6
  __int64 v7; // [sp+0h] [bp-28h] BYREF
  _DWORD v8[4]; // [sp+8h] [bp-20h] BYREF
  _DWORD v9[4]; // [sp+18h] [bp-10h] BYREF

  if ( !a2 )
    return <str as core::fmt::Display>::fmt(aRustc9eb3afe9e, 0, a3);
  v7 = core::str::lossy::Utf8Chunks::new(a1, a2);
  <core::str::lossy::Utf8Chunks as core::iter::traits::iterator::Iterator>::next(v8, (int *)&v7);
  if ( v8[0] )
  {
    while ( 1 )
    {
      v9[0] = v8[0];
      v9[1] = v8[1];
      v9[2] = v8[2];
      v9[3] = v8[3];
      v4 = core::str::lossy::Utf8Chunk::valid((int)v9);
      if ( !((unsigned __int64)core::str::lossy::Utf8Chunk::invalid((int)v9) >> 32) )
        break;
      v5 = 1;
      if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a3)
        || <core::fmt::Formatter as core::fmt::Write>::write_char(a3) )
      {
        return v5;
      }
      <core::str::lossy::Utf8Chunks as core::iter::traits::iterator::Iterator>::next(v8, (int *)&v7);
      if ( !v8[0] )
        return 0;
    }
    return <str as core::fmt::Display>::fmt((char *)v4, HIDWORD(v4), a3);
  }
  else
  {
    return 0;
  }
}
