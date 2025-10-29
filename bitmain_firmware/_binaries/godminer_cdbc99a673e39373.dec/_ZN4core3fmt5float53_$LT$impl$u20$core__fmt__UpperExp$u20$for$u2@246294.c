void __fastcall core::fmt::float::<impl core::fmt::UpperExp for f32>::fmt(int a1, _DWORD *a2)
{
  int v2; // r2
  int v4; // r1

  v2 = a2[4];
  v4 = a2[6] & 1;
  if ( v2 == 1 )
    sub_236C7C((int)a2, v4, a2[5] + 1);
  else
    sub_237754();
}
