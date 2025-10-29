unsigned int __fastcall sub_229D08(unsigned int a1, int a2, unsigned int a3)
{
  if ( a1 )
  {
    if ( a3 <= a1 )
    {
      if ( a3 != a1 )
LABEL_4:
        core::str::slice_error_fail(a2);
    }
    else if ( *(char *)(a2 + a1) <= -65 )
    {
      goto LABEL_4;
    }
  }
  return a2 + a1;
}
