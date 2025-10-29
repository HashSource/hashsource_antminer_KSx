int __fastcall <std::sys::unix::os_str::Slice as core::fmt::Display>::fmt(int a1, int a2, int *a3)
{
  __int64 v4; // kr00_8
  int v5; // r1
  int v6; // r6
  __int64 v8; // [sp+0h] [bp-28h] BYREF
  _DWORD v9[4]; // [sp+8h] [bp-20h] BYREF
  _DWORD v10[4]; // [sp+18h] [bp-10h] BYREF

  if ( !a2 )
    return <str as core::fmt::Display>::fmt(aRustc9eb3afe9e, 0, a3);
  v8 = core::str::lossy::Utf8Chunks::new(a1, a2);
  <core::str::lossy::Utf8Chunks as core::iter::traits::iterator::Iterator>::next(v9, (int *)&v8);
  if ( v9[0] )
  {
    while ( 1 )
    {
      v10[0] = v9[0];
      v10[1] = v9[1];
      v10[2] = v9[2];
      v10[3] = v9[3];
      v4 = core::str::lossy::Utf8Chunk::valid(v10);
      core::str::lossy::Utf8Chunk::invalid(v10);
      if ( !v5 )
        break;
      v6 = 1;
      if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a3, v4, HIDWORD(v4))
        || <core::fmt::Formatter as core::fmt::Write>::write_char(a3, 65533) )
      {
        return v6;
      }
      <core::str::lossy::Utf8Chunks as core::iter::traits::iterator::Iterator>::next(v9, (int *)&v8);
      if ( !v9[0] )
        return 0;
    }
    return <str as core::fmt::Display>::fmt(v4, HIDWORD(v4), a3);
  }
  else
  {
    return 0;
  }
}
