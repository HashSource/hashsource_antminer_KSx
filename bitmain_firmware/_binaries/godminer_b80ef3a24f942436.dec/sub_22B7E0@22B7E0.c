char *__fastcall sub_22B7E0(unsigned int a1, char *a2, unsigned int a3, int a4)
{
  if ( a1 )
  {
    if ( a3 <= a1 )
    {
      if ( a3 != a1 )
LABEL_4:
        core::str::slice_error_fail(a2, a3, a1, a3, a4);
    }
    else if ( a2[a1] <= -65 )
    {
      goto LABEL_4;
    }
  }
  return &a2[a1];
}
