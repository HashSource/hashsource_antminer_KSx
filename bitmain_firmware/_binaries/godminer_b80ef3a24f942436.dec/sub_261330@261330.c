int __fastcall sub_261330(_BYTE **a1, int *a2)
{
  if ( **a1 )
    return core::fmt::Formatter::pad(a2, aTrue_0, 4u);
  else
    return core::fmt::Formatter::pad(a2, aFalse_0, 5u);
}
