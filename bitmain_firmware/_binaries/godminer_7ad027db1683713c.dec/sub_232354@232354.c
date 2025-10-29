int __fastcall sub_232354(unsigned int *a1, int *a2)
{
  int v4; // r0
  int v5; // r1
  int v7[6]; // [sp+0h] [bp-18h] BYREF

  if ( sub_246D40(a1, (int)a2) )
    return 1;
  v4 = *a2;
  v5 = a2[1];
  v7[5] = 0;
  v7[4] = (int)aLibraryCoreSrc;
  v7[0] = 0;
  v7[3] = 1;
  v7[2] = (int)&off_2CEF44;
  if ( core::fmt::write(v4, v5, v7) )
    return 1;
  else
    return sub_246D40(a1 + 1, (int)a2);
}
