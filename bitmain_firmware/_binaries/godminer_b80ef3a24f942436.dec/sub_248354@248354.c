int __fastcall sub_248354(int a1, int *a2)
{
  int v4; // r0
  int v5; // r1
  int v7[6]; // [sp+0h] [bp-18h] BYREF

  if ( ((int (*)(void))sub_25CD40)() )
    return 1;
  v4 = *a2;
  v5 = a2[1];
  v7[5] = 0;
  v7[4] = (int)aLibraryCoreSrc;
  v7[0] = 0;
  v7[3] = 1;
  v7[2] = (int)&off_2EEF44;
  if ( core::fmt::write(v4, v5, v7) )
    return 1;
  else
    return sub_25CD40(a1 + 4, a2);
}
