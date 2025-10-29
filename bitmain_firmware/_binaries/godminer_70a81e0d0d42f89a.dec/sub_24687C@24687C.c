int __fastcall sub_24687C(int a1, int *a2)
{
  int v4; // r0
  int v5; // r1
  _DWORD v7[6]; // [sp+0h] [bp-18h] BYREF

  if ( ((int (*)(void))sub_25B268)() )
    return 1;
  v4 = *a2;
  v5 = a2[1];
  v7[5] = 0;
  v7[4] = aLibraryCoreSrc;
  v7[0] = 0;
  v7[3] = 1;
  v7[2] = &off_2E5F44;
  if ( core::fmt::write(v4, v5, v7) )
    return 1;
  else
    return sub_25B268(a1 + 4, a2);
}
