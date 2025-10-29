int sub_126E7C()
{
  char v1; // [sp+7h] [bp-5h] BYREF

  if ( dword_307764 != 1 )
    sub_1267F4();
  sub_1266E4();
  usleep(0x3E8u);
  v1 = 48;
  if ( write(dword_2E6C84, &v1, 1u) != 1 )
    sub_126980();
  sub_1267B8();
  usleep(0x3E8u);
  v1 = 49;
  if ( write(dword_2E6C84, &v1, 1u) != 1 )
    sub_126A18();
  return usleep(0x3E8u);
}
