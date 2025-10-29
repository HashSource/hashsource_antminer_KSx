int __fastcall std::process::Child::kill(_DWORD *a1, _DWORD *a2)
{
  int result; // r0

  if ( *a2 == 1 )
  {
    *a1 = 2;
    a1[1] = &off_2DFD54;
    return (int)&off_2DFD54;
  }
  else if ( kill(a2[2], 9) == -1 )
  {
    result = *_errno_location();
    *a1 = 0;
    a1[1] = result;
  }
  else
  {
    *(_BYTE *)a1 = 4;
    return 4;
  }
  return result;
}
