int __fastcall <std::os::unix::net::ancillary::ScmRights as core::iter::traits::iterator::Iterator>::next(_DWORD *a1)
{
  unsigned int v1; // r1

  v1 = a1[1];
  if ( v1 < 4 )
    return 0;
  *a1 += 4;
  a1[1] = v1 - 4;
  return 1;
}
