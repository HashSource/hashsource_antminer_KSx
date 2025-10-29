char *__fastcall sub_215784(unsigned int a1, char *a2, unsigned int a3, int a4)
{
  if ( a1 )
  {
    if ( a1 >= a3 )
    {
      if ( a1 != a3 )
LABEL_4:
        core::str::slice_error_fail(a2, a3, 0, a1, a4);
    }
    else if ( a2[a1] <= -65 )
    {
      goto LABEL_4;
    }
  }
  return a2;
}
