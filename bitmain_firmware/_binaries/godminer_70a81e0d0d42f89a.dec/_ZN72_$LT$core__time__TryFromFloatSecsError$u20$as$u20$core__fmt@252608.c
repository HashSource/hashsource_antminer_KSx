int __fastcall <core::time::TryFromFloatSecsError as core::fmt::Display>::fmt(_BYTE *a1, int *a2)
{
  char *v3; // r1
  unsigned int v4; // r2

  v3 = (char *)&unk_2B6BFE;
  if ( *a1 )
    v3 = (char *)&unk_2B6BB5;
  v4 = 73;
  if ( !*a1 )
    v4 = 60;
  return core::fmt::Formatter::pad(a2, v3, v4);
}
